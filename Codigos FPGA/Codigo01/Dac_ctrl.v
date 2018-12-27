`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// AUTOR: WAC 
// Descripcion: Este bloque implementa un bloque spi que se comunica con el 
// 				dac7554. Esta hecho para trabajar a 12MHz, en caso de quere cambiarlo
//					se debe revisar el datasheet y cambiar los valores de control de cont y
//					cont2
//
//////////////////////////////////////////////////////////////////////////////////
module Dac_ctrl(clk_in,ctrl,dato,sync,sdi,sclk);

//inputs
input clk_in;  		//clock de entrada Maximo clk 50MHz
input ctrl;				//señal de control que inicia la comunicacion
input [15:0] dato;  	// dato a enviar de 16 bits

//outputs
output reg sync;		// Señal de CS para el DAC
output reg sdi;		// Señal de slave data input para el DAC
output sclk;			// Señal de clock para el DAC

//auxiliares
reg [7:0] count_clk;	// sirve para controlar la señal de clock de salida
reg [7:0] count_data;// sirve para controlar la salida de datos

initial
begin
	count_clk=0;
	count_data=0;
	sync=1;
	sdi=0;
end


//-----------------------------
// controla la comunicacion. cada pulso del sclk mide 4 pulsos de clk.
//	por ende son 4*16=64 se le agregan dos pulsos para setear el cs por ende son
// 66 ciclos.
//-----------------------------
always@(posedge clk_in)
 begin
	if ((ctrl==0)&&(count_clk<=66))
		begin
		count_clk=count_clk+1;
		sync=0;
		if(count_clk>=66) 
			begin
				sync=1;
			end
		end
	if(count_clk>=66)count_clk=68;	
	if(ctrl==1)
		begin
			count_clk=0; 
			sync=1;
		end
 end

assign sclk=count_clk[1];

always@(posedge sclk)
begin
	case(count_data)
		0: begin sdi=dato[15];end
		1: begin sdi=dato[14];end
		2: begin sdi=dato[13];end
		3: begin sdi=dato[12];end
		4: begin sdi=dato[11];end
		5: begin sdi=dato[10];end
		6: begin sdi=dato[9];end
		7: begin sdi=dato[8];end
		8: begin sdi=dato[7];end
		9: begin sdi=dato[6];end
		10: begin sdi=dato[5];end
		11: begin sdi=dato[4];end
		12: begin sdi=dato[3];end
		13: begin sdi=dato[2];end
		14: begin sdi=dato[1];end
		15: begin sdi=dato[0];end
		16: begin sdi=0;end
		default: sdi=0;
	endcase
count_data=count_data+1;
if((count_data>=16)||(ctrl==1))
	count_data=0;
end




endmodule
