`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Autor: Wladimir Araya
//	Nota: Modulo para proyecto de tesis de pregrado.
// 
//	Descripción: 
//	El módulo EppCtrl implementa un controldador asincrono basado en la
// documentación entregada por Digilent. Especificamente el proyecto
// BramCfg disponible en www.digilent.com
//	Premite implementar una comunicación entre un host y una aplicación 
//	corriendo en la FPGA.
//	
//	Detalle:	
// -El control es totalmente asincrono. La comunicación se implementa
//	por medio de las señales EppAstb and EppDstb.
//	-El control  realiza un split entre los datos y las direcciones
// las que se guardan en un registro(regEppAddr).
// -Las direcciones son escritas o leidas cuando EppAstb esta activo (low).
// regEppAdr es escrito en los flancos de bajada de EppAstb, cuando EppWr
// esta activo(LOW).
// -Las señales EppDstb y EppWr son entregadas directamente a la aplicación.
// -En este control, la señal EppWait is activada (high) de forma asincrona
// cuando cualquiera EppAstb o EppDstb esta activa(low).
// -La señal bidireccional EppDB, es dividida en busIn y busOut las cuales
//	se entregan al cliente. busOut es igual a EppDB en todo momento.
// -EppDB es configurado como HiZ cuando actua como entreda(EppWr esta 
//	inactivo (HIGH)).
// -Si no es entrada, EppDB puede ser enviar el valor de regEppAddr(cuando 
// EppAstb esta activa (low)) o el proveniente desde la aplicacion busIn 
//	(cuadno EppAstb esta inactiva).
//
//////////////////////////////////////////////////////////////////////////////////
module EppCtrl(EppAstb,EppDstb,EppWr,DB,EppWait,stbData,stbAddr, ctrlWr, busIn, busOut,outEppAddr);

//INPUTS
input EppAstb; 			// EPP addres storbe. activo en low
input EppDstb;				// EPP data storbe. activo en low
input EppWr;				// EPP Write/read control. low = write.
input [7:0] busIn;		//	Data proveniente desde la aplicacion.

//OUTPUTS
output EppWait;			//EPP wait signal.
output [7:0] outEppAddr;//Addres para la aplicación. 
output stbData;			//data storbe para la aplicación
output stbAddr;			//addres storbe para la aplicacíon
output ctrlWr;				//control write para la aplicación
output [7:0]busOut;		//dato para la aplicación

//INPUT-OUTPUT
inout [7:0]DB;				//EPP databus


//auxiliares
reg [7:0]AddrReg= 0;		//Registro auxiliar para la dirección hacia la aplicación. Mantiene el ultimo valor de direccion y se actualiza solo cuando hay una escritura de addres.
wire [7:0]busEpp;			//Auxiliar para los datos de salida desde la aplicación. Puede almacenar o el ultimo addres o el dato proveniente desde la aplicación.

//Estas señales pasan directo hacia la memoria
assign stbData=EppDstb;
assign stbAddr=EppAstb;
assign ctrlWr=	EppWr;
assign outEppAddr=AddrReg; //envia constantemente la ultima dirección actualizada
assign busOut= DB;

assign EppWait= ((!EppDstb)||(!EppAstb))? 1'b1:1'b0; 	//wait se pone en 1 de forma inmediata cuando hay comunicación en curso
assign busEpp= (EppAstb==0)?AddrReg:busIn;				//El bus interno puede mantener la ultima direccion ingresada, o el dato proveniente desde la aplicación
assign DB = (EppWr==1)? busEpp: 8'bzzzz_zzzz;			//El bus de datos EPP posee un tercer estado cuando esta leyendo



always@(negedge EppAstb)
	begin
			if(EppWr==0)		// ciclo de escritura
				AddrReg<=DB; 	// addres es actualizada
	end
endmodule
