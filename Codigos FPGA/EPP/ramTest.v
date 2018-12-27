`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:34:55 11/19/2015 
// Design Name: 
// Module Name:    ramTest 
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
module ramTest(clk,dataOutA,dataOutB);

input clk;
output [7:0] dataOutA;
output [7:0] dataOutB;

reg [11:0]addr=0;
reg [7:0]din=0;
reg clkBr=0;

always@(posedge clk)
begin
	din=din+1;
	addr=addr+1;
end

always@(negedge clk)
clkBr=~clkBr;


BRamAB mem (
  .clka(clkBr), // input clka
  .wea(1'b1), // input [0 : 0] wea
  .addra(addr), // input [11 : 0] addra
  .dina(din), // input [7 : 0] dina
  .douta(dataOutA), // output [7 : 0] douta
  .clkb(1'b0), // input clkb
  .web(1'b0), // input [0 : 0] web
  .addrb({12'h000}), // input [11 : 0] addrb
  .dinb(8'b0000_0000), // input [7 : 0] dinb
  .doutb(dataOutB) // output [7 : 0] doutb
);
endmodule
