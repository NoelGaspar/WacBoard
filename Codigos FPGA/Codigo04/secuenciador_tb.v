`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:58:30 07/07/2016
// Design Name:   secuenciador
// Module Name:   C:/Users/lenovo/Desktop/temp/Memoria/Codigos FPGA/Codigo03/secuenciador_tb.v
// Project Name:  Codigo03
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: secuenciador
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module secuenciador_tb;

	// Inputs
	reg clk;
	reg seq_en;
	reg [1:0] mode;
	reg wr;
	reg [7:0]dato;
	reg datoStb;
	reg enable;
	wire Stb;
	// Outputs
	wire [15:0] theBeanConfig;

	// Instantiate the Unit Under Test (UUT)
	secuenciador uut (
		.clk(clk), 
		.seq_en(seq_en), 
		.mode(mode), 
		.dato(dato),
		.wr(wr),
		.Stb(Stb),
		.theBeanConfig(theBeanConfig)
	); 

	initial begin
		// Initialize Inputs
		clk = 0;
		seq_en = 0; 
		mode = 2'b10;
		dato=8'hfd;
		wr=1'b0;
		datoStb=0;
		enable=0;
		// Wait 100 ns for global reset to finish
		#60;
		// Add stimulus here
	end
      
assign Stb=datoStb&enable;
		
always 
begin
	#10
	clk=~clk;
end 

always 			
begin
	#40
	dato=dato+1;
end		
	 	
always
begin
	#120
	wr=1'b1;
	enable=1;
	#640
	wr=1'b0;
	enable=0;
	#500;
end		
		
always
begin
#30
datoStb=1;
#10;
datoStb=0;
end		
		
always
begin
	#40;
	#1000
	seq_en=1;
	#20;
	seq_en=0;
	#1000; 
end		
		
		
endmodule

