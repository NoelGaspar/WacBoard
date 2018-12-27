`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:43:18 11/19/2015
// Design Name:   ramTest
// Module Name:   C:/Users/Wac/Desktop/1_2014/Memoria/Codigos FPGA/EPP/ramTest_tb.v
// Project Name:  EPP
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ramTest
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ramTest_tb;

	// Inputs
	reg clk;

	// Outputs
	wire [7:0] dataOutA;
	wire [7:0] dataOutB;

	// Instantiate the Unit Under Test (UUT)
	ramTest uut (
		.clk(clk), 
		.dataOutA(dataOutA), 
		.dataOutB(dataOutB)
	);

	initial begin
		// Initialize Inputs
		clk = 0;


		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
		always
		begin
		#5
		clk=~clk;
		end
		
endmodule

