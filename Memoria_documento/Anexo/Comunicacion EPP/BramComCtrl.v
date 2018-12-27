`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Autor: Wladimir Araya
//	Nota: Modulo para proyecto de tesis de pregrado.
// 
//	Descripción: 
//	El módulo BramComCtrl implementa un controldador para la comunicación entre
// un modulo EppCtrl y una memoria ram. Este controlador esta basado en la 
//	documentación entregada por Digilent. Especificamente el proyecto
// BramCfg disponible en www.digilent.com
// 
//	Detalle: Dado que las direcciones son muy pocas (solo 8 bits) en esta
//	aplicación se utiliza la direccion como palabra de control para un puntero
// a las direcciones y no como una direccion en si misma.
// -Los primeros dos bits en la palabra de control indican si se estan eviando datos (00),
//	o se quiere leer cual es la direccion actual en la memoria (01 para LOW addr, 10 para High addr).
//	-Cuando estamos en el modo de evio de datos (addr[7:6]=00) tenemos tres opciones, escribir
//	en la primera direccion de la memoria(ctrlMode), escribir en la segunda direccion (confModeL),
// escribir en la tercera dirección (confModeH), o entrar al modo de lectura continua desde la 3ra a 
// la ultima dirección(adcMode).
//	-En adcMode las direcciones de la memoria se van actualizando cada vez que se recibe un dato. 
// el puntero se actualiza a la direccion siguiente (regBramAddr=regBramAddr+1) Partiendo desde la 
// cuarta direccion
//	-Los modos de lectura y escritura continua fueron hechos pensando en las funciones disponibles por adpt
//	para c++. En estas existe un modo en el cual se mandan muchos datos seguidos pero solo se setea una direccion.
//	-El clock de se desabilita si es que la señal de busy esta activa(1). En otro caso es igual al negado de dataStb
//	-El dato de salida desde la memoria pasa directamente como dato de entrada al controlador del Epp
//	-El control de escritura se activa solo si estamos en el modo de transmision de datos (addr[7:6]=00).
//
//	Comentario: el bloque ram es una memoria de 2k x 8bits  por lo que las direcciónes
// 				utilizadas son de 10bits
//////////////////////////////////////////////////////////////////////////////////
module BramComCtrl(clk,stbData,stbAddr, ctrlWr,busEppIn, busEppOut,busEppAddrIn, busBramAddr,busBramIn, busBramOut,ctrlWeBram,clkBram, stmBusy);
//Inputs
input clk;
input stbData;					//[Epp] 	data strobe
input stbAddr;					//[Epp] 	Addr strobe
input ctrlWr;					//[Epp] 	Control Write
input [7:0] busEppIn;		//[Epp] 	Bus de datos provenientes desde el Epp
input [7:0] busEppAddrIn;	//[Epp] 	Ultima direccion actualizada desde el Epp
input [7:0] busBramIn; 		//[Bram] Dato de salida desde el block Ram
input stmBusy;					//[App]	Señal que permite sincronizar la lectura escritura de ambos 
									//			puertos de la memoria evitando
									
//OUTPUTS
output [7:0] 	busEppOut;	//[Epp]  Bus de dato de salida, entrada de EppCtrl.
output [11:0] 	busBramAddr;//[Bram] señal que indica el addres para BRAM.
output [7:0] 	busBramOut; //[Bram] señal de dato, entrada para BRAM.
output ctrlWeBram;			//[Bram] enable de escritura
output clkBram;				//[Bram] clock para BRAM


localparam 	addrBramDB		= 2'b00,	 //Envio de datos 
				addrBramAddrL	= 2'b01,	 //Lectura de los bit Menos significativos de la dirección actual
				addrBramAddrH	= 2'b10,	 //Lectura de los bits mas significativos de la dirección actual
				ctrlMode			= 4'b0000,//Control mode  
				confModeL		= 4'b0001,//Configuration mode L
				confModeH		= 4'b0010,//Configuration mode H
				adcMode			= 4'b0011;//ADC MODE

localparam const =4'b0;


//sobre muestreo de la señal Addres storbe para generar flancos de bajada
reg [2:0] stbAddrReg;
always@(posedge clk) 
	stbAddrReg<={stbAddrReg[1:0],stbAddr};
wire stbAddrRE=(stbAddrReg[2:1]=='b01);


reg [11:0]regBramAddr=0;	//registro temporal para generar la direccion para la memoria.


assign busEppOut=	(busEppAddrIn[7:6]==addrBramDB)	 ?(busBramIn):						//dependiendo de los dos bits mas significativos en la direccion desde el EppCtrl
						(busEppAddrIn[7:6]==addrBramAddrL)?(regBramAddr[7:0]):			//se setea el dato que se entrega a EppCtrl para su lectura. Este puede ser, el dato de la memoria
						(busEppAddrIn[7:6]==addrBramAddrH)?({const,regBramAddr[11:8]})://en la dirección actual o la dirección actual misma.
						(8'b0);

wire aux= (stbAddr && stbData);// esta variable registra  los flancos negativos cada ves que hay una transaccion ya sea de addr o de data.
always@(posedge aux)
begin
if(ctrlWr==0) 											//solo en escritura
	begin	
		if(busEppAddrIn[7:4]==adcMode)			//Modo de escritura continua
				regBramAddr=regBramAddr+12'h001;
		if(busEppAddrIn[7:4]==ctrlMode)			//puntero a la primera direccion
				regBramAddr=12'h000;
		if(busEppAddrIn[7:4]==confModeL)			//puntero a la segunda direccion
				regBramAddr=12'h001;
		if(busEppAddrIn[7:4]==confModeH)			//puntero a la tercera direccion
				regBramAddr=12'h002;		
	end		
else
	begin
	if((stbAddrRE)&&(busEppAddrIn[7:4]==adcMode))//si se actualizo addr de control en adcMode, la primera direccion debe ser h03
			regBramAddr=12'h003;
	else if(busEppAddrIn[7:4]==adcMode)				//modo de lectura continua.
			regBramAddr=regBramAddr+12'h001;	
	end
	
end

assign clkBram	=(!stmBusy)?(!stbData):1'b0;
assign ctrlWeBram=((ctrlWr==0)&&(busEppAddrIn[7:6]==addrBramDB))?1'b1:1'b0;
assign busBramOut= busEppIn;
assign busBramAddr=regBramAddr;
endmodule
