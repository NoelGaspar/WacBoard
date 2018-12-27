`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:07:13 07/15/2015
// Design Name:   Top
// Module Name:   C:/Users/Wac/Desktop/1_2014/Memoria/Codigos FPGA/Codigo01/Top_tb.v
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

module Top_tb;

	// Inputs
	reg clk;
	reg [7:0] sw;

	// Outputs
	wire SDI_REF;
	wire CS_REF1;
	wire CLK_REF;
	wire MUX_REF1;
	

	// Instantiate the Unit Under Test (UUT)
// Instantiate the module
Top instance_name (
    .clk(clk), 
    .sw(sw), 
    .SDI_REF(SDI_REF), 
    .CS_REF1(CS_REF1), 
    .CLK_REF(CLK_REF), 
    .MUX_REF1(MUX_REF1)
    );



	initial begin
		// Initialize Inputs
		clk = 0;
		sw ='hff;

		// Wait 100 ns for global reset to finish
		#100;
        
		

	end
      
		always
			begin
			#10
			clk=~clk;
			end
		
		always
			begin
			#80
			sw[0]=0;
			#800
			sw[0]=1;
			end
			
			
		always 
			begin
			#100
			sw[1]=~sw[1];
			end 
		
endmodule

