`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:58:26 12/28/2015
// Design Name:   adcCtrl
// Module Name:   C:/Users/Wac/Desktop/1_2014/Memoria/Codigos FPGA/Codigo03/adc_tb.v
// Project Name:  Codigo03
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: adcCtrl
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module adc_tb;

	// Inputs
	reg clk_in;
	reg ctrl;
	reg sdo;
	reg n;

	// Outputs
	wire [11:0] data;
	wire sync;
	wire sclk;
	wire ready;

	// Instantiate the Unit Under Test (UUT)
	adcCtrl uut (
		.clk_in(clk_in), 
		.ctrl(ctrl), 
		.sdo(sdo), 
		.n(n),
		.data(data), 
		.sync(sync), 
		.sclk(sclk),
		.ready(ready)
	);

	initial begin
		// Initialize Inputs
		clk_in = 0;
		ctrl = 0;
		sdo = 1;
		n=0;
		// Wait 100 ns for global reset to finish
		#100;
      // Add stimulus here

	end
      always
			begin
			#10
			clk_in=~clk_in;
			end
		 
		always
			begin  
			#60
			ctrl=1;
			#35
			ctrl=0;
			#2500
			n=1;
			ctrl=1; 
			#35
			ctrl=0;
			#40000;
			end 
	always
			begin
			#110
			sdo=~sdo;
			#80
			sdo=~sdo;
			#80
			sdo=~sdo;
			#80
			sdo=~sdo;
			#80
			sdo=~sdo;
			#80
			sdo=~sdo;
			#80
			sdo=~sdo;
			#80
			sdo=~sdo;
			#80
			sdo=~sdo;
			#80
			sdo=~sdo;
			#80
			sdo=~sdo;
			#80
			sdo=~sdo;
			#80
			sdo=~sdo;
			#80
			sdo=~sdo;
			end
/*
always  
	begin		
	#110
	sdo=0;
	#240
	sdo=1;
	#160
	sdo=0;
	#1800;
	end
*/
endmodule

