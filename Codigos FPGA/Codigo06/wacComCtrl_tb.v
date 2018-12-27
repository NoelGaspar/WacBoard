`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:55:16 12/15/2015
// Design Name:   WacComCtrl
// Module Name:   C:/Users/Wac/Desktop/1_2014/Memoria/Codigos FPGA/Codigo03/wacComCtrl_tb.v
// Project Name:  Codigo03
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: WacComCtrl
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module wacComCtrl_tb;

	// Inputs
	reg clk;
	reg dataStb;
	reg [7:0] busBramIn;
	reg [1:0] addrEpp;
	reg [11:0] datoAdc;
	reg readyAdc;
	reg flag_adc_seq;
	reg [10:0]aux;
	
	// Outputs
	wire [11:0] busBramAddr;
	wire [7:0] 	busBramOut;
	wire ctrlWeBram;
	wire clkBram;
	wire [7:0] 	ctrlWord;
	wire [15:0] confWord;
	wire busy;
	wire [2:0] 	contData;
	wire controlEn; 
	wire ADC_En;
	wire seq_En;
	wire [1:0]seq_mode;
	wire modeAdc;
	wire [3:0] 	stTest;
	wire [11:0]	nSamples;

	// Instantiate the Unit Under Test (UUT)
	WacComCtrl uut (
		.clk(clk),  
		.dataStb(dataStb), 
		.addrEpp(addrEpp), 
		.datoAdc(datoAdc),
		.readyAdc(readyAdc),
		.flag_adc_seq(flag_adc_seq),
		.busBramAddr(busBramAddr), 
		.busBramIn(busBramIn), 
		.busBramOut(busBramOut), 
		.ctrlWeBram(ctrlWeBram), 
		.clkBram(clkBram), 
		.ctrlWord(ctrlWord), 
		.confWord(confWord), 
		.busy(busy), 
		.contData(contData),
		.controlEn(controlEn),
		.ADC_En(ADC_En),
		.seq_En(seq_En),
		.seq_mode(seq_mode),
		.modeAdc(modeAdc),
		.nSamples(nSamples),
		.stTest(stTest)
	); 

	initial begin
		// Initialize Inputs
		clk = 0;
		dataStb = 1;
		busBramIn = 8'h94;
		addrEpp=1;
		datoAdc=12'h144;
		aux=0;
		readyAdc=0;
		flag_adc_seq=0;
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
	#10
	aux=aux+1;
	end

always
begin
#1000;
flag_adc_seq=1;
#20;
flag_adc_seq=0;
#1080;	
flag_adc_seq=1;
#20;
flag_adc_seq=0;
#1080;	
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
	#20000;
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
	#18000;
	end 	

always
	begin
	#400;
	datoAdc=datoAdc+3;
	readyAdc=1;
	#20;
	readyAdc=0;
	end
always
		begin
		#210
		busBramIn = 8'hd4;
		#40
		busBramIn = 8'h0f;
		#40
		busBramIn = 8'h02;
		#4000
		busBramIn = 8'h55;
		#40
		busBramIn = 8'h01;
		#40
		busBramIn = 8'he8;
		end
	 
endmodule

