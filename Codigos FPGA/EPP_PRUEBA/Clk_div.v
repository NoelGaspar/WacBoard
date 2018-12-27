`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:30:13 07/15/2015 
// Design Name: 
// Module Name:    Clk_div 
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
module Clk_div(clk_in,clk_out,clk_m);
input clk_in;
output reg clk_out;
output reg clk_m;

reg [15:0] count;
initial 
begin
count=0;
clk_out=0;
clk_m=0;
end

always@(posedge clk_in)
begin
clk_out=count[1];
clk_m=count[15];
count=count+1;
end

endmodule
