`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:32:46 10/14/2015 
// Design Name: 
// Module Name:    SPI_COM 
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
module SPI_COM(clk,SCK,SIMO,SOMI,CS,data_in,data_out);

//inputs
input clk;
input SCK;	//clock spi
input SIMO;	//Slave input
input CS;	// Chip select
input [7:0]data_out;

//outputs
output SOMI;
output reg[7:0]data_in;


//registros auxliares
reg [7:0] i;
reg [7:0] data;

//sobre muestreo del clock de entrada
reg [2:0] SCKr;
always@(posedge clk) 
	SCKr<={SCKr[1:0],SCKr};

wire SCKr_flanco_s=(SCKr[2:1]='b01);
wire SCKr_flanco_b=(SCKr[2:1]='b10);

reg [2:0] SCKr
always@(posedge clk) 
	SCKr<={SCKr[1:0],SCKr};

wire SCKr_flanco_s=(SCKr[2:1]='b01);
wire SCKr_flanco_b=(SCKr[2:1]='b10);


//valores iniciales
initial
begin 
	i=0;
	data_in=0;
	data=0;
end

assign SOMI=data[7]; 


always@(posedge clk)
begin	
	if(CS==1)
		i<=0;
	if(SCKr_flanco_s)	
	begin
		data_in<={data_in[6:0],SIMO};
		i<=i+1;
	end
end
 
endmodule
