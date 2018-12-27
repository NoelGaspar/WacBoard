`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:21:08 01/04/2016
// Design Name:   wacTest
// Module Name:   C:/Users/Wac/Desktop/1_2014/Memoria/Codigos FPGA/Codigo03/wacTest_tb.v
// Project Name:  Codigo03
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: wacTest
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////
module wacTest_tb;

	// Inputs
	reg clk;
	reg dataStb;
	reg [1:0] addrEpp;
	reg [7:0] busBramIn;
	reg SDOADC1;
	reg SDOADC2;
	
	// Outputs
	wire [11:0] busBramAddr;
	wire [7:0] busBramOut;
	wire ctrlWeBram;
	wire clkBram;
	wire busy;
	wire [2:0] contData;
	wire CSDAC;
	wire SDIDAC;
	wire CLKDAC;
	wire CSDPOT1;
	wire CSDPOT2;
	wire CSDPOT3;
	wire SDIDPOT;
	wire CLKDPOT;
	wire MUXREF1;
	wire MUXREF2;
	wire MUXREF3;
	wire MUXDACEN;
	wire [15:0] theBeanConf;
	wire CSADC1;
	wire CLKADC1;
	wire CSADC2;
	wire CLKADC2;
	wire [2:0]stTest;
	// Instantiate the Unit Under Test (UUT)
	wacTest uut (
		.clk(clk), 
		.dataStb(dataStb), 
		.addrEpp(addrEpp), 
		.busBramIn(busBramIn), 
		.SDOADC1(SDOADC1), 
		.SDOADC2(SDOADC2), 
		.busBramAddr(busBramAddr), 
		.busBramOut(busBramOut), 
		.ctrlWeBram(ctrlWeBram), 
		.clkBram(clkBram), 
		.busy(busy), 
		.contData(contData), 
		.CSDAC(CSDAC), 
		.SDIDAC(SDIDAC), 
		.CLKDAC(CLKDAC), 
		.CSDPOT1(CSDPOT1), 
		.CSDPOT2(CSDPOT2), 
		.CSDPOT3(CSDPOT3), 
		.SDIDPOT(SDIDPOT), 
		.CLKDPOT(CLKDPOT), 
		.MUXREF1(MUXREF1), 
		.MUXREF2(MUXREF2), 
		.MUXREF3(MUXREF3), 
		.MUXDACEN(MUXDACEN), 
		.theBeanConf(theBeanConf), 
		.CSADC1(CSADC1), 
		.CLKADC1(CLKADC1),
		.CSADC2(CSADC2), 
		.CLKADC2(CLKADC2),
		.stTest(stTest)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		dataStb = 1;
		addrEpp = 1;
		busBramIn = 8'h55;
		SDOADC1 = 1;
		SDOADC2 = 0;

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
	#100
	dataStb=0;
	#20
	dataStb=1;
	#20
	dataStb=0;
	#20
	dataStb=1;
	#20
	dataStb=0;
	#20
	dataStb=1;
	#305
	dataStb=0;
	#20
	dataStb=1;
	#20
	dataStb=0;
	#20
	dataStb=1;
	#20
	dataStb=0;
	#20
	dataStb=1;
	#1500; 
	dataStb=0;
	#20
	dataStb=1;
	#20
	dataStb=0;
	#20
	dataStb=1;
	#20
	dataStb=0;
	#20
	dataStb=1;
	#800;
	end   
	
 always
	begin 
	#95 
	addrEpp=0;
	#30
	#10
	addrEpp=1;	
	#40
	addrEpp=2; 
	#40
	addrEpp=0;
	#1775;
	#95 
	addrEpp=0;
	#30
	#10
	addrEpp=1;	
	#40
	addrEpp=2; 
	#40
	addrEpp=0;
	#27830;
	end 

	 
always
		begin
		#210
		busBramIn = 8'h89;
		#40
		busBramIn = 8'h14;
		#40
		busBramIn = 8'he0;
		#320
		#1600
		busBramIn = 8'h24;
		#40
		busBramIn = 8'h14;
		#40
		busBramIn = 8'h40;
		
		#27960
		busBramIn = 8'h24;
		#40
		busBramIn = 8'h10;
		#40
		busBramIn = 8'he0;
		#1320;		
		end
	 
	
endmodule

