`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//Autor: Wladimir Araya
// Este bloque controla la tarjeta wac10 a partir de los datos que lee desde la memoria BRamAB
// la señal dataStb indica que se ha escrito algo en la memoria.
//////////////////////////////////////////////////////////////////////////////////
module wacCtrl(clk,dataStb,busBramAddr,busBramIn,busBramOut,ctrlWeBram,clkBram, ctrlWac,confWac, adcWacEn, confWacEn, busWacIn, busy);

//INPUTS
input clk;						//clk de entrada 50Mhz
input dataStb;					//señal que controla las escrituras del epp
input [7:0]		busBramIn;	//salida B de la memoria entrada a wacCtrl
input [7:0]		busWacIn;

output [11:0]	busBramAddr;// direccion B de la memoria controlada por wacCtrl
output [7:0]	busBramOut;	//entrada B de la memoria salida de wacCtrl
output ctrlWeBram;			//Control de escritura importante para evitar colisiones de lectura escritura entre los puertos AB //TODO
output clkBram;				//clk B de la memoria controla las escrituras y lecturas en flancos de subida.
output [7:0] ctrlWac;
output [15:0] confWac;
output adcWacEn;
output confWacEn;
output reg busy=0;

//Posibles estados de la maquina de estado
parameter 	idleMode= 	3'b000,
				ctrlMode= 	3'b001,
				cnfgModeL= 	3'b010,
				cnfgModeH= 	3'b011,
				sendMode=	3'b100,
				exeMode=		3'b101,
				adcWrMode=	3'b110,
				adcRdMode=	3'b111;
								
				
reg [2:0]	stCur=idleMode;	//estado actual
reg [2:0]	stNext=0;			//estado siguiente
reg [2:0]	stOld;				//estado anterior
reg [7:0]	ctrl=0;				//dato de control BRAM(0)
reg [15:0] 	cnfgWord=0;			//dato de configuracion {BRAM(2),BRAM(1)}
reg [2:0]  	cont=0;				// contador que avisa cuando se hayan escrito los 3 primeros bloques de la memoria
	
reg [11:0] 	addr=12'h003;		//registro interno para controlar la direccion de la memoria de forma secuencial
reg msjRecived=0;					//habilita la recepcion de datos 
reg weMem=0;						//registro interno para controlar el enable de escritura de memoria de forma secuencial
reg clkMem=0;						//registro interno para controlar el clk de escritura de memoria de forma secuencial

reg adcEn	=0;			//flanco para las acciones de adc
reg cnfgEn	=0;			//flanco para las acciones de configuracion

reg [6:0] adcWrWait=0;	//contador para esperar que finalice la escritura adc bram
reg [6:0] adcRdWait=0;	//contador para esperar que finalice la lectura bram epp

//los flancos positivos de dataStb indican que se leyo o escribio un dato por ende son necesarios para cambiar de estados
reg [2:0] 	dataStbReg;
always@(posedge clk) 
	dataStbReg<={dataStbReg[1:0],dataStb};
wire dataStbRE=(dataStbReg[2:1]=='b01);


always@(posedge clk)  //actualiza el estado y las salidas
begin
stCur=stNext;
if(stCur==ctrlMode)
	ctrl=busBramIn;
if(stCur==cnfgModeL)
	cnfgWord[7:0]=busBramIn;	
if(stCur==cnfgModeH)
	cnfgWord[15:8]=busBramIn;	
end


always@(posedge clk)		//este bloque permite contar cuantos datos se han escrito en la memoria desde el EPP
	begin
	if(dataStbRE)
		cont=cont+1;
	if(msjRecived&&cont>=3)
			cont=0;
	end	 	



//calculamos el siguiente estado en funcion del estado actual
//
always@(negedge clk)
	case(stCur)
		idleMode:begin	 				//modo de espera a la llegada de un mensaje
						cnfgEn=0;		//reseteamos el flanco de enable de para la configuracion
						adcWrWait=0;	//reseteamos los contadores de lectura y escritura del adc
						adcRdWait=0;
						clkMem=0;		//nos aseguramos de que el clk permanesca en 0
						addr=0;	
						if(cont==3)		//si ya escribimos las primeras tres direcciones, entonces salimos del estado de espera
							begin
								stNext=sendMode;	//el siguiente modo sera el de lectura de la primera direccion, enviamos un clock a la memoria con la direccion = 0			
								msjRecived=1;		//reseteamos el contador de escrituras en la bram para una nueva escritura
								stOld=idleMode;	// stOld nos permite recordar en donde estabamos para saber a donde debemos volver luego de estar en la opcion de envio de clk a la bram
								busy=1;  			// hasta que hallamos terminado de leer los tres bloques estaremos en estado busy impidiendo choques lectura-escritura
							end		
						else				//si aun no se han escrito entonces seguimos en espera
							begin
							stNext=idleMode;	
							msjRecived=0;	//recepciones de escritura habilitadas
							end
					end

		ctrlMode:begin						//modo de lecctura de la primera direccion de la memoria.
						msjRecived=0;		//recepciones de escritura habilitadas					
						stNext=sendMode;	//el siguiente modo sera el de lectura de la segunda direccion de la memoria, enviamos un clock a la memoria con la direccion 1
						addr=1;
						stOld=ctrlMode; 
						clkMem=0;			//fin del clock generado en sendMode
					end
					
		cnfgModeL:begin					
						stNext=sendMode; 	//el siguiente modo sera el de lectura de la tercera direccion de la memoria, enviamos un clock a la memoria con la direccion 2
						addr=2;				
						stOld=cnfgModeL;
						clkMem=0;			// fin del clock generado en sendMode
					end
		
		cnfgModeH:begin
						stNext=exeMode;	//el siguiente modo sera el de ejecucion de de la accion. 
						addr=3;
						clkMem=0;
					end
		sendMode:begin						//en este modo es cuando enviamos el clock. flanqueamos el clock de la memoria y volvemos al siguiente estado dependiendo de stOld
						clkMem=1;			//
						case(stOld)
							idleMode: stNext=ctrlMode;
							ctrlMode: stNext=cnfgModeL;
							cnfgModeL:stNext=cnfgModeH;
						endcase
					end

		exeMode:	case(ctrl)				//Modo de ejecucion. exiten 3 posibilidades leer el adc1 el adc2 o configurar alguno de los bloques digitales.
					8'h11:begin adcEn=1; stNext=adcWrMode; end	
					8'h12:begin adcEn=1; stNext=adcWrMode; end	
					default: begin cnfgEn=1; stNext= idleMode; busy=0;end
					endcase

		adcWrMode: 	begin					// este modo lee lo que provenga desde el adc y lo escribe en la memoria. dependiendo si es adc1 o adc2.
						adcEn=0;				// reseteamos el flanco para el eneable de lectura del adc
						adcWrWait=adcWrWait+1;//esperamos que se escriban todos los datos
						if(cont!=0)        //rechazo mensajes que lleguen mientras estoy escribiendo el adc
							msjRecived=1;
						addr=addr+1;
						
						
						
						if(adcWrWait<30)
							stNext=adcWrMode;
						else
							stNext=adcRdMode;
						end		
		
		adcRdMode: 	begin			//modo de lectura desde epp hacia el pc.
						if(cont!=0)	//rechazo mensajes que lleguen mientras estoy escribiendo el adc
							msjRecived=1;	
						busy=0;	
						adcRdWait=adcRdWait+1;
						if(adcRdWait<30)
							stNext=adcRdMode;
						else
							stNext=idleMode;
						end		
		
		
	endcase
	
assign ctrlWeBram=weMem;
assign clkBram=clkMem; 		//actualizamos el clock de la memoria
assign busBramAddr=addr;	//actualizamos la direccion del la memoria
assign ctrlWac=ctrl;
assign confWac= cnfgWord;
assign adcWacEn= adcEn;
assign confWacEn=~cnfgEn; // debe estar en 1, inicia cuando flaquea hacia abajo.
endmodule
