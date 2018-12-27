`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:24:26 08/24/2016
// Design Name:   test_operaciones
// Module Name:   C:/Users/lenovo/Desktop/temp/Memoria/Codigos FPGA/Codigo04/operaciones_tb.v
// Project Name:  Codigo03
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: test_operaciones
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module operaciones_tb;

	// Inputs
	reg [11:0] A;
	reg [11:0] B;

	// Outputs
	wire [11:0] C;

	// Instantiate the Unit Under Test (UUT)
	test_operaciones uut (
		.A(A), 
		.B(B), 
		.C(C)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
		
always
begin
 #10
 A=~A;
end	
		
endmodule

