`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:31:50 11/23/2015
// Design Name:   wac_top
// Module Name:   C:/Users/Wac/Desktop/1_2014/Memoria/Codigos FPGA/EPP/wac_top_tb.v
// Project Name:  EPP
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: wac_top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module wac_top_tb;

	// Inputs
	reg clk;
	reg dataStb;
	reg syncDac;
	reg sdiDac;
	reg sclkDac;
	reg csDpot1;
	reg csDpot2;
	reg csDpot3;
	reg sdiDpot;
	reg clkDpot;

	// Instantiate the Unit Under Test (UUT)
	wac_top uut (
		.clk(clk), 
		.dataStb(dataStb), 
		.syncDac(syncDac), 
		.sdiDac(sdiDac), 
		.sclkDac(sclkDac), 
		.csDpot1(csDpot1), 
		.csDpot2(csDpot2), 
		.csDpot3(csDpot3), 
		.sdiDpot(sdiDpot), 
		.clkDpot(clkDpot)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		dataStb = 0;
		syncDac = 0;
		sdiDac = 0;
		sclkDac = 0;
		csDpot1 = 0;
		csDpot2 = 0;
		csDpot3 = 0;
		sdiDpot = 0;
		clkDpot = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

