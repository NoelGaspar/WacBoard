`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:35:14 07/28/2015
// Design Name:   Top
// Module Name:   C:/Users/Wac/Desktop/1_2014/Memoria/Codigos FPGA/Codigo01/Top_tb2.v
// Project Name:  Codigo01
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Top_tb2;

	// Inputs
	reg clk;
	reg [7:0] sw;
	reg btn; 

	// Outputs
	wire SDI_REF;
	wire CLK_REF;
	wire CS_REF1;
	wire CS_REF2;
	wire CS_REF3;
	wire MUX_REF1;
	wire MUX_REF2;
	wire MUX_REF3;
	wire CS_DAC;
	wire SDI_DAC;
	wire CLK_DAC;
	wire [6:0] seg;
	wire [3:0] an;

	// Instantiate the Unit Under Test (UUT)
	Top uut (
		.clk(clk), 
		.sw(sw), 
		.btn(btn), 
		.SDI_REF(SDI_REF), 
		.CLK_REF(CLK_REF), 
		.CS_REF1(CS_REF1), 
		.CS_REF2(CS_REF2), 
		.CS_REF3(CS_REF3), 
		.MUX_REF1(MUX_REF1), 
		.MUX_REF2(MUX_REF2), 
		.MUX_REF3(MUX_REF3), 
		.CS_DAC(CS_DAC), 
		.SDI_DAC(SDI_DAC), 
		.CLK_DAC(CLK_DAC), 
		.seg(seg), 
		.an(an)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		sw = 'hff;
		btn = 0;

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
			#400
			btn=1;
			#40
			btn=0;
		end
	
	always
		begin
		 #50
		 sw[0]=0;
		 #50
		 sw[0]=1; 
		end
		
	always
		begin
		#60
		sw[1]=0;
		#320
		sw[1]=1;
		end
		
		always
		begin
		#80
		sw[2]=0;
		#640
		sw[2]=1; 
		end
endmodule

