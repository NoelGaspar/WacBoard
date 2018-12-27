`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:00:22 10/27/2015
// Design Name:   Control
// Module Name:   C:/Users/Wac/Desktop/1_2014/Memoria/Codigos FPGA/Codigo01/Control_tb.v
// Project Name:  Codigo01
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Control
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Control_tb;

	// Inputs
	reg clk;
	reg [7:0] data_in;
	reg tx_send;

	// Outputs
	wire [7:0]data_out;
	wire ctrl_dac;
	wire [15:0] dato_dac;
	wire [1:0] mux_dpot;
	wire ctrl_dpot;
	wire [7:0] dato_dpot;
	wire [1:0] seg;

	// Instantiate the Unit Under Test (UUT)
Control uut (
    .clk(clk), 
    .data_in(data_in), 
    .tx_send(tx_send), 
    .data_out(data_out), 
    .ctrl_dac(ctrl_dac), 
    .dato_dac(dato_dac), 
    .mux_dpot(mux_dpot), 
    .ctrl_dpot(ctrl_dpot), 
    .dato_dpot(dato_dpot), 
    .seg(seg)
    );

	initial begin
		// Initialize Inputs
		clk = 0;
		data_in = 'h74;
		tx_send = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
	end
      
		always
			begin
			#10
			clk=~clk;
			end
			
		always
			begin
			#40
			tx_send=1;
			#40
			tx_send=0;
			#1500;
			end
		
		
endmodule

