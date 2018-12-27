`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Autor: Wladimir Araya
//	Nota: Modulo para proyecto de tesis de pregrado.
// 
//	Descripci�n: 
//	El m�dulo EppCtrl implementa un controldador asincrono basado en la
// documentaci�n entregada por Digilent. Especificamente el proyecto
// BramCfg disponible en www.digilent.com
//	Premite implementar una comunicaci�n entre un host y una aplicaci�n 
//	corriendo en la FPGA.
//	
//	Detalle:	
// -El control es totalmente asincrono. La comunicaci�n se implementa
//	por medio de las se�ales EppAstb and EppDstb.
//	-El control  realiza un split entre los datos y las direcciones
// las que se guardan en un registro(regEppAddr).
// -Las direcciones son escritas o leidas cuando EppAstb esta activo (low).
// regEppAdr es escrito en los flancos de bajada de EppAstb, cuando EppWr
// esta activo(LOW).
// -Las se�ales EppDstb y EppWr son entregadas directamente a la aplicaci�n.
// -En este control, la se�al EppWait is activada (high) de forma asincrona
// cuando cualquiera EppAstb o EppDstb esta activa(low).
// -La se�al bidireccional EppDB, es dividida en busIn y busOut las cuales
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
output [7:0] outEppAddr;//Addres para la aplicaci�n. 
output stbData;			//data storbe para la aplicaci�n
output stbAddr;			//addres storbe para la aplicac�on
output ctrlWr;				//control write para la aplicaci�n
output [7:0]busOut;		//dato para la aplicaci�n

//INPUT-OUTPUT
inout [7:0]DB;				//EPP databus


//auxiliares
reg [7:0]AddrReg= 0;		//Registro auxiliar para la direcci�n hacia la aplicaci�n. Mantiene el ultimo valor de direccion y se actualiza solo cuando hay una escritura de addres.
wire [7:0]busEpp;			//Auxiliar para los datos de salida desde la aplicaci�n. Puede almacenar o el ultimo addres o el dato proveniente desde la aplicaci�n.

//Estas se�ales pasan directo hacia la memoria
assign stbData=EppDstb;
assign stbAddr=EppAstb;
assign ctrlWr=	EppWr;
assign outEppAddr=AddrReg; //envia constantemente la ultima direcci�n actualizada
assign busOut= DB;

assign EppWait= ((!EppDstb)||(!EppAstb))? 1'b1:1'b0; 	//wait se pone en 1 de forma inmediata cuando hay comunicaci�n en curso
assign busEpp= (EppAstb==0)?AddrReg:busIn;				//El bus interno puede mantener la ultima direccion ingresada, o el dato proveniente desde la aplicaci�n
assign DB = (EppWr==1)? busEpp: 8'bzzzz_zzzz;			//El bus de datos EPP posee un tercer estado cuando esta leyendo



always@(negedge EppAstb)
	begin
			if(EppWr==0)		// ciclo de escritura
				AddrReg<=DB; 	// addres es actualizada
	end
endmodule
