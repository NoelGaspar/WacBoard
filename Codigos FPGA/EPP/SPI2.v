`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:40:57 10/20/2015 
// Design Name: 
// Module Name:    SPI2 
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
module SPI2(clk,SCK,SIMO,CS,data_out,SOMI,data_in,tx_send);

//inputs
input clk;
input SCK;	//clock spi
input SIMO;	//Slave input
input CS;	// Chip select
input [7:0]data_out;

//outputs
output SOMI;
output reg[7:0]data_in;
output tx_send;


//registros auxliares
reg [7:0] i;
reg [7:0] data;

//sobre muestreo del clock de entrada
reg [2:0] SCKr;
always@(posedge clk) 
	SCKr<={SCKr[1:0],SCK};

wire SCKr_flanco_s=(SCKr[2:1]=='b01);
wire SCKr_flanco_b=(SCKr[2:1]=='b10);

reg [2:0] CSr;
always@(posedge clk) 
	CSr<={CSr[1:0],CS};

wire CS_flanco=(CSr[2:1]=='b10);
wire tx_send=(CSr[2:1]=='b01); //avisa a los otros modulos cuando termina la comunicación

//valores iniciales
initial
begin 
	i=0;
	data_in=0;
	data=0;
	SCKr=0;
end

assign SOMI=data[7]; 


always@(posedge clk)
begin	
	if(CS_flanco==1)
		begin 
			i<=0;
		end	
		
	if(SCKr_flanco_b)	
		begin
			data_in<={data_in[6:0],SIMO};
		end
	
	if(SCKr_flanco_s)
		begin
			if(i==0)	
				begin
				data<=data_out;
				i<=i+1;
				end
			if(i!=0)	
				begin
				data<={data[6:0],1'b0};
				i<=i+1;
				end	 
		end
end
  
endmodule

