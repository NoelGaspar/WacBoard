`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Autor: Wladimir Araya
//	Nota: Modulo para proyecto de tesis de pregrado.
//
//
//////////////////////////////////////////////////////////////////////////////////
module wacCtrl(clk,SDOADC1,SDOADC2,ctrlWord,ctrlEn,confWord,modeAdc,nSamples, CSDAC,SDIDAC,CLKDAC, 
					CSDPOT1,CSDPOT2,CSDPOT3,SDIDPOT,CLKDPOT, MUXREF1, MUXREF2,MUXREF3,
					MUXDACEN,theBeanConf,dataAdc,readyAdc,CSADC1,CLKADC1,CSADC2,CLKADC2);

//-----------------
// INPUTS
//-----------------
input clk;
input SDOADC1;
input SDOADC2;
input ctrlEn;
input [7:0]ctrlWord;
input [15:0]confWord;
input modeAdc;
input [11:0]nSamples;
 
//-----------------
// OUTPUTS
//-----------------
//dac
output CSDAC,SDIDAC,CLKDAC;

//digipot
output CSDPOT1,CSDPOT2,CSDPOT3;
output SDIDPOT,CLKDPOT;

//MUX
output reg MUXDACEN=1;
output reg MUXREF1=1;
output reg MUXREF2=1;
output reg MUXREF3=1;

//the bean configuracion
output [15:0]theBeanConf;

//ADC
output [11:0]dataAdc;
output readyAdc;
//ADC1
output CLKADC1,CSADC1;
//ADC2
output CLKADC2,CSADC2;

//-----------------
// WIRES
//-----------------
//dac
wire [15:0]datoDac;
wire ctrlDac;
//digipot
wire [7:0] datoDpot;
wire [1:0] muxDpot;
wire ctrlDpot;
//adc1
wire ctrlAdc1,modeAdc1,readyAdc1;
wire ctrlAdc2,modeAdc2,readyAdc2;
wire [11:0]dataAdc1,dataAdc2;
wire [11:0]nAdc1,nAdc2;
//secuenciador
wire ctrl_seq;
wire [1:0] mode_seq;

 


//MDODO configuracion
always@(posedge clk)
begin
	if(ctrlWord[3:0]==4'b0010)
		begin
			MUXREF1= 	confWord[0];
			MUXREF2= 	confWord[1];
			MUXREF3= 	confWord[2];
			MUXDACEN= 	confWord[3];
		end
end







Dac_ctrl dacWAC(
    .clk_in(clk), 
    .ctrl(ctrlDac), 
    .dato(datoDac), 
    .sync(CSDAC), 
    .sdi(SDIDAC), 
    .sclk(CLKDAC)
    );

Digipot_ctrl dpotWAC(
    .clk(clk), 
    .mux(muxDpot), 
    .ctrl(ctrlDpot), 
    .dato(datoDpot), 
    .cs1(CSDPOT1), 
    .cs2(CSDPOT2), 
    .cs3(CSDPOT3), 
    .sdi(SDIDPOT), 
    .clk_out(CLKDPOT)
    );

// Instantiate the module
adcCtrl2 adc1(
    .clk_in(clk), 
    .ctrl(ctrlAdc1), 
    .sdo(SDOADC1), 
    .mode(modeAdc1), 
	 .n(nAdc1),
    .data(dataAdc1), 
    .sync(CSADC1), 
    .sclk(CLKADC1),
	 .ready(readyAdc1)
    );
	 
	 
// Instantiate the module
adcCtrl2 adc2(
    .clk_in(clk), 
    .ctrl(ctrlAdc2), 
    .sdo(SDOADC2), 
    .mode(modeAdc2), 
	 .n(nAdc2),
    .data(dataAdc2), 
    .sync(CSADC2), 
    .sclk(CLKADC2),
	 .ready(readyAdc2)
    );	 
	
// Instantiate the module
secuenciador seq(
	.clk(clk),
	.seq_en(ctrl_seq),
	.mode(mode_seq),
	.theBeanConfig(theBeanConf)
	);	
	
//MODODAC
assign datoDac =(ctrlWord[3:0]==4'b0001)?confWord:16'h0; //actualiza el dato para ser enviado
assign ctrlDac =(ctrlWord[3:0]==4'b0001)?ctrlEn:1'h0;		//señal de activacion de la comunicacion, esta activa en 1.

//MODO DIGIPOT
assign muxDpot  =(ctrlWord[3:0]==4'b0011)?confWord[9:8]:2'b11; 
assign datoDpot =(ctrlWord[3:0]==4'b0011)?confWord[7:0]:8'h0;
assign ctrlDpot =(ctrlWord[3:0]==4'b0011)?ctrlEn:1'h0;
  
//MODO ADC1
assign ctrlAdc1=((ctrlWord[3:0]==4'h9)&&(ctrlWord[7:6]==2'b01))? ctrlEn:1'h0;
assign ctrlAdc2=((ctrlWord[3:0]==4'h9)&&(ctrlWord[7:6]==2'b10))? ctrlEn:1'h0;
assign modeAdc1=((ctrlWord[3:0]==4'h9)&&(ctrlWord[7:6]==2'b01))? modeAdc:1'h0;		//GENERAR UNA REGLA PARA ESTO
assign modeAdc2=((ctrlWord[3:0]==4'h9)&&(ctrlWord[7:6]==2'b10))? modeAdc:1'h0;		//GENERAR UNA REGLA PARA ESTO
assign nAdc1=	((ctrlWord[3:0]==4'h9)&&(ctrlWord[7:6]==2'b01))? nSamples:12'h0;		//cantidad de muestras
assign nAdc2=	((ctrlWord[3:0]==4'h9)&&(ctrlWord[7:6]==2'b10))? nSamples:12'h0;		//cantidad de muestras
assign readyAdc=(readyAdc1||readyAdc2);
assign dataAdc=(ctrlWord[7:6]==2'b01)? dataAdc1:
					(ctrlWord[7:6]==2'b10)? dataAdc2:8'b0000_0000;

//MODO SECUENCIADOR
assign ctrl_seq=(ctrlWord[3:0]==4'h4)?ctrlEn:1'b0;
assign mode_seq=(ctrlWord[3:0]==4'h4)?ctrlWord[5:4]:2'b00;

endmodule
