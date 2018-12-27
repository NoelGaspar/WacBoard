`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:40:10 02/18/2016 
// Design Name: 
// Module Name:    EppCtrl 
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
module EppCtrl(EppAstb,EppDstb,EppWr,DB,EppWait,stb_data, ctrl_wr, bus_in, bus_out,bus_addr);

//----------------------------------------
// INPUTS
//----------------------------------------
input 		EppAstb; // EPP addres storbe
input			EppDstb;	// EPP data storbe
input 		EppWr;	// EPP Write/read control
input	[7:0]	bus_in;	//	Data proveniente desde aplicación en FPGA

//----------------------------------------
// OUTPUTS
//----------------------------------------
output 			EppWait;		//EPP wait signal
output	[7:0]	bus_addr;	//Addres para la aplicación
output 			stb_data;	//data storbe para la aplicación
output 			ctrl_wr;		//control write para la aplicación
output	[7:0]	bus_out;		//dato para la aplicación
//----------------------------------------
// INPUT-OUTPUTS
//----------------------------------------
inout [7:0]	DB;				//EPP databus

//auxiliares
reg 	[7:0]	addr_reg = 0;	// Auxiliar para la dirección hacia la aplicación
wire 	[7:0]	bus_epp;			// Auxiliar para los datos hacia la aplicación		

//Estas señales pasan directo hacia la aplicación
assign stb_data =	EppDstb;
assign ctrl_wr	= 	EppWr;
assign bus_addr = addr_reg;
assign bus_out	= 	DB;

assign EppWait	=	((!EppDstb) || (!EppAstb))? 1'b1:1'b0;	//la señal Wait se pone en 1 de forma inmediata cuando hay comunicación en curso
assign bus_epp	= (EppAstb==0)? addr_reg:bus_in;				//El bus interno puede mantener la ultima direccion ingresada o el dato proveniente desde la aplicación
assign DB = (EppWr==1)? bus_epp: 8'bzzzz_zzzz;				//El bus de datos EPP posee un tercer estado cuando esta leyendo



always@(negedge EppAstb)
	begin
			if(EppWr == 0)				// ciclo de escritura
				begin
					addr_reg <= DB; 	// addres es actualizada
				end
	end
	
	
endmodule
