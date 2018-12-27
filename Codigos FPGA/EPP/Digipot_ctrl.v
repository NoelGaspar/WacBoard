`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:39:17 07/15/2015 
// Design Name: 
// Module Name:    Digipot_ctrl 
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
module Digipot_ctrl(clk,mux,ctrl,dato,cs1,cs2,cs3,sdi,clk_out);
//inputs
input clk;				//clock global 50MHz
input [1:0] mux;		//Elige cual de los tres digipot escribir
input ctrl;				//Señal de inicio de la comunicacion. Debe estar en 1 en idle, cuando genera un flanco negativo (1 a 0) inicia la comunicación.
input [7:0] dato;		//Dato a escribir

//outputs
output reg cs1;		//cs para el digipot 1
output reg cs2;		//cs para el digipot 2
output reg cs3;		//cs para el digipot 3
output reg sdi;		//slave data input, comun para los tres
output clk_out;	   //clock comun para los tres, es de 50Mhz/4= 12.5MHz

//auxiliares
reg [7:0] count;	
reg [7:0] count2;
reg cs;


reg [2:0] 	ctrlReg=0;
always@(posedge clk) 
	ctrlReg<={ctrlReg[1:0],ctrl};
wire ctrlFE=(ctrlReg[2:1]=='b10); //falling edge detector


initial 
begin
	count=8'hf0;
	count2=8'h0;
	cs=1;
	cs1=1;
	cs2=1;
	cs3=1;
	sdi=0; 
end

always@(clk)
begin
	case(mux)
		0: begin cs1=cs;cs2=1;cs3=1;end
		1: begin cs1=1;cs2=cs;cs3=1;end
		2:	begin cs1=1;cs2=1;cs3=cs;end
		default begin cs1=1;cs2=1;cs3=1;end
	endcase	
end

//-----------------------------
// controla la comunicacion. cada pulso del clk_out mide 4 pulsos de clk.
//	por ende son 4*8=32 se le agregan dos pulsos para setear el cs por ende son
// 34 ciclos.
//-----------------------------
always@(posedge clk)
 begin
	if (count<34)
		begin
		count=count+1;
		cs=0;
		if(count>=34) cs=1;
		end
	if(count>=34)count=36;		
	if(ctrlFE==1)
		begin
			count=0; 
			cs=1;
		end
 end

assign clk_out=count[1];

always@(posedge clk_out)
begin
	case(count2)
		0: begin sdi=dato[7];end
		1: begin sdi=dato[6];end
		2: begin sdi=dato[5];end
		3: begin sdi=dato[4];end
		4: begin sdi=dato[3];end
		5: begin sdi=dato[2];end
		6: begin sdi=dato[1];end
		7: begin sdi=dato[0];end
		8: begin sdi=0;end
		default: sdi=0;
	endcase
	count2=count2+1;
if((count2>=8)||(ctrlFE))
	count2=0;
end


endmodule
