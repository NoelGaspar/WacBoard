`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:16:18 11/16/2015
// Design Name:   EppCtrl
// Module Name:   C:/Users/Wac/Desktop/1_2014/Memoria/Codigos FPGA/EPP_PRUEBA/EppCtrl_tb.v
// Project Name:  EPP_PRUEBA
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: EppCtrl
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module EppCtrl_tb;

	// Inputs
	reg EppAstb;
	reg EppDstb;
	reg EppWr;
	reg [7:0] busIn;

	// Outputs
	wire EppWait;
	wire cs;
	wire stbData;
	wire ctrlWr;
	wire [7:0] busOut;
	wire [6:0] outEppAdr;

	// Bidirs
	reg [7:0] DB=0;
	
	// Instantiate the Unit Under Test (UUT)
	EppCtrl uut (
		.EppAstb(EppAstb), 
		.EppDstb(EppDstb), 
		.EppWr(EppWr), 
		.DB(DB), 
		.EppWait(EppWait), 
		.cs(cs), 
		.stbData(stbData), 
		.ctrlWr(ctrlWr), 
		.busIn(busIn), 
		.busOut(busOut), 
		.outEppAdr(outEppAdr)
	);

	initial begin
		// Initialize Inputs
		EppAstb = 1;
		EppDstb = 1;
		EppWr = 1;
		busIn = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		#20
		 DB=8'h00;
		#5
		EppWr=0;
		#5
		EppAstb=0;
		#20
		EppAstb=1;
		#5
		EppWr=0;
		
	end


      
endmodule

