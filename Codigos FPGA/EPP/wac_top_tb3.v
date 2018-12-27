`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:37:19 11/24/2015
// Design Name:   wac_top
// Module Name:   C:/Users/Wac/Desktop/1_2014/Memoria/Codigos FPGA/EPP/wac_top_tb3.v
// Project Name:  EPP
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: wac_top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module wac_top_tb3;

	// Inputs
	reg clk;
	reg [7:0] busBramIn;
	reg dataStb;
	reg sdoAdc1;
	reg sdoAdc2;

	// Outputs
	wire [11:0] busBramAddr;
	wire [7:0] busBramOut;
	wire syncDac;
	wire sdiDac;
	wire sclkDac;
	wire csDpot1;
	wire csDpot2;
	wire csDpot3;
	wire sdiDpot;
	wire clkDpot;
	wire [4:0] mux;
	wire [15:0] theBeanConf;
	wire stmBusy;
	wire clkAdc1;
	wire clkAdc2;
	wire csAdc1;
	wire csAdc2;

	// Instantiate the Unit Under Test (UUT)
	wac_top uut (
		.clk(clk), 
		.busBramAddr(busBramAddr), 
		.busBramIn(busBramIn), 
		.busBramOut(busBramOut), 
		.dataStb(dataStb), 
		.syncDac(syncDac), 
		.sdiDac(sdiDac), 
		.sclkDac(sclkDac), 
		.csDpot1(csDpot1), 
		.csDpot2(csDpot2), 
		.csDpot3(csDpot3), 
		.sdiDpot(sdiDpot), 
		.clkDpot(clkDpot), 
		.mux(mux), 
		.theBeanConf(theBeanConf), 
		.stmBusy(stmBusy),
		.sdoAdc1(sdoAdc1), 
		.sdoAdc2(sdoAdc2), 
		.clkAdc1(clkAdc1), 
		.clkAdc2(clkAdc2), 
		.csAdc1(csAdc1), 
		.csAdc2(csAdc2)
	);
 
	initial begin
		// Initialize Inputs
		clk = 0;
		busBramIn = 0;
		dataStb = 1;
		sdoAdc1 = 0;
		sdoAdc2 = 0;

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
	#10
	dataStb=1;
	#20
	dataStb=0;
	#10
	dataStb=1;	
	#20
	dataStb=0;
	#10
	dataStb=1;
	#10;
	#300;
	end
	
always
begin
#100
busBramIn = 8'h03;
#40
busBramIn = 8'h55;
#20
busBramIn = 8'h01;
#40
#200;
#100 
busBramIn = 8'h02;
#40
busBramIn = 8'h55;
#20
busBramIn = 8'h77;
#40
#300
busBramIn = 8'h04;
#40
busBramIn = 8'h55;
#20
busBramIn = 8'hee; 
end	
endmodule

