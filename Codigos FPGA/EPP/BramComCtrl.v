`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//Autor: Wladimir Araya
// 
// Comentario: el bloque ram es una memoria de 2k x 8bits  por lo que las direcciónes
// 				utilizadas son de 10bits
//////////////////////////////////////////////////////////////////////////////////
module BramComCtrl(clk,stbData,stbAddr, ctrlWr,busEppIn, busEppOut,busEppAddrIn, busBramAddr,busBramIn, busBramOut,ctrlWeBram,clkBram, stmBusy);
//Inputs
input clk;
input stbData;				//[Epp] data strobe
input stbAddr;
input ctrlWr;				//[Epp] Control Write
input [7:0] busEppIn;	//[Epp] Bus de datos provenientes desde el Epp
input [7:0] busEppAddrIn;//[Epp] Ultima direccion actualizada desde el Epp
input [7:0] busBramIn; 	//[Bram] Dato de salida desde el block Ram-
input stmBusy;

//OUTPUTS
output [7:0] 	busEppOut;	//[Epp] Bus de dato de salida, entrada de EppCtrl.
output [11:0] 	busBramAddr; //[Bram] señal que indica el addres para BRAM.
output [7:0] 	busBramOut; //[Bram] señal de dato, entrada para BRAM.
output ctrlWeBram;			//[Bram] enable de escritura
output clkBram;				//[Bram] clock para BRAM


localparam 	addrBramDB		= 2'b00,// la memoria se actualiza sola con el contador
				addrBramAddrL	= 2'b01,// setea los bits inferiores de la memoria
				addrBramAddrH	= 2'b10,// seteamos los bits superiores de la memoria
				ctrlMode			= 4'b0000,//Control mode
				cnfgModeL		= 4'b0001,//Configuration mode L
				cnfgModeH		= 4'b0010,//Configuration mode H
				adcMode			= 4'b0011;// ADC MODE

localparam const =4'b0;


//sobre muestreo de la señal Addres storbe para generar flancos de bajada
reg [2:0] stbAddrReg;
always@(posedge clk) 
	stbAddrReg<={stbAddrReg[1:0],stbAddr};
wire stbAddrRE=(stbAddrReg[2:1]=='b01);

reg [11:0]regBramAddr=0;

assign busEppOut=	(busEppAddrIn[7:6]==addrBramDB)	 ?(busBramIn):
						(busEppAddrIn[7:6]==addrBramAddrL)?(regBramAddr[7:0]):
						(busEppAddrIn[7:6]==addrBramAddrH)?({const,regBramAddr[11:8]}):
						(8'b0);

wire aux= (stbAddr && stbData);
always@(posedge aux)
begin
if(ctrlWr==0) //solo en escritura
	begin	
		if(busEppAddrIn[7:4]==adcMode)
			regBramAddr=regBramAddr+12'h001;
		if(busEppAddrIn[7:4]==ctrlMode)	
				regBramAddr=12'h000;
		if(busEppAddrIn[7:4]==cnfgModeL)	
				regBramAddr=12'h001;
		if(busEppAddrIn[7:4]==cnfgModeH)	
				regBramAddr=12'h002;		
	end		
else
	begin
	if((stbAddrRE)&&(busEppAddrIn[7:4]==adcMode))// lectura rapida
			regBramAddr=12'h003;
	else if(busEppAddrIn[7:4]==adcMode)
			regBramAddr=regBramAddr+12'h001;	
	end
	
end

assign clkBram	=(!stmBusy)?!stbData:1'b0;
assign ctrlWeBram=((ctrlWr==0)&&(busEppAddrIn[7:6]==addrBramDB))?1'b1:1'b0;
assign busBramOut= busEppIn;
assign busBramAddr=regBramAddr;
endmodule
