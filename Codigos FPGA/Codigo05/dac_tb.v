`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:32:23 12/28/2015
// Design Name:   Dac_ctrl
// Module Name:   C:/Users/Wac/Desktop/1_2014/Memoria/Codigos FPGA/Codigo03/dac_tb.v
// Project Name:  Codigo03
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
		ctrl = 0;
		dato = 'hcaaa;

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
			#50
			ctrl=1;
			#20
			ctrl=0;
			#1500;
			end 
endmodule

