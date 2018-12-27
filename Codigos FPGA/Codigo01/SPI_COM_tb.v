`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:37:08 10/14/2015
// Design Name:   SPI_COM
// Module Name:   C:/Users/Wac/Desktop/1_2014/Memoria/Codigos FPGA/Codigo01/SPI_COM_tb.v
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

module SPI_COM_tb;

	// Inputs
	reg SCK;
	reg SIMO;
	reg CS;
	reg [7:0] data_out;
	reg clk;
	reg aux;

	// Outputs
	wire SOMI;
	wire [7:0] data_in;

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
		aux = 1;
		data_out = 8'h bbb;
		clk=1;

		// Wait 100 ns for global reset to finish
		#100;
  assign SCK= clk&!aux;
  
		// Add stimulus here
	end
		
		always
			begin
			#10
			clk=~clk;
			end
	  always
			begin
			#20
			SIMO=~SIMO; 
			end
			
	 always
			begin
			#180
			aux=0;
			#160
			aux=1;
			end
	 
	 
	 always
			begin
			#80
			CS=0;
			#260
			CS=1;
			end
	 
	 
endmodule

