`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:41:34 10/16/2014 
// Design Name: 
// Module Name:    clk_div 
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
module clk_div(mclk,outclk1,outclk2,outclk3,outclk4);
input mclk;
output outclk1,outclk2,outclk3,outclk4;

reg [15:0] count=0;
	
always@(posedge mclk)
begin
count=count+1;
end

assign outclk1= count[2];
assign outclk2= count[4];
assign outclk3= count[6];
assign outclk4= count[8];

endmodule
