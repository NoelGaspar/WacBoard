`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:45:18 10/16/2014
// Design Name:   clk_div
// Module Name:   C:/Users/Wac/Desktop/1_2014/Memoria/codigos/Prueba/clk_div_tb.v
// Project Name:  Prueba
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: clk_div
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module clk_div_tb;

	// Inputs
	reg mclk;

	// Outputs
	wire outclk;

	// Instantiate the Unit Under Test (UUT)
	clk_div uut (
		.mclk(mclk), 
		.outclk(outclk)
	);

	initial begin
		// Initialize Inputs
		mclk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here  

	end
      
	always
begin
 #5
 mclk=mclk+1;
end

	
endmodule

