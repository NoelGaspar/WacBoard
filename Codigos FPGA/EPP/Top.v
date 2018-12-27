`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:57:20 11/24/2015 
// Design Name: 
// Module Name:    Top 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Top(clk,EppAstb,EppDstb,EppWr,EppWait,DB,CLKDAC,SDIDAC,CSDAC,SDIREF,CLKREF,CSREF1,CSREF2,CSREF3,MUXREF1,MUXREF2,MUXREF3,SDOADC2,CSADC2,CLKADC2,SDOADC1,CSADC1,CLKADC1,MUXDACEN,MUXDACSEL,theBeanConf, Led);

//-----------------------
//INPUTS
//-----------------------
//clocks
input clk;
//Epp
input	EppAstb;
input EppDstb;
input EppWr;
//TARJETA WAC
input SDOADC1,SDOADC2;
//-----------------------
//OUTPUTS
//-----------------------
//EPP
output EppWait;
//TARJETA WAC
output CLKDAC,SDIDAC,CSDAC;//DAC
output [15:0] theBeanConf;	//CONFIGURACION DE LA PLACA.
output CLKADC1,CSADC1;		//ADC1
output CLKADC2,CSADC2;		//ADC2
output SDIREF,CLKREF,CSREF1,CSREF2,CSREF3;			//DIGPOT
output MUXREF1,MUXREF2,MUXREF3,MUXDACEN,MUXDACSEL;	//MULTIPLEXORES
output [7:0] Led;//output para debuguear temporalmente

//-----------------------
//INPUT-OUTPUTS
//-----------------------
//EPP
inout [7:0]DB;

//-----------------------
// WIRES
//-----------------------
// cables entre EppCtrl-BramComCtrl
wire EppDstbOut, EppAstbOut,EppWrOut;
wire [7:0] EppBusIn, EppBusOut;
wire [11:0] EppAddrOut;

//cables entre BramComCtrl-Bram
wire BramWea,BramClka;
wire [7:0] BramDouta,BramDina;
wire [11:0] BramAddra;

//cables entre Bram-WacCtrl
wire BramWeb,BramClkb;
wire [7:0] BramDoutb,BramDinb;
wire [11:0] BramAddrb;

//cables entre EppCtrl-wacCtrl
wire wacDstb;//buffer para EppDstbOut;

//cables entre WacCtrl-BramComCtrl
wire stmBusy;//state machine busy cotnrol.

//cables entre WacCtrl-Wac
wire 	[7:0] ctrlWac,ctrlWac2, adcWacOut;
wire	[11:0] confWac;
wire adcWacEn, confWacEn;

reg [7:0] leds=0;


assign wacDstb= EppDstbOut;//buffer para EppDatastb.
assign ctrlWac2=ctrlWac;
assign Led=leds;

always@(posedge clk)
leds= ctrlWac;


EppCtrl mod1(
    .EppAstb(EppAstb), 
    .EppDstb(EppDstb),
    .EppWr(EppWr), 
    .DB(DB), 
    .EppWait(EppWait), 
    .stbData(EppDstbOut), 
	 .stbAddr(EppAstbOut),
    .ctrlWr(EppWrOut), 
    .busIn(EppBusIn), 
    .busOut(EppBusOut), 
    .outEppAddr(EppAddrOut)
    );

BramComCtrl mod2(
    .clk(clk), 
    .stbData(EppDstbOut), 
	 .stbAddr(EppAstbOut),
    .ctrlWr(EppWrOut), 
    .busEppIn(EppBusOut), 
    .busEppOut(EppBusIn), 
    .busEppAddrIn(EppAddrOut), 
    .busBramAddr(BramAddrIn), 
    .busBramIn(BramDataOut), 
    .busBramOut(BramDataIn), 
    .ctrlWeBram(BramWeIn), 
    .clkBram(BramClkIn),
	 .stmBusy(stmBusy)
    );

BRamAB mod3 (
  .clka(BramClka), // input clka
  .wea(BramWea), // input [0 : 0] wea
  .addra(BramAddra), // input [11 : 0] addra
  .dina(BramDina), // input [7 : 0] dina
  .douta(BramDouta), // output [7 : 0] douta
  .clkb(BramClkb), // input clkb
  .web(BramWeb), // input [0 : 0] web
  .addrb(BramAddrb), // input [11 : 0] addrb
  .dinb(BramDinb), // input [7 : 0] dinb
  .doutb(BramDoutb) // output [7 : 0] doutb
);


wacCtrl mod4 (
    .clk(clk), 
    .dataStb(dataStb), 
    .busBramAddr(BramAddrb), 
    .busBramIn(BramDoutb), 
    .busBramOut(BramDinb), 
    .ctrlWeBram(BramWeb), 
    .clkBram(BramClkb), 
    .ctrlWac(ctrlWac), 
    .confWac(confWac), 
    .adcWacEn(adcWacEn), 
    .confWacEn(confWacEn), 
    .busWacIn(adcWacOut),
	 .busy(stmBusy)
    );


wac mod5 (
    .clk(clk), 
    .ctrlWac(ctrlWac2), 
    .confWac(confWac), 
    .adcWacEn(adcWacEn), 
    .confWacEn(confWacEn), 
	 .adcOut(adcWacOut),
    .syncDac(CSDAC), 
    .sdiDac(SDIDAC), 
    .sclkDac(CLKDAC), 
    .csDpot1(CSREF1), 
    .csDpot2(CSREF2), 
    .csDpot3(CSREF3), 
    .sdiDpot(SDIREF), 
    .clkDpot(CLKREF),
	 .muxDacEn(MUXDACEN), 
    .muxDacSel(MUXDACSEL), 
    .muxRef1(MUXREF1), 
    .muxRef2(MUXREF2), 
    .muxRef3(MUXREF3), 
	 .theBeanConf(theBeanConf),
	 .sdoAdc1(SDOADC1), 
    .clkAdc1(CLKADC1), 
    .csAdc1(CSADC1), 
    .sdoAdc2(SDOADC2), 
    .clkAdc2(CLKADC2), 
    .csAdc2(CSADC2)
    );
	 
endmodule