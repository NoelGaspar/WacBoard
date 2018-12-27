`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:32:57 11/18/2015
// Design Name:   wacCtrl
// Module Name:   C:/Users/Wac/Desktop/1_2014/Memoria/Codigos FPGA/EPP/wacCtrl_tb.v
// Project Name:  EPP
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: wacCtrl
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module wacCtrl_tb;

	// Inputs
	reg clk;
	reg dataStb;
	reg [7:0] busBramIn;
	reg [7:0] busWacIn;

	// Outputs
	wire [11:0] busBramAddr;
	wire [7:0] busBramOut;
	wire ctrlWeBram;
	wire clkBram;
	wire [7:0] ctrlWac;
	wire [15:0] confWac;
	wire adcWacEn;
	wire confWacEn;
	
	
	// Instantiate the Unit Under Test (UUT)
	wacCtrl uut (
	 .clk(clk), 
    .dataStb(dataStb), 
    .busBramAddr(busBramAddr), 
    .busBramIn(busBramIn), 
    .busBramOut(busBramOut), 
    .ctrlWeBram(ctrlWeBram), 
    .clkBram(clkBram), 
    .ctrlWac(ctrlWac), 
    .confWac(confWac), 
    .adcWacEn(adcWacEn), 
    .confWacEn(confWacEn), 
    .busWacIn(busWacIn)
    );



	initial begin
		// Initialize Inputs
		clk = 0;
		dataStb = 1;
		busBramIn = 0;
		busWacIn=0;
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
	#20
	dataStb=0;
	busBramIn=1;
	#10
	dataStb=1;
	#20
	dataStb=0;
	busBramIn=2;
	#10
	dataStb=1;	
	#20
	dataStb=0;
	busBramIn=8'h02;
	#10
	dataStb=1;
	#300;
	end
	
endmodule

