`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:18:30 11/23/2015 
// Design Name: 
// Module Name:    wac_top 
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
module wac_top(clk, busBramAddr, busBramIn,busBramOut,dataStb,syncDac,sdiDac,sclkDac,csDpot1,csDpot2,csDpot3,sdiDpot,clkDpot,mux,theBeanConf,stmBusy,sdoAdc1,sdoAdc2,clkAdc1,clkAdc2,csAdc1,csAdc2);

//inputs
input clk;
input dataStb;
input [7:0]busBramIn;
input sdoAdc1,sdoAdc2;

//Outputs
output [7:0] busBramOut;
output [11:0] busBramAddr;
output syncDac;
output sdiDac;
output sclkDac;
output csDpot1;
output csDpot2;
output csDpot3;
output sdiDpot;
output clkDpot;
output [4:0] mux;
output [15:0]theBeanConf;
output stmBusy;
output clkAdc1,clkAdc2;
output csAdc1,csAdc2;
 
wire [7:0] ctrlWac;
wire [15:0] confWac;
wire adcWacEn;
wire confWacEn;
wire [7:0]adcDataOut;


wacCtrl wacCtrlMod (
    .clk(clk), 
    .dataStb(dataStb), 
    .busBramAddr(busBramAddr), 
    .busBramIn(busBramIn), 
    .busBramOut(busBramOut), 
    .ctrlWeBram(ctrlWeBram), 
    .clkBram(clkBram), 
    .ctrlWac(ctrlWac), 
    .confWac(confWac), 
    .adcWacEn(adcWacEn), 
    .confWacEn(confWacEn), 
    .busWacIn(adcDataOut),
	 .busy(stmBusy)
    );

wac wacMod (
    .clk(clk), 
    .ctrlWac(ctrlWac), 
    .confWac(confWac), 
    .adcWacEn(adcWacEn), 
    .confWacEn(confWacEn), 
	 .adcOut(adcDataOut),
    .syncDac(syncDac), 
    .sdiDac(sdiDac), 
    .sclkDac(sclkDac), 
    .csDpot1(csDpot1), 
    .csDpot2(csDpot2), 
    .csDpot3(csDpot3), 
    .sdiDpot(sdiDpot), 
    .clkDpot(clkDpot),
	 .muxDacEn(mux[3]), 
    .muxDacSel(mux[4]), 
    .muxRef1(mux[0]), 
    .muxRef2(mux[1]), 
    .muxRef3(mux[2]),
	 .theBeanConf(theBeanConf),
	 .sdoAdc1(sdoAdc1), 
    .clkAdc1(clkAdc1), 
    .csAdc1(csAdc1), 
    .sdoAdc2(sdoAdc2), 
    .clkAdc2(clkAdc2), 
    .csAdc2(csAdc2)
    );




endmodule
