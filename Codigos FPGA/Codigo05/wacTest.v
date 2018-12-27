`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:52:28 01/04/2016 
// Design Name: 
// Module Name:    wacTest 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module wacTest(clk,dataStb,addrEpp,busBramIn,SDOADC1,SDOADC2,busBramAddr,
busBramOut,ctrlWeBram,clkBram,busy,contData,
CSDAC,SDIDAC,CLKDAC,CSDPOT1,CSDPOT2,CSDPOT3,SDIDPOT,CLKDPOT,MUXREF1,MUXREF2,MUXREF3,
MUXDACEN,theBeanConf,CSADC1,CLKADC1,CSADC2,CLKADC2,stTest);
//----------------------------
// INPUTS
//----------------------------
input clk,dataStb;
input [1:0]addrEpp;
input [7:0]busBramIn;
input SDOADC1;
input SDOADC2; 
//----------------------------
// OUTPUTS
//----------------------------
output [11:0]busBramAddr;
output [7:0] busBramOut;
output ctrlWeBram,clkBram,busy;
output [2:0]contData;
output CSDAC,SDIDAC,CLKDAC,CSDPOT1,CSDPOT2,CSDPOT3,SDIDPOT,CLKDPOT;
output MUXREF1,MUXREF2,MUXREF3,MUXDACEN;
output [15:0] theBeanConf;
output CSADC1,CLKADC1;
output CSADC2,CLKADC2;
output [2:0]stTest;
//----------------------------
// WIRES
//----------------------------
wire [7:0]ctrlWord;
wire [15:0]confWord;
wire [11:0]dataAdc;
wire controlEn;
wire readyAdc;
wire modeAdc;
wire [11:0]nSamples;

// Instantiate the module
WacComCtrl COM(
    .clk(clk), 
    .dataStb(dataStb), 
    .addrEpp(addrEpp), 
    .datoAdc(dataAdc), 
	 .readyAdc(readyAdc),
    .busBramIn(busBramIn),
	 .busBramAddr(busBramAddr), 
    .busBramOut(busBramOut), 
    .ctrlWeBram(ctrlWeBram), 
    .clkBram(clkBram), 
    .ctrlWord(ctrlWord), 
    .confWord(confWord), 
    .busy(busy), 
    .contData(contData), 
    .controlEn(controlEn),
	 .modeAdc(modeAdc),
	 .nSamples(nSamples),
	 .stTest(stTest)
    ); 

// Instantiate the module
wacCtrl instance_name (
    .clk(clk), 
    .SDOADC1(SDOADC1), 
	 .SDOADC2(SDOADC2),
    .ctrlWord(ctrlWord), 
    .ctrlEn(controlEn), 
    .confWord(confWord), 
	 .modeAdc(modeAdc),
	 .nSamples(nSamples),
    .CSDAC(CSDAC), 
    .SDIDAC(SDIDAC), 
    .CLKDAC(CLKDAC), 
    .CSDPOT1(CSDPOT1), 
    .CSDPOT2(CSDPOT2), 
    .CSDPOT3(CSDPOT3), 
    .SDIDPOT(SDIDPOT), 
    .CLKDPOT(CLKDPOT), 
    .MUXREF1(MUXREF1), 
    .MUXREF2(MUXREF2), 
    .MUXREF3(MUXREF3), 
    .MUXDACEN(MUXDACEN),  
    .theBeanConf(theBeanConf), 
    .dataAdc(dataAdc), 
	 .readyAdc(readyAdc),
    .CSADC1(CSADC1), 
    .CLKADC1(CLKADC1),
	 .CSADC2(CSADC2), 
    .CLKADC2(CLKADC2)	 
    );


endmodule
