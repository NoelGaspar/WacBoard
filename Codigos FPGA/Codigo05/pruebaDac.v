`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:40:16 12/29/2015 
// Design Name: 
// Module Name:    pruebaDac 
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
module pruebaDac(clk,dataStb,addrEpp,busBramAddr,busBramIn,busBramOut,ctrlWeBram,clkBram,ctrlWord,confWord, busy, contData,controlEn  );

//INPUT
input clk;						//Clk desde la fpga. Maxima velocidad f=50MHz
input dataStb;					//Señal de storb de los datos.	
input [7:0]	busBramIn;		//Dato de salida del puerto B de la memoria
input [1:0]addrEpp; 			//Addres proveniente desde el bloque epp.

//OUTPUT
output [11:0] busBramAddr;	//Dirección para el puerto B de la memoria
output [7:0] busBramOut;	//Dato de entrada al puerto B de la memoria
output ctrlWeBram;			//Control de escritura del puerto B de la memoria
output clkBram;				//Clk del puerto B de la memoria
output reg busy=0;  			//Señal que evita colisiones de lectura en la BRAM. es 1 mientras se este leyendo datos desde la tarjeta
output [2:0] contData;		// indica si se han llegado correctamente los datos de configuracion




//--conexiones entre WacComCtrl y WacCtrl
wire [7:0]ctrlWordWac;
wire [15:0]confWordWac;
wire ctrlEn;





	 
WacComCtrl mod4 (
    .clk(clk), 
    .dataStb(dataStb), 
	 .addrEpp(addr),
    .busBramAddr(bramAddrb), 
    .busBramIn(bramDoutb), 
    .busBramOut(bramDinb), 
    .ctrlWeBram(bramWeb), 
    .clkBram(bramClkb), 
    .ctrlWord(ctrlWordWac), 
    .confWord(confWordWac), 
    .busy(busy), 
    .contData(contData),
	 .controlEn(ctrlEn)
    );

wacCtrl mod5(
    .clk(clk), 
    .ctrlWord(ctrlWordWac), 
    .ctrlEn(ctrlEnWac), 
    .confWord(confWordWac), 
    .syncDac(CSDAC), 
    .sdiDac(SDIDAC), 
    .sclkDac(CLKDAC), 
    .cs1Dpot(CSREF1), 
    .cs2Dpot(CSREF2), 
    .cs3Dpot(CSREF3), 
    .sdiDpot(SDIREF), 
    .clkDpot(CLKREF), 
    .muxRef1(MUXREF1), 
    .muxRef2(MUXREF2), 
    .muxRef3(MUXREF3), 
    .muxDacEn(MUXDACEN), 
    .muxDacSel(MUXDACSEL), 
    .theBeanConf(theBeanConf)
    );



endmodule
