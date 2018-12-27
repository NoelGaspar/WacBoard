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
module SPI_COM(SCK,SIMO,SOMI,CS,data_in,data_out);

//inputs
input SCK;	//clock spi
input SIMO;	//Slave input
input CS;	// Chip select
input [7:0]data_out;


//outputs
output SOMI;
output reg[7:0]data_in;


//auxiliares registros
reg [7:0] i;
reg [7:0] data;

initial
begin 
	i=0;
	data_in=0;
	data=0;
end

assign SOMI=data[7]; 


always@(SCK)
begin	
	if(CS==0)
	begin
		if(i==0)
			data=data_out;
		if(i==8)
			i=0;
		if(SCK==0)
			begin
			data_in<={data_in[6:0],SIMO}; 
			i=i+1;		
			end
		else if(SCK==1)
			if(i!=0)
			data={data[6:0],1'b0};
	end		
end


 
endmodule
