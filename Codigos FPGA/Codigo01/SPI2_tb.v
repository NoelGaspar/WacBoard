`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:43:37 10/20/2015
// Design Name:   SPI2
// Module Name:   C:/Users/Wac/Desktop/1_2014/Memoria/Codigos FPGA/Codigo01/SPI2_tb.v
// Project Name:  Codigo01
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: SPI2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module SPI2_tb;

	// Inputs
	reg clk;
	reg SCK;
	reg SIMO;
	reg CS;
	reg [7:0] data_out;

	// Outputs
	wire SOMI;
	wire [7:0] data_in;
	wire tx_send;

	//Auxliares
	reg aux1;
	reg aux2;
	
	
	// Instantiate the Unit Under Test (UUT)
	SPI2 uut (
		.clk(clk), 
		.SCK(SCK), 
		.SIMO(SIMO), 
		.CS(CS), 
		.data_out(data_out), 
		.SOMI(SOMI), 
		.data_in(data_in),
		.tx_send(tx_send)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		SCK = 0;
		SIMO = 0;
		CS = 1;
		data_out = 'hdd;
		aux1=1;
		aux2=1;
		// Wait 100 ns for global reset to finish
		#100;
		assign SCK=aux1&!aux2;
	end
      
always
	begin
		#5
		clk=~clk;
	end

always
	begin 
		#50
		aux1=~aux1;
	end
		
always
	begin
		#100
		SIMO=~SIMO;
	end

always
	begin
		#200
		aux2=0;
		#800
		aux2=1;
	end

always
	begin
		#60
		CS=0;
		#1000;
		CS=1;
	end
		
		
endmodule

