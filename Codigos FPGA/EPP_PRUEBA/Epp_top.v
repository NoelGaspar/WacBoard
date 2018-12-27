`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:35:39 11/09/2015 
// Design Name: 
// Module Name:    Epp_top 
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
module Epp_top(clk,EppAstb, EppDstb,EppWr, sw, Led,DB,EppWait);
//INPUTS
input clk;
input EppAstb;
input EppDstb;
input EppWr;
input [7:0]sw;
//Outputs
output EppWait;
output [7:0]Led;
//Intput-output
inout [7:0]DB;


wire stbBramCtrl,EppStbDataOut,EppWrOut;
wire [7:0] EppBusIn,EppBusOut,BramDataOut,BramDataIn;
wire [6:0] EppAdrOut;
wire [10:0] BramAdrIn;
wire BramWeIn,BramEnIn,BramClkIn;




EppCtrl mod1(
    .EppAstb(EppAstb), 
    .EppDstb(EppDstb), 
    .EppWr(EppWr), 
    .DB(DB), 
    .EppWait(EppWait), 
    .cs(selBramCtrl), 
    .stbData(EppStbDataOut), 
    .ctrlWr(EppWrOut), 
    .busIn(EppBusIn), 
    .busOut(EppBusOut), 
    .outEppAdr(EppAdrOut)
    );
	 
	 
BramComCtrl mod2 (
    .clk(clk), 
    .stbData(EppStbDataOut), 
    .ctrlWr(EppWrOut), 
    .selBram(selBramCtrl), 
    .busEppIn(EppBusOut), 
    .busEppOut(EppBusIn), 
    .busEppAdrIn(EppAdrOut), 
    .busBramAdr(BramAdrIn), 
    .busBramIn(BramDataOut), 
    .busBramOut(BramDataIn), 
    .ctrlEnBram(BramEnIn), 
    .ctrlWeBram(BramWeIn), 
    .clkBram(BramClkIn)
    );
/*
BlockRam mod3 (
  .clka(BramClkIn), // input clka
  .ena(BramEnIn), // input ena
  .wea(BramWeIn), // input [0 : 0] wea
  .addra(BramAdrIn), // input [10 : 0] addra
  .dina(BramDataIn), // input [7 : 0] dina
  .douta(BramDataOut) // output [7 : 0] douta
);
*/
BRAMAB mod4 (
  .clka(BramClkIn), // input clka
  .ena(BramEnIn), // input ena
  .wea(BramWeIn), // input [0 : 0] wea
  .addra(BramAdrIn), // input [10 : 0] addra
  .dina(BramDataIn), // input [7 : 0] dina
  .douta(BramDataOut), // output [7 : 0] douta
  .clkb(BramClkIn), // input clkb
  .enb(1'b1), // input enb
  .web(1'b0), // input [0 : 0] web
  .addrb({3'b111,sw}), // input [10 : 0] addrb
  .dinb(BramDataIn), // input [7 : 0] dinb
  .doutb(Led) // output [7 : 0] doutb
);

endmodule
