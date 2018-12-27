`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:12:42 01/25/2016
// Design Name:   BramComCtrl
// Module Name:   C:/Users/Wac/Desktop/1_2014/Memoria/Codigos FPGA/Codigo03/BramComCtrl_tb.v
// Project Name:  Codigo03
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
	reg stbData;
	reg stbAddr;
	reg ctrlWr;
	reg [7:0] busEppIn;
	reg [7:0] busEppAddrIn;
	reg [7:0] busBramIn;
	reg stmBusy;
	wire wr_seq;
	wire [7:0] dato_seq;

	// Outputs
	wire [7:0] busEppOut;
	wire [11:0] busBramAddr;
	wire [7:0] busBramOut;
	wire ctrlWeBram;
	wire clkBram;

	// Instantiate the Unit Under Test (UUT)
	BramComCtrl uut (
		.clk(clk), 
		.stbData(stbData), 
		.stbAddr(stbAddr), 
		.ctrlWr(ctrlWr), 
		.busEppIn(busEppIn), 
		.busEppOut(busEppOut), 
		.busEppAddrIn(busEppAddrIn), 
		.busBramAddr(busBramAddr), 
		.busBramIn(busBramIn), 
		.busBramOut(busBramOut), 
		.ctrlWeBram(ctrlWeBram), 
		.clkBram(clkBram), 
		.stmBusy(stmBusy),
		.wr_seq(wr_seq),
		.dato_seq(dato_seq)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		stbData = 1;
		stbAddr = 1;
		ctrlWr = 1;
		busEppIn = 0;
		busEppAddrIn = 8'h40;
		busBramIn = 0;
		stmBusy = 0;

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
busEppIn=8'h40;
#10
ctrlWr=0;
#10; 
stbAddr=0;
#50;
stbAddr=1;
#10;
ctrlWr=1;
#50;
busEppIn=8'h44;
#10;
ctrlWr=0;
#10; 
stbData=0;
#50
stbData=1;
#10
ctrlWr=1;
#1000;
end
endmodule

