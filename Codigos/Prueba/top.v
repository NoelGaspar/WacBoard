`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:40:40 10/16/2014 
// Design Name: 
// Module Name:    top 
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
module top(clk,clk1,clk2,clk3,clk4);
input 	clk;
output	clk1,clk2,clk3,clk4;



	clk_div uut (
		.mclk(clk), 
		.outclk1(clk1),
		.outclk2(clk2),
		.outclk3(clk3),
		.outclk4(clk4)
	);


endmodule
