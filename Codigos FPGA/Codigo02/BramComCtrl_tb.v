`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:14:41 02/26/2016
// Design Name:   BramComCtrl
// Module Name:   C:/Users/Wac/Desktop/1_2014/Memoria/Codigos FPGA/Codigo02/BramComCtrl_tb.v
// Project Name:  Codigo02
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: BramComCtrl
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module BramComCtrl_tb;

	// Inputs
	reg clk;
	reg stb_data;
	reg ctrl_wr;
	reg [7:0] epp_in;
	reg [7:0] epp_addr_in;
	reg [7:0] bram_in;

	// Outputs
	wire [7:0] epp_out;
	wire [11:0] bram_addr;
	wire [7:0] bram_out;
	wire we_bram;
	wire clk_bram;

	// Instantiate the Unit Under Test (UUT)
	BramComCtrl uut (
		.clk(clk), 
		.stb_data(stb_data), 
		.ctrl_wr(ctrl_wr), 
		.epp_in(epp_in), 
		.epp_out(epp_out), 
		.epp_addr_in(epp_addr_in), 
		.bram_addr(bram_addr), 
		.bram_in(bram_in), 
		.bram_out(bram_out), 
		.we_bram(we_bram), 
		.clk_bram(clk_bram)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		stb_data = 1;
		ctrl_wr = 1;
		epp_in = 0;
		epp_addr_in = 0;
		bram_in = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	always
	 begin
	 #5
	 clk=~clk;
	 end
	
	
	/*//secuencia para enviar datos 
	always 
		begin
		#30 
		epp_in=8'h00;
		#5
		ctrl_wr=0;
		#5
		epp_addr_in=8'h00;
		#20
		ctrl_wr=1;
		#30//------------------------------------------
		epp_in=8'h00;
		#5
		ctrl_wr=0;
		#5
		stb_data=0;
		#30
		stb_data=1;
		#10
		ctrl_wr=1;
		#30//------------------------------------------
		epp_in=8'h01;
		#5  
		ctrl_wr=0;
		#5
		stb_data=0;
		#30
		stb_data=1;
		#10
		ctrl_wr=1; 
		#30//------------------------------------------
		epp_in=8'h02;
		#5  
		ctrl_wr=0;
		#5
		stb_data=0;
		#30
		stb_data=1;
		#10
		ctrl_wr=1; 
		#30//------------------------------------------
		epp_in=8'h03;
		#5  
		ctrl_wr=0;
		#5
		stb_data=0;
		#30
		stb_data=1;
		#10
		ctrl_wr=1; 
		#30//------------------------------------------
		epp_in=8'h04;
		#5  
		ctrl_wr=0;
		#5
		stb_data=0;
		#30
		stb_data=1;
		#10
		ctrl_wr=1; 
		#30//------------------------------------------
		epp_in=8'h05;
		#5  
		ctrl_wr=0;
		#5
		stb_data=0;
		#30
		stb_data=1;  
		#10
		ctrl_wr=1; 
		#30//------------------------------------------
		epp_in=8'h06;
		#5  
		ctrl_wr=0;
		#5
		stb_data=0;
		#30
		stb_data=1;
		#10
		ctrl_wr=1; 
		#600;
		end*/
		
		
		//secuencia para cambiar la direccion de la memoria
		
	always 
		begin
		#30 
		epp_in=8'h00;
		#5
		ctrl_wr=0;
		epp_in=8'h40;
		#10
		epp_addr_in=8'h40;
		#30
		ctrl_wr=1;
		epp_in=epp_out;
		#30//------------------------------------------
		#5
		ctrl_wr=0;
		epp_in=8'h03;
		#10
		stb_data=0;
		#30
		stb_data=1;
		#10
		ctrl_wr=1;
		epp_in=epp_out;
		#30//------------------------------------------
		#5
		ctrl_wr=0;
		epp_in=8'h80;
		#10
		epp_addr_in=8'h80;
		#30
		ctrl_wr=1;
		epp_in=epp_out;
		#30//------------------------------------------
		#5
		ctrl_wr=0;
		epp_in=8'h00;
		#10
		stb_data=0;
		#30
		stb_data=1;
		#10
		ctrl_wr=1;
		epp_in=epp_out;
		#30//------------------------------------------
		#5
		ctrl_wr=0;
		epp_in=8'h00;
		#10
		epp_addr_in=8'h00;
		#30
		ctrl_wr=1;
		epp_in=epp_out;
		#30//------------------------------------------
		#5
		ctrl_wr=0;
		epp_in=8'hff;
		#10
		stb_data=0;
		#30
		stb_data=1;
		#10
		ctrl_wr=1;
		epp_in=epp_out;
		#30//------------------------------------------
		#400;
		end
		
      
endmodule

