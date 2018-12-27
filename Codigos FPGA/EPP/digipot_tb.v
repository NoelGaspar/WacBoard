`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:18:22 11/23/2015
// Design Name:   Digipot_ctrl
// Module Name:   C:/Users/Wac/Desktop/1_2014/Memoria/Codigos FPGA/EPP/digipot_tb.v
// Project Name:  EPP
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Digipot_ctrl
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module digipot_tb;

	// Inputs
	reg clk;
	reg [1:0] mux;
	reg ctrl;
	reg [7:0] dato;

	// Outputs
	wire cs1;
	wire cs2;
	wire cs3;
	wire sdi;
	wire clk_out;

	// Instantiate the Unit Under Test (UUT)
	Digipot_ctrl uut (
		.clk(clk), 
		.mux(mux), 
		.ctrl(ctrl), 
		.dato(dato), 
		.cs1(cs1), 
		.cs2(cs2), 
		.cs3(cs3), 
		.sdi(sdi), 
		.clk_out(clk_out)
	);

	initial begin
		// Initialize Inputs
	
		clk	=	0;
		mux	= 	0;
		ctrl 	= 	1;
		dato 	=	'h55;
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	always
			begin
			#5
			clk=~clk;
			end
		
		always 
			begin 
			#35
			ctrl=0;
			#10
			ctrl=1;
			#800;
			end
			 
		always 
			begin
			#400
			mux=mux+1;
			end 
      
endmodule

