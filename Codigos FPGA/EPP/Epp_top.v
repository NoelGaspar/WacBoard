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
module Epp_top(clk,EppAstb, EppDstb,EppWr,sw, Led,DB,EppWait);
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


wire EppStbAddrOut,EppStbDataOut,EppWrOut;
wire [7:0] EppBusIn,EppBusOut,BramDataOut,BramDataIn;
wire [7:0] EppAddrOut;
wire [11:0] BramAddrIn;
wire BramWeIn,BramClkIn;


EppCtrl mod1(
    .EppAstb(EppAstb), 
    .EppDstb(EppDstb),
    .EppWr(EppWr), 
    .DB(DB), 
    .EppWait(EppWait), 
    .stbData(EppStbDataOut), 
	 .stbAddr(EppStbAddrOut),
    .ctrlWr(EppWrOut), 
    .busIn(EppBusIn), 
    .busOut(EppBusOut), 
    .outEppAddr(EppAddrOut)
    );
	 
	 
BramComCtrl mod2 (
    .clk(clk), 
    .stbData(EppStbDataOut), 
	 .stbAddr(EppStbAddrOut),
    .ctrlWr(EppWrOut), 
    .busEppIn(EppBusOut), 
    .busEppOut(EppBusIn), 
    .busEppAddrIn(EppAddrOut), 
    .busBramAddr(BramAddrIn), 
    .busBramIn(BramDataOut), 
    .busBramOut(BramDataIn), 
    .ctrlWeBram(BramWeIn), 
    .clkBram(BramClkIn)
    );
/*
//Este codigo es una instanciacion para debuguear la comunicacion Epp-bram por medio de switches y leds
BRamAB mod4 (
  .clka(BramClkIn), // input clka
  .wea(BramWeIn), // input [0 : 0] wea
  .addra(BramAddrIn), // input [11 : 0] addra
  .dina(BramDataIn), // input [7 : 0] dina
  .douta(BramDataOut), // output [7 : 0] douta
  .clkb(clk), // input clkb
  .web(1'b0), // input [0 : 0] web
  .addrb({4'b0000,sw}), // input [11 : 0] addrb
  .dinb(8'b0000_0000), // input [7 : 0] dinb
  .doutb(Led) // output [7 : 0] doutb
);
*/

BRamAB mod4 (
  .clka(BramClkIn), // input clka
  .wea(BramWeIn), // input [0 : 0] wea
  .addra(BramAddrIn), // input [11 : 0] addra
  .dina(BramDataIn), // input [7 : 0] dina
  .douta(BramDataOut), // output [7 : 0] douta
  .clkb(clk), // input clkb
  .web(1'b0), // input [0 : 0] web
  .addrb({4'b0000,sw}), // input [11 : 0] addrb
  .dinb(8'b0000_0000), // input [7 : 0] dinb
  .doutb(Led) // output [7 : 0] doutb
);

endmodule