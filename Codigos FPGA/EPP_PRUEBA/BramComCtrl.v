`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//Autor: Wladimir Araya
// 
// Comentario: el bloque ram es una memoria de 2k x 8bits  por lo que las direcciónes
// 				utilizadas son de 10bits
//////////////////////////////////////////////////////////////////////////////////
module BramComCtrl(clk,stbData, ctrlWr, selBram,busEppIn, busEppOut,busEppAdrIn, busBramAdr,busBramIn, busBramOut,ctrlEnBram,ctrlWeBram,clkBram);
//Inputs
input clk;
input stbData;		//señal desde epp Ctrl. Epp data strobe
input ctrlWr;		//señal desde epp Ctrl. Epp address strobe
input selBram;		//señal desde epp Ctrl. BramComCtrl señal de control
input [7:0] busEppIn;		//señal desde epp Ctrl. Bus de dato de entrada, salida de EppCtrl.
input [6:0] busEppAdrIn;	//señal desde epp Ctrl. provenientes desde EppAddress register.
input [7:0] busBramIn; //señal desde BRAM. dato de salida de BRAM

//OUTPUTS
output [7:0] busEppOut;		//señal hacia epp Ctrl. Bus de dato de salida, entrada de EppCtrl.
output [10:0] busBramAdr; 	//senal que indica el addres para BRAM.
output [7:0] busBramOut; 	//señal para escribir dato en BRAM.
output ctrlEnBram;		//Bram enable
output ctrlWeBram;		// BRAM write enable
output clkBram;			// clock para BRAM

localparam 	adrBramDB	= 2'b00,
				adrBramAdrL	= 2'b01,
				adrBramAdrH	= 2'b10;
localparam const =4'b0;

//sobre muestreo de la señal Addres storbe para generar flancos de bajada
reg [2:0] stbDatar;
always@(posedge clk) 
	stbDatar<={stbDatar[1:0],stbData};
wire stbDataRE=(stbDatar[2:1]=='b01);


wire carryOutL;
reg [10:0]regBramAdr=0;

assign busEppOut=	(selBram==0 )? 						(8'b0):    
						(busEppAdrIn[1:0]== adrBramDB)? 	(busBramIn):
						(busEppAdrIn[1:0]== adrBramAdrL)?(regBramAdr[7:0]):
						(busEppAdrIn[1:0]== adrBramAdrH)?({const,regBramAdr[10:8]}):
						(8'b0);

always@(stbData, ctrlWr,selBram)
begin
	if(selBram==1)
		if(stbDataRE && (stbData==1))
			if(busEppAdrIn[1:0]==adrBramDB)
				regBramAdr[7:0]=regBramAdr[7:0]+1;
			else if((ctrlWr==0) && (busEppAdrIn[1:0]==adrBramAdrL))	
					regBramAdr[7:0]=busEppIn;
	
	if(selBram==1)
		if(stbDataRE && (stbData==1))
			if((busEppAdrIn[1:0]==adrBramDB) &&(carryOutL==1) )
				regBramAdr[10:8]=regBramAdr[10:8]+1;
				else if((ctrlWr==0)&&(busEppAdrIn[1:0]==adrBramAdrH))
						regBramAdr[10:8]=busEppIn[2:0];
end


assign carryOut =(regBramAdr[7:0]==8'hff)?1'b1:1'b0;
assign clkBram	=!stbData;
assign ctrlBram= ((selBram==1)&&(busEppAdrIn[1:0]==adrBramDB))?1'b1:1'b0;
assign ctrlWeBram=((selBram==1)&&(ctrlWr==0)&&(busEppAdrIn[1:0]==adrBramDB))?1'b1:1'b0;
assign busBramOut= busEppIn;
assign busBramAdr=regBramAdr;


endmodule
