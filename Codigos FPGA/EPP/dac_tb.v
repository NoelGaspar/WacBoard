`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:42:21 11/23/2015
// Design Name:   Dac_ctrl
// Module Name:   C:/Users/Wac/Desktop/1_2014/Memoria/Codigos FPGA/EPP/dac_tb.v
// Project Name:  EPP
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Dac_ctrl
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module dac_tb;

	// Inputs
	reg clk_in;
	reg ctrl;
	reg [15:0] dato;

	// Outputs
	wire sync;
	wire sdi;
	wire sclk;

	// Instantiate the Unit Under Test (UUT)
	Dac_ctrl uut (
		.clk_in(clk_in), 
		.ctrl(ctrl), 
		.dato(dato), 
		.sync(sync), 
		.sdi(sdi), 
		.sclk(sclk)
	);

	initial begin
		// Initialize Inputs
		clk_in = 0;
		ctrl = 1;
		dato = 'hcaaa;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
     always
			begin
			#5
			clk_in=~clk_in;
			end
		 
		always
			begin  
			#35
			ctrl=0;
			#10
			ctrl=1; 
			#1000;
			end
endmodule

