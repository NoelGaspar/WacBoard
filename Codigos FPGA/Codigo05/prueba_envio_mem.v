`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:52:37 08/24/2016 
// Design Name: 
// Module Name:    prueba_envio_mem 
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
module prueba_envio_mem(clk,stbAddr, stbData,ctrlWr,busEppAddrIn,SDOADC1,SDOADC2,busEppIn,EppWait,SDIDAC,CSDAC,CLKDAC,CSREF1,CSREF2,CSREF3,SDIREF,CLKREF,MUXREF1,MUXREF2,MUXREF3,MUXDACEN,theBeanConf,CSADC1,CLKADC1,CSADC2,CLKADC2);
//------------
//INPUTS
//------------
//generales
input clk;
//bramCtrl
input stbAddr;
input stbData;
input ctrlWr;
input [7:0] busEppAddrIn;
input [7:0] busEppIn;
//ADC
input SDOADC1; 
input SDOADC2; 
//------------
//Outputs
//------------
//Epp
output EppWait;
//dac
output SDIDAC,CSDAC,CLKDAC;
//digipot
output CSREF1,CSREF2,CSREF3;
output SDIREF,CLKREF;
//mux
output MUXREF1,MUXREF2,MUXREF3;
output MUXDACEN;
//ADC
output CSADC1,CLKADC1;
output CSADC2,CLKADC2;
//BEAN CONFIG
output [15:0]theBeanConf;


//--conexiones entre epp-bramcomCtrl-bram_puertoA
wire EppStbAddrOut,	EppStbDataOut,	EppWrOut;
wire [7:0] 	EppBusIn,EppBusOut,	BramDataOut,	BramDataIn;
wire [7:0] 	EppAddrOut;
wire [11:0]	BramAddrIn;
wire BramWeIn,BramClkIn; 
assign EppStbDataOut=stbData;
assign EppStbAddrOut=stbAddr;
//--conexiones entre bram_puertoB-wacComCtrl
wire bramWeb,	bramClkb;
wire [7:0] 	bramDoutb,bramDinb;
wire [11:0] bramAddrb;

//--conexiones entre wacComCtrl y BramComCtrl
wire dataStb,busy;
assign dataStb=EppStbDataOut;

//--conexion entre wacComCtrl y EppCtrl
wire [1:0] addr;
assign addr=EppAddrOut[5:4];

//--conexiones necesarias para debuguear la maquina de estados
wire [15:0]	confWord;
wire [7:0]	ctrlWord;
wire [2:0]	contData;

//--conexiones entre WacComCtrl y WacCtrl
wire [7:0]	ctrlWordWac;
wire [15:0]	confWordWac;
wire [11:0]	dataAdc;
wire [2:0] 	stTest;//linea de prueba para encontrar el error!!
wire ctrlEn,readyAdc,modeAdc;
wire [11:0]	nSamples;

assign ctrlWordWac=ctrlWord;
assign confWordWac=confWord;


//--conexiones entre BramComCtrl y secuenciador
wire wr_seq;
wire datoStb_seq;
wire [7:0]dato_seq;
assign datoStb_seq=EppStbDataOut;


	 
BramComCtrl mod2 (
    .clk(clk), 
    .stbData(stbData), 
	 .stbAddr(stbAddr),
    .ctrlWr(ctrlWr), 
    .busEppIn(busEppIn), 
    .busEppOut(EppBusIn), 
    .busEppAddrIn(busEppAddrIn), 
    .busBramAddr(BramAddrIn), 
    .busBramIn(BramDataOut), 
    .busBramOut(BramDataIn), 
    .ctrlWeBram(BramWeIn), 
    .clkBram(BramClkIn),
	 .stmBusy(busy),
	 .wr_seq(wr_seq),
	 .dato_seq(dato_seq)
    );
	 

Bram mod3 (
  .clka(BramClkIn), 		// input clka
  .wea(BramWeIn), 		// input [0 : 0] wea
  .addra(BramAddrIn),	// input [11 : 0] addra
  .dina(BramDataIn), 	// input [7 : 0] dina
  .douta(BramDataOut),	// output [7 : 0] douta
  .clkb(bramClkb), 			// input clkb
  .web(bramWeb), 				// input [0 : 0] web
  .addrb(bramAddrb), 		// input [11 : 0] addrb
  .dinb(bramDinb), 			// input [7 : 0] dinb
  .doutb(bramDoutb) 			// output [7 : 0] doutb
);

	 
WacComCtrl mod4 (
    .clk(clk), 
    .dataStb(dataStb), 
	 .addrEpp(addr),
	 .datoAdc(dataAdc),
	 .readyAdc(readyAdc),
    .busBramAddr(bramAddrb), 
    .busBramIn(bramDoutb), 
    .busBramOut(bramDinb), 
    .ctrlWeBram(bramWeb), 
    .clkBram(bramClkb), 
    .ctrlWord(ctrlWord), 
    .confWord(confWord), 
    .busy(busy), 
    .contData(contData),
	 .controlEn(ctrlEn),
	 .modeAdc(modeAdc),
	 .nSamples(nSamples),
	 .stTest(stTest)
    );


wacCtrl mod5(
    .clk(clk), 
	 .SDOADC1(SDOADC1),
	 .SDOADC2(SDOADC2),
    .ctrlWord(ctrlWordWac), 
    .ctrlEn(ctrlEn), 
    .confWord(confWordWac), 
	 .modeAdc(modeAdc),
	 .nSamples(nSamples),
	 .wr_seq(wr_seq),
	 .dato_seq(dato_seq),
	 .datoStb_seq(datoStb_seq),
    .CSDAC(CSDAC), 
    .SDIDAC(SDIDAC), 
    .CLKDAC(CLKDAC), 
    .CSDPOT1(CSREF1), 
    .CSDPOT2(CSREF2), 
    .CSDPOT3(CSREF3), 
    .SDIDPOT(SDIREF), 
    .CLKDPOT(CLKREF), 
    .MUXREF1(MUXREF1), 
    .MUXREF2(MUXREF2), 
    .MUXREF3(MUXREF3), 
    .MUXDACEN(MUXDACEN), 
    .theBeanConf(theBeanConf),
	 .dataAdc(dataAdc),
	 .readyAdc(readyAdc),
	 .CSADC1(CSADC1),
	 .CLKADC1(CLKADC1),
	 .CSADC2(CSADC2),
	 .CLKADC2(CLKADC2)
    );



endmodule