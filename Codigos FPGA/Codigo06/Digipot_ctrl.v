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
input 		clk;		//clock global 50MHz
input [1:0] mux;		//Elige cual de los tres digipot escribir
input 		ctrl;		//Señal de inicio de la comunicacion. Debe estar en 1 en idle, cuando genera un flanco negativo (1 a 0) inicia la comunicación.
input [7:0] dato;		//Dato a escribir

//outputs
output cs1;		//cs para el digipot 1
output cs2;		//cs para el digipot 2
output cs3;		//cs para el digipot 3
output reg 	sdi;		//slave data input, comun para los tres
output reg	clk_out;	//clock comun para los tres, es de 50Mhz/4= 12.5MHz

//auxiliares
reg [7:0] count;	
reg [7:0] count2;
reg cs;

initial 
begin
	count	=	8'hff;
	count2=	0;
	cs		=	1;
	sdi	=	0; 
	clk_out= 1;
end 


assign cs1=(mux==2'b00)?cs:1'b1;
assign cs2=(mux==2'b01)?cs:1'b1;
assign cs3=(mux==2'b10)?cs:1'b1;

//-----------------------------
// controla la comunicacion. cada pulso del clk_out mide 4 pulsos de clk.
//	por ende son 4*8=32 se le agregan dos pulsos para setear el cs por ende son
// 34 ciclos.
//-----------------------------
always@(posedge clk)
 begin
	if(ctrl==1)
		begin
			count<=0;
			cs<=1;
		end
	else if((ctrl==0)&&(count<38))
		begin
			count<=count+1;
			if(count>=37) 
				cs<=1;
			else if(count<=3)
				cs<=1;
			else
				cs<=0;
		end
	else if((ctrl==0)&&(count>=38))
		begin
		count<=40;		
		end
		
count2=(count+1)>>2;	
 end
 
 
always@(posedge clk)
	begin
		if(count>=0&&count<=38)
		clk_out=count[1];
	end


always@(negedge clk_out)
begin
	case(count2)
		0: begin sdi<=0;end
		1: begin sdi<=dato[7];end
		2: begin sdi<=dato[6];end
		3: begin sdi<=dato[5];end
		4: begin sdi<=dato[4];end
		5: begin sdi<=dato[3];end
		6: begin sdi<=dato[2];end
		7: begin sdi<=dato[1];end
		8: begin sdi<=dato[0];end
		9: begin sdi<=0;end
		default: sdi<=0;
	endcase

end


endmodule
