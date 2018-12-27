`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Autor: Wladimir Araya
//	Descripción: Proyecto para tesis de pregrado.
// El módulo EppCtrl implementa un controldador asincrono basado en la
// documentación entregada por Digilent. Especificamente el proyecto
// BramCfg disponible en www.digilent.com
//
// This is the design of a simple, asynchronous Epp controller.
// All data transfers are synchronized only with the external 
// EppAstb and EppDstb strobes.
// The Epp controller serves as interface between an Epp compatible port
// (emulated by the Digilent OnBoard USB circuitry and firmware) and 
// client components in the user HDL project. It is used in conjunction 
// with a program running on a PC (a Digilent utility as TransPort or a 
// user generated application) which in turn uses the APIs provided by  
// Digilent Adept Suite.
// The Epp controller implements the Epp address register (regEppAdr),
// which can be written and read with EppAstb active. regEppAdr is 
// written on the falling edge of EppAstb, when EppWr is active (LOW).
// The upper 3 bits are decoded to generate SELECT signals for clients.
// The lower 5 bits are made available for clients.
// EppDstb and EppWr are passed to clients.
// EppWait is asserted inactive (HIGH) asynchronously when either 
// EppAstb or EppDstb are active (LOW). No Wait states are requested. 
// The bidirectional EppDB is split in busIn and busOut for clients.
// busOut always repeats EppDB.
// EppDB is set HiZ when EppWr is inactive (HIGH).
// Otherwise, EppDB sends either regEppAdr (when EppAstb is active)
// or the client busIn (when EppAstb is inactive)  
//
//////////////////////////////////////////////////////////////////////////////////
module EppCtrl(EppAstb,EppDstb,EppWr,DB,EppWait,cs, stbData, ctrlWr, busIn, busOut,outEppAdr);

//INPUTS
input EppAstb; 	// EPP addres storbe
input EppDstb;		// EPP data storbe
input EppWr;		// EPP Write/read control
input [7:0] busIn;//	Data proveniente desde aplicación en FPGA

//OUTPUTS
output EppWait;		// EPP wait signal
output cs;				// Select para la aplicación
output [6:0] outEppAdr;	//Addres para la aplicación
output stbData;		// data storbe para la aplicación
output ctrlWr;			//control write para la aplicación
output [7:0]busOut;	// dato para la aplicación

//INPUT-OUTPUT
inout [7:0]DB;			//EPP databus


//auxiliares
reg [7:0]EppAdrAux= 0;	// Auxiliar para la dirección hacia la aplicación
wire [7:0]busEpp;	// Auxiliar para los datos hacia la aplicación		

//Estas señales pasan directo hacia la aplicación
assign stbData=EppDstb;
assign ctrlWr=	EppWr;
assign outEppAdr=EppAdrAux[6:0];
assign cs=(!EppAdrAux[7]);
assign busOut= DB;

assign EppWait= ((EppDstb==0)||(EppAstb==0))? 1'b1:1'b0; 	//wait se pone en 1 de forma inmediata cuando hay comunicación en curso
assign DB = (EppWr==1)? busEpp: 8'bzzzz_zzzz;				//El bus de datos EPP posee un tercer estado cuando esta leyendo

assign busEpp= (EppAstb==0)?EppAdrAux:busIn;			


always@(negedge EppAstb)
	begin
			if(EppWr==0)		// ciclo de escritura
				EppAdrAux=DB; 	// addres es actualizada
	end

endmodule
