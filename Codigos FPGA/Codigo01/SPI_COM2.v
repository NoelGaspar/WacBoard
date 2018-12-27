`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:09:57 10/14/2015
// Design Name:   SPI_COM
// Module Name:   C:/Users/Wac/Desktop/1_2014/Memoria/Codigos FPGA/Codigo01/SPI_COM2.v
// Project Name:  Codigo01
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: SPI_COM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module SPI_COM2;

	// Inputs
	reg SCK;
	reg SIMO;
	reg CS;
	reg [11:0] data_out;

	// Outputs
	wire SOMI;
	wire [11:0] data_in;

	// Instantiate the Unit Under Test (UUT)
	SPI_COM uut (
		.SCK(SCK), 
		.SIMO(SIMO), 
		.SOMI(SOMI), 
		.CS(CS), 
		.data_in(data_in), 
		.data_out(data_out)
	);

	initial begin
		// Initialize Inputs
		SCK = 0;
		SIMO = 0;
		CS = 1;
		data_out = 12'h bbb;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
    always
			begin
			#10
			SCK=~SCK;
			end
	 
	 always
			begin
			#75
			CS=0;
			#240
			CS=1;
			end
endmodule

