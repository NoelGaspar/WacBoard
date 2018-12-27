`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:25:11 02/18/2016 
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
module Epp_top(clk, btn,EppAstb,EppDstb,EppWr,sw,Led,DB,EppWait);
//----------------------------------------
// Inputs
//----------------------------------------
input clk;
input EppAstb;
input EppDstb;
input EppWr;
input [7:0]sw;
input btn;

//----------------------------------------
// OUTPUTS
//----------------------------------------
output EppWait;
output [7:0]Led;

//----------------------------------------
// INTPUT-OUTPUTS
//----------------------------------------
inout [7:0]DB;


//----------------------------------------
// AUXILIARY WIRES
//----------------------------------------
//Wires entre bramComCtrl y la RAM block
wire	[7:0] 	bram_douta;			
wire	[7:0]		bram_dina;
wire				bram_wea;
wire 				bram_clka;
wire	[11:0]	bram_addra;
//Wires entre EppCtrl y bramComCtrl
wire 			data_stb;
wire 			ctrl_wr;
wire	[7:0]	epp_bus_in;	 
wire	[7:0]	epp_bus_out;
wire	[7:0]	epp_bus_addr;

	 	 
EppCtrl mod1(
    .EppAstb(EppAstb), 
    .EppDstb(EppDstb), 
    .EppWr(EppWr), 
    .DB(DB), 
    .EppWait(EppWait), 
    .stb_data(data_stb), 
    .ctrl_wr(ctrl_wr), 
    .bus_in(epp_bus_in), 
    .bus_out(epp_bus_out), 
    .bus_addr(epp_bus_addr)
    );



BramComCtrl mod2(
    .clk(clk),
    .stb_data(data_stb), 
    .ctrl_wr(ctrl_wr), 
    .epp_in(epp_bus_out), 
    .epp_out(epp_bus_in), 
    .epp_addr_in(epp_bus_addr), 
    .bram_addr(bram_addra), 
    .bram_in(bram_douta), 
    .bram_out(bram_dina), 
    .we_bram(bram_wea), 
    .clk_bram(bram_clka)
    );




BRAMAB mod3(
  .clka(bram_clka), // input clka
  .wea(bram_wea), // input [0 : 0] wea
  .addra(bram_addra), // input [11 : 0] addra
  .dina(bram_dina), // input [7 : 0] dina
  .douta(bram_douta), // output [7 : 0] douta
  .clkb(btn), // input clkb
  .web(1'b0), // input [0 : 0] web
  .addrb({4'b0000,sw}), // input [11 : 0] addrb
  .dinb(8'b0), // input [7 : 0] dinb
  .doutb(Led) // output [7 : 0] doutb
);


endmodule
