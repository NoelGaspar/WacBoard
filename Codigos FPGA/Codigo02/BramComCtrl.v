`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:42:40 02/18/2016 
// Design Name: 
// Module Name:    BramComCtrl 
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
module BramComCtrl(clk,stb_data,ctrl_wr,epp_in,	epp_out,epp_addr_in, bram_addr,bram_in, bram_out,we_bram,clk_bram);
//----------------------------------------
// Inputs
//----------------------------------------
input 		clk;
input 		stb_data;	//señal desde epp Ctrl. Epp data strobe
input 		ctrl_wr;		//señal desde epp Ctrl. Epp address strobe
input [7:0] epp_in;		//señal desde epp Ctrl. Bus de dato de entrada, salida de EppCtrl.
input [7:0] epp_addr_in;//señal desde epp Ctrl. provenientes desde EppAddress register.
input	[7:0]	bram_in;		//señal desde BRAM. dato de salida de BRAM

//----------------------------------------
// OUTPUTS
//----------------------------------------
output [7:0] 	epp_out;		//señal hacia epp Ctrl. Bus de dato de salida, entrada de EppCtrl.
output [11:0] 	bram_addr;	//senal que indica el addres para BRAM.
output [7:0] 	bram_out;	//señal para escribir dato en BRAM.
output 			we_bram;		//BRAM write enable
output 			clk_bram;	//clock para BRAM

localparam 	DATA_MODE= 2'b00,
				ADDR_L	= 2'b01,
				ADDR_H	= 2'b10;
localparam 	CONST 	= 4'b0000;

//sobre muestreo de la señal Addres strobe para generar flancos de bajada
reg [1:0] stb_d_reg=3'b11;
always@(posedge clk) 
	begin
		stb_d_reg	<=	{stb_d_reg[0],stb_data};
	end
wire stb_d_re	=(stb_d_reg == 2'b01);  	// strobe data rising edge

//variables auxiliares
reg [11:0]	addr_reg		=	0;
reg [11:0]	addr_next	=	0;
wire 			carry	;

assign epp_out	= 	(epp_addr_in[7:6] == DATA_MODE)	?(bram_in):
						(epp_addr_in[7:6] == ADDR_L)		?(addr_reg[7:0]):
						(epp_addr_in[7:6] == ADDR_H)		?({CONST,addr_reg[11:8]}):
						(8'b0);

always@(posedge clk)
	begin
	addr_reg<=addr_next;
	end


//always@(posedge stb_data)
always@(posedge stb_data)	
	begin		
//	 addr_next=addr_reg;
//		if(stb_d_re)
			begin
				if(epp_addr_in[7:6] == DATA_MODE)
					begin
						addr_next[7:0] = addr_next[7:0] + 1;
						if(carry)
							addr_next[11:8] = addr_next[11:8] + 1;	
					end			
				else if((ctrl_wr==0)&&(epp_addr_in[7:6] == ADDR_L))
							begin
								addr_next[7:0] = epp_in;
							end
				else if((ctrl_wr==0)&&(epp_addr_in[7:6] == ADDR_H))
							begin
								addr_next[11:8]= epp_in[3:0];
							end	
			end		

	end


assign carry	=	(addr_next[7:0] == 8'hff)? 1'b1:1'b0;	
assign clk_bram	= !stb_data;
assign we_bram =((ctrl_wr == 0) && (epp_addr_in[7:6] == DATA_MODE))?1'b1:1'b0;
assign bram_out = epp_in;
assign bram_addr = addr_reg;  


endmodule

