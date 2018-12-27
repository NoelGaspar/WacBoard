`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:05:44 08/24/2016
// Design Name:   prueba_envio_mem
// Module Name:   C:/Users/lenovo/Desktop/temp/Memoria/Codigos FPGA/Codigo04/prueba_envio__mem_tb.v
// Project Name:  Codigo03
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: prueba_envio_mem
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module prueba_envio__mem_tb;

	// Inputs
	reg clk;
	reg stbAddr;
	reg stbData;
	reg ctrlWr;
	reg [7:0] busEppAddrIn;
	reg SDOADC1;
	reg SDOADC2;
	reg [7:0] busEppIn;

	// Outputs
	wire EppWait;
	wire SDIDAC;
	wire CSDAC;
	wire CLKDAC;
	wire CSREF1;
	wire CSREF2;
	wire CSREF3;
	wire SDIREF;
	wire CLKREF;
	wire MUXREF1;
	wire MUXREF2;
	wire MUXREF3;
	wire MUXDACEN;
	wire [15:0] theBeanConf;
	wire CSADC1;
	wire CLKADC1;
	wire CSADC2;
	wire CLKADC2;

	// Instantiate the Unit Under Test (UUT)
	prueba_envio_mem uut (
		.clk(clk), 
		.stbAddr(stbAddr), 
		.stbData(stbData), 
		.ctrlWr(ctrlWr), 
		.busEppAddrIn(busEppAddrIn), 
		.SDOADC1(SDOADC1), 
		.SDOADC2(SDOADC2), 
		.busEppIn(busEppIn), 
		.EppWait(EppWait), 
		.SDIDAC(SDIDAC), 
		.CSDAC(CSDAC), 
		.CLKDAC(CLKDAC), 
		.CSREF1(CSREF1), 
		.CSREF2(CSREF2), 
		.CSREF3(CSREF3), 
		.SDIREF(SDIREF), 
		.CLKREF(CLKREF), 
		.MUXREF1(MUXREF1), 
		.MUXREF2(MUXREF2), 
		.MUXREF3(MUXREF3), 
		.MUXDACEN(MUXDACEN), 
		.theBeanConf(theBeanConf), 
		.CSADC1(CSADC1), 
		.CLKADC1(CLKADC1), 
		.CSADC2(CSADC2), 
		.CLKADC2(CLKADC2)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		stbAddr = 1;
		stbData = 1;
		ctrlWr = 1;
		busEppAddrIn = 8'h00;;
		SDOADC1 = 0;
		SDOADC2 = 0;
		busEppIn = 8'h00;

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
busEppAddrIn=8'h40;
#50;
stbAddr=1;
#10;
ctrlWr=1;
#50;
busEppIn=8'h01;
#10;
ctrlWr=0;
#10; 
stbData=0;
#50
stbData=1;
#10
ctrlWr=1;
#50;
busEppIn=8'h02;
#10;
ctrlWr=0;
#10; 
stbData=0;
#50
stbData=1;
#10
ctrlWr=1;
#50;
busEppIn=8'h03;
#10;
ctrlWr=0;
#10; 
stbData=0;
#50
stbData=1;
#10
ctrlWr=1;
#50;
busEppIn=8'h04;
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

