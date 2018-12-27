`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Pontificia Universidad Catolica de Chile
// Engineer: Angel Abusleme
// 
// Create Date:    09:53:57 09/17/2013 
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
module Top(
    input 	clk,
	 output 	usbWait,
    inout 	[7:0] usbData,
    input 	usbAddrStrobe_n,
    input 	usbDataStrobe_n,
    input 	usbWE_n
    );

//////////////////////////////////////////////////////////////////////////////////
// CONSTANT DECLARATIONS
//////////////////////////////////////////////////////////////////////////////////

	localparam USB_DATA_WIDTH=8, USB_ADDR_WIDTH=8;

//////////////////////////////////////////////////////////////////////////////////
// WIRES DECLARATIONS
//////////////////////////////////////////////////////////////////////////////////

	wire usbIF_data_write;								// value I write into USB
	wire [USB_ADDR_WIDTH-1:0] usbIF_address;		// memory to access register for USB data
	wire	[7:0]		FW0,									// start of firmware name register
						FW1,
						FW2,
						FW3,
						FW4,
						FW5,
						FW6,
						FW7,
						FW8,
						FW9,
						FW10,
						FW11,
						FW12,
						FW13,
						FW14,
						FW15;									// end of firmware name
	
//////////////////////////////////////////////////////////////////////////////////
// REGISTER DECLARATIONS
//////////////////////////////////////////////////////////////////////////////////

	reg   [USB_DATA_WIDTH-1:0] usbIF_data_in;		// value read from USB
	reg 	[7:0] Dummy_Reg;								// dummy register to read and write

//////////////////////////////////////////////////////////////////////////////////
// MODULE INSTANTIATION
//////////////////////////////////////////////////////////////////////////////////

// Las señales marcadas son las únicas que se manejan en el código (señales internas), las demás señales
// son problema del modulo usb_if y el computador

	// The instantiation of the usb interface module
	usb_if #(.DATA_WIDTH(USB_DATA_WIDTH), .ADDR_WIDTH(USB_ADDR_WIDTH))
							usb_interface
						  ( .usbWait(usbWait),
							 .usbIF_data_write(usbIF_data_write),  // SEÑAL INTERNA
							 .usbIF_address(usbIF_address), 			// SEÑAL INTERNA
							 .usbIF_data_in(usbIF_data_in), 			// SEÑAL INTERNA
							 .usbData(usbData),
							 .usbAddrStrobe_n(usbAddrStrobe_n), 
							 .usbDataStrobe_n(usbDataStrobe_n), 
							 .usbWE_n(usbWE_n),
							 .clk(clk)
						  );

//////////////////////////////////////////////////////////////////////
// USB_IF I/O definitions
//////////////////////////////////////////////////////////////////////
	// Things that I can write TO the FPGA
	always @(posedge clk) begin
	  if(usbIF_data_write) begin
		 case (usbIF_address)
			0: 	Dummy_Reg 							<= usbData;		// Aquí poner direcciones y nombres de registros de 8 bits que pueden ser escritos por el PC
			default: Dummy_Reg 						<= usbData;
		 endcase
	  end
	end

	// Things that I can read FROM the FPGA
	always @* begin
	  case (usbIF_address)  
		 0: 	usbIF_data_in = Dummy_Reg;
		 240:	usbIF_data_in = FW0;					// start firmware name string
		 241:	usbIF_data_in = FW1;
		 242:	usbIF_data_in = FW2;
		 243:	usbIF_data_in = FW3;
		 244:	usbIF_data_in = FW4;
		 245:	usbIF_data_in = FW5;
		 246:	usbIF_data_in = FW6;
		 247:	usbIF_data_in = FW7;
		 248:	usbIF_data_in = FW8;
		 249:	usbIF_data_in = FW9;
		 250:	usbIF_data_in = FW10;
		 251:	usbIF_data_in = FW11;
		 252:	usbIF_data_in = FW12;
		 253:	usbIF_data_in = FW13;
		 254:	usbIF_data_in = FW14;
		 255:	usbIF_data_in = FW15;				// end firmware name string
		 default: usbIF_data_in = Dummy_Reg;
	  endcase
	end

//////////////////////////////////////////////////////////////////////
// FirmWare name
//////////////////////////////////////////////////////////////////////

assign FW0 = 	"W";
assign FW1 = 	"O";
assign FW2 = 	"K";
assign FW3 = 	"A";
assign FW4 = 	"R";
assign FW5 = 	"_";
assign FW6 = 	"T";
assign FW7 = 	"E";
assign FW8 = 	"S";
assign FW9 = 	"T";
assign FW10 = 	"_";
assign FW11 = 	"1";
assign FW12 = 	".";
assign FW13 = 	"0";
assign FW14 = 	"0";
assign FW15 = 	"0";

endmodule
