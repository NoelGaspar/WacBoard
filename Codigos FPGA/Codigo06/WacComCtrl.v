`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Autor: Wladimir Araya
//	Nota: Modulo para proyecto de tesis de pregrado.
//
// Descripción: Este bloque es un driver para la comunicación entre el puerto B
//	y el controlador de la tarjeta.
//
//	Detalle: Implementa una maquina de estados que espera hasta que lleguen 
//	tres datos de interes( 1 de control y 2 de configuracion). cuando se
//	ha completado la comunicacion, procede a leer las tres primeras direcciones de
//	de la BRAM desde su puerto b y posteriormente genera las señales necesarias para 
//	el controlador de la tarjeta.
//
//////////////////////////////////////////////////////////////////////////////////
module WacComCtrl(clk,dataStb,addrEpp,datoAdc,readyAdc,flag_adc_seq,busBramIn,busBramAddr,busBramOut,ctrlWeBram,clkBram,ctrlWord,confWord, busy, contData,controlEn,seq_En,ADC_En,seq_mode,modeAdc,nSamples,stTest);
//INPUT
input 				clk;				//Clk desde la fpga. Maxima velocidad f=50MHz
input 				dataStb;			//Señal de storb de los datos.	
input [7:0]			busBramIn;		//Dato de salida del puerto B de la memoria
input [1:0]			addrEpp; 		//Addres proveniente desde el bloque epp.
input [11:0]		datoAdc;			//Dato recibido desde el ADC
input 				readyAdc;		//Señal que nos avisa cuando esta lista la conversion del adc
input					flag_adc_seq;   //señal que indica desde el secuenciador que hay que leer el adc

//OUTPUT
output [11:0] 		busBramAddr;	//Dirección para el puerto B de la memoria
output reg[7:0]	busBramOut=0;	//Dato de entrada al puerto B de la memoria
output				ctrlWeBram;		//Control de escritura del puerto B de la memoria
output 				clkBram;			//Clk del puerto B de la memoria
output [7:0] 		ctrlWord;		//Palabra de control extraida desde la comunicación
output [15:0] 		confWord;		//Palabra de onfiguración extraida desde la comunicación 
output reg 			busy=0;  		//Señal que evita colisiones de lectura en la BRAM. es 1 mientras se este leyendo datos desde la tarjeta
output [2:0] 		contData;		// indica si se han llegado correctamente los datos de configuracion
output 				controlEn;
output reg			ADC_En=0;
output reg			seq_En=0;
output reg[1:0]	seq_mode=0;
output reg 			modeAdc=0;		//indica si el modo del adc es continuo o de un solo dato.
output reg[11:0]	nSamples=0;		//indica cuantos datos queremos muestrear.
output [3:0]		stTest;

parameter 	IDLE_MODE		=	4'b0000,
				CTRL_MODE		=	4'b0001,
				CONF_MODE_L		= 	4'b0010,
				CONF_MODE_H		= 	4'b0011,
				SEND_MODE		=	4'b0100,
				TEMP_MODE		=	4'b0101,
				ADC_WR_MODE		= 	4'b0110,
				ADC_WAIT_MODE	=	4'b0111,
				TEST_MODE		= 	4'b1111,
				SEQ_MODE			=	4'b1000,
				SEQ_WAIT_MODE	=	4'b1001,
				DUMMY_MODE		=	4'b1010;

reg [3:0]	stCur		=	IDLE_MODE;	//estado actual
reg [3:0]	stNext	= 	IDLE_MODE;	//estado siguiente
reg [3:0]	stOld		=  IDLE_MODE;	//estado anterior
reg [7:0]   ctrl		=	0;				//dato de control BRAM(0)
reg [15:0]	conf		=	0;				//dato de configuración {BRAM(2),BRAM(1)}
reg [2:0] 	cont		=	0;				//Contador para llevar la cuenta de cuantos datos han llegado.
reg [2:0]   contNext	=	0;				//Maquina de estados para el contador
reg [11:0]	nSamples2=	0;
reg [4:0]	dummy_cont=0;			//contador para los tiempos dummy para que el reset se acomode the CSA en the bean se acomode mejor.

reg [11:0]	addr	=	12'h0; 		//registro para el addr del puerto b de la bram
reg weMem	=	0;						//registro para el write enable del puerto b de la bram
reg clkMem	=	0;						//registro para clk del puerto b de la bram.
reg ctrlEn	=	0;
reg halfL	=	0;						//indica si hay que escribir los primeros 8 bits o los ultimos 8 bits
reg [7:0]n_seq		=	0;	
reg [7:0]cont_seq	=	0;	
	
always@(posedge clk)	//actualizamos el estado y la salida(registros ctrl, config y addr ).
begin
	stCur<=stNext;
	nSamples<=conf[11:0];
	nSamples2<={conf[10:0],1'b0};
	case(stNext)
		IDLE_MODE:		begin addr	<=	12'h000;end
		CTRL_MODE:		begin ctrl	<=	busBramIn;
									addr	<=	12'h001;end
		CONF_MODE_L:	begin conf[7:0]	<=	busBramIn;
									addr			<=	12'h002; 
									if(ctrl[3:0]==8'h4)
									begin
										n_seq 	<= busBramIn;end
									end	
		CONF_MODE_H:	begin conf[15:8]	<=	busBramIn;
									addr			<=	12'h003; end
		TEMP_MODE:		begin 
									dummy_cont<=8'b0;
									if(cont_seq>=n_seq)
										cont_seq	<=	0;
									else
										begin
											cont_seq	<=	cont_seq+1;
											conf[7:0]<=	cont_seq;
										end
									if(stOld==ADC_WR_MODE)
										begin
											ctrl	<=	{ctrl[7:4],4'h4};
										end
									else
										begin
											addr			<=	12'h003;
										end
							end
		ADC_WR_MODE:	begin addr	<=	addr+1; 
									halfL	<=	halfL+1;
									//ctrl	<=	{ctrl[7:4],4'h4};
									if(addr[0]==1)
										busBramOut	<=	datoAdc[7:0];
									else 
										busBramOut	<=	{4'b0000,datoAdc[11:8]};
							end	
		SEQ_MODE:	begin 
								//if(flag_adc_seq)
									ctrl <=	{ctrl[7:4],4'h8};	
							end
		DUMMY_MODE:	begin
							dummy_cont<=dummy_cont+8'b1;
						end
	endcase	
end

always@(posedge clk)
	cont	<=	contNext;

always@(*)//contamos hasta que hayan llegado 3 datos, que son los necesarios para escribir {BRAM(0),BRAM(1),BRAM(2)} 
	begin
		contNext=cont;
		case(cont)
			0:begin if((dataStb==0)&&(addrEpp==2'b00))	contNext	=	1; else contNext	=	0;end
			1:begin if((dataStb==0)&&(addrEpp==2'b01))	contNext	=	2; else contNext	=	1;end
			2:begin if((dataStb==0)&&(addrEpp==2'b10)) 	contNext	=	3; else contNext	=	2;end
			3:begin contNext	=	0; end
		endcase
	end 

 

always@(*) 
	begin
		stNext	=	stCur;
		case(stCur)
			IDLE_MODE:
				begin
					clkMem	=	0;
					busy		=	0;
					ctrlEn	=	0;
					seq_En	= 	0;
					ADC_En	=	0;
					weMem		=	0;
					modeAdc	=	0;
					stOld		=	IDLE_MODE;
					if(cont==3)
						begin
							stNext=	SEND_MODE;
						end
					else
						begin
							stNext	=	IDLE_MODE;
						end
				end
			CTRL_MODE:
				begin
					stNext	=	SEND_MODE;
					stOld		=	CTRL_MODE;
					clkMem	=	0;
					weMem		=	0;
					busy		=	1;
					ctrlEn	=	0;
					seq_En	= 	0;
					ADC_En	=	0;
					modeAdc	=	0;
				end
			CONF_MODE_L:
				begin
					stNext=	SEND_MODE;
					stOld	=	CONF_MODE_L;
					clkMem=	0;
					weMem	=	0;
					busy	=	1;
					ctrlEn=	0;
					ADC_En	=	0;
					seq_En	= 	0;
					modeAdc	=	0;
				end
			CONF_MODE_H:
				begin
					stOld		=	CONF_MODE_H;
					stNext	=	TEMP_MODE;
					clkMem	=	0;
					weMem		=	0;
					busy		=	1;
					ctrlEn	=	0;
					seq_En	=	0;
					ADC_En	=	0;
					modeAdc	=	0;
				end
			SEND_MODE:
				begin
					clkMem	=	1;
					busy		=	1;
					ctrlEn	=	0;
					modeAdc	=	0;
					seq_En	= 	0;
					ADC_En	=	0;
					case(stOld)
						IDLE_MODE:		begin stNext	=	CTRL_MODE;  	stOld	=	IDLE_MODE; 	weMem	=	0;end
						CTRL_MODE:		begin stNext	=	CONF_MODE_L;	stOld	=	CTRL_MODE; 	weMem	=	0;end
						CONF_MODE_L:	begin stNext	=	CONF_MODE_H; 	stOld	=	CONF_MODE_L;weMem	=	0;end
						ADC_WR_MODE:	begin stOld		=	ADC_WR_MODE; 	weMem	=	1;
												if(halfL==1)
													begin
														stNext	=	ADC_WR_MODE;
													end
												else
													begin
														if(ctrl[3:0]==4'h9&&(addr<(nSamples2+3))) stNext	=	ADC_WAIT_MODE;  	//modo continuo
														else if((ctrl[7]==1'b1)&&(cont_seq < n_seq))	stNext	=	DUMMY_MODE;
														else stNext	=	IDLE_MODE;							//modo single
													end
												end
						default:begin stNext	=	IDLE_MODE; stOld	=	IDLE_MODE; weMem	=	0;end
					endcase	
				end 
		TEMP_MODE:
				begin
					busy		=	1;		
					clkMem	=	0;
					ctrlEn	=	1;
					weMem		=	0;
					modeAdc	=	0;
					if(ctrl[3:0]==4'h9) modeAdc	=	1; 	//modo continuo
					else modeAdc	=	0;					//modo simple
					if(stOld==ADC_WR_MODE)
						begin
							stOld		=	ADC_WR_MODE;
							stNext	= 	SEQ_WAIT_MODE;
							seq_En	= 	1;
							ADC_En	=	0;
						end
				   else
						begin
							stOld	=	TEMP_MODE;
							if(ctrl[3:0]==4'h9|| ctrl[3:0]==4'h8)// si es alguno de los adc pasamos al modo adc
								begin 
									stNext	=	ADC_WAIT_MODE;
									ADC_En	=	1;
									seq_En	=	0;
								end
							else 	if(ctrl[7]==1'b1&& ctrl[3:0]==4'h4)	//si es el modo de funciones de peso del secuenciador entramos al loop.
								begin
									stNext	= 	SEQ_WAIT_MODE;
									seq_mode	=	ctrl[5:4];
									ADC_En	=	0;
									seq_En	= 	1;
								end
							else if(ctrl[3:0]==4'h4)
								begin
									stNext	=	IDLE_MODE;
									ADC_En	=	0;
									seq_mode	=	ctrl[5:4];
									seq_En	=	1;
								end
							else
								begin
									stNext	=	IDLE_MODE;
									seq_En	=	0;
									ADC_En	=	0;
								end
						end
				end
		ADC_WAIT_MODE:
				begin
					busy		=	1;
					stOld		=	ADC_WAIT_MODE;
					clkMem	=	0;
					ctrlEn	=	0;
					ADC_En	=	0;
					seq_En	= 	0;
					weMem		=	1;
					if(readyAdc==1) stNext	=	ADC_WR_MODE;   //espera hasta que el adc haya terminado. una vez que esta listo (readyADC=1) entonces se va a escribir
					else stNext		=	ADC_WAIT_MODE;
					if(ctrl[3:0]==4'h9	&&	(addr<(nSamples2+4))) modeAdc	=	1; //si esta en modo continuo debe seguir
					else modeAdc	=	0;
				end
		ADC_WR_MODE:
				begin
					busy		=	1;
					stOld		=	ADC_WR_MODE;
					clkMem	=	0;
					ctrlEn	=	0;
					ADC_En	=	0;
					seq_En	= 	0;
					weMem		=	1;
					if(	(addr<(nSamples2+4))	&&	ctrl[3:0]==4'h9) // modo continuo
						begin
							stNext	=	SEND_MODE;
							modeAdc	=	1;
						end
					else if(ctrl[3:0]==4'h8)//leer un solo dato	
						begin
							stNext	=	SEND_MODE;
							modeAdc	=	0;
						end
					else 
						begin
							stNext	=	IDLE_MODE;
							modeAdc	=	0;
						end
				 end
		SEQ_WAIT_MODE:
				begin
					busy		=	1;
					stOld		=	SEQ_WAIT_MODE;
					clkMem	=	0;
					ctrlEn	=	0;
					seq_En	=	0;
					ADC_En	=	0;
					weMem		=	0;
					if(flag_adc_seq==1)
						begin
							stNext	=	SEQ_MODE;	
						end
					else
						begin
							stNext	=	SEQ_WAIT_MODE;
						end
				end
		SEQ_MODE:
				begin
					busy		=	1;
					stOld		= 	SEQ_MODE;
					clkMem	=	0;
					ADC_En	=	1;
					seq_En	= 	0;
					weMem 	=	0;
					stNext	=	ADC_WAIT_MODE;
				end
		DUMMY_MODE:
				begin
					busy		=	1;
					stOld		=	ADC_WR_MODE;
					clkMem	=	0;
					ADC_En	=	0;
					seq_En	=	0;
					weMem		=	0;
					if(dummy_cont<20)
						begin
							stNext		=	DUMMY_MODE;
						end
					else
						begin
							stNext		=	TEMP_MODE;
						end	
				end
		default: 
			begin 
				stNext=	IDLE_MODE;
				busy	=	0;
				stOld	=	IDLE_MODE;
				clkMem=	0;
				ctrlEn=	0;
				modeAdc	=	0;
			end			
endcase
end


assign stTest		=	stCur;//linea de prueba para encontrar el error.
assign ctrlWeBram	=	weMem;
assign clkBram		=	clkMem; 
assign busBramAddr=	addr;
assign ctrlWord	=	ctrl;
assign confWord	=	conf;
assign contData	=	cont;
assign controlEn	=	ctrlEn; 
endmodule 