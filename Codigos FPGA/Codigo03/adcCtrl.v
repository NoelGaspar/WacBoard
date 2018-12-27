`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:37:08 12/28/2015 
// Design Name: 
// Module Name:    adcCtrl 
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
module adcCtrl(clk_in, ctrl, sdo, n, data, sync,sclk,ready);//ADVERTENCIA : HAY QUE ARREGLAR EL CONTADOR DEL TIMER PARA QUE FUNCIONES AL DOBLE DE LA FRECUENCIA. HASTA AHORA ESTA HECHO AL LA RAPIDA CAMBIANDO EL FLANCO DE POSEDGE A POSEDGE Y NEGEDGE!!
//-----------------
// INPUTS
//-----------------
input clk_in;  		//clock de entrada Maximo clk 50MHz
input ctrl;				//señal de control que inicia la comunicacion
input sdo;				//señal de dato proveniente desde el ADC
input n;					//indica el modo. 0:single mode. 1:continous mode.
//-----------------
// OUTPUTS
//-----------------
output reg [11:0] data;	// dato proveniente desde el adc
output sync;		  		//Señal de CS para el ADC
output sclk;				//Señal de clock para el ADC
output ready;				//señal para avisarle a la maquina de estados que el dato ya ha sido adquirido

//auxiliares
reg [7:0] 	count_clk;	//sirve para controlar la señal de clock de salida
reg [3:0] 	count_data;	//sirve para controlar la salida de datos
reg [15:0]	dato;			//auxiliar para el dato de salida
reg 			cs;			//auxiliar para sync
reg 			read=0;		//auxiliar para avisar cuando esta lista la comunicación
reg 			rp=0;

initial
begin
	count_clk	=	8'h00;
	count_data	=	0;
	cs		=	1;
	dato	=	0;
	data	=	0;
end

reg [7:0]	nSamples	=	0;	//contador para el numero de datos enviados ; CAMBIAR PARA MAS MUESTRAS
reg 			stop		=	0;	//variable binaria que indica el fin de la adquisicion
parameter 	nMax		=	20;//numero maximo de muestras;CAMBIAR PARA MAS MUESTRAS

parameter 	IDLE_STATE		= 4'b0000,
				SINGLE_MODE		= 4'b0010,
				CONTINUOUS_MODE= 4'b0011;

 
reg [3:0]	stNext	= IDLE_STATE;
reg [3:0]	stCur		= IDLE_STATE;


//-----------------------------
//	controla la comunicacion. cada pulso del sclk mide 4 pulsos de clk. 
//	(de este modo la frecuencia de sclk es 12.5Mhz)
//	por ende son 4*16=64 se le agregan dos pulsos para setear el cs por ende son
//	66 ciclos.
//-----------------------------
always@(posedge clk_in)  
 begin
	if(stCur==IDLE_STATE)
		begin
			count_clk<=0; 
			cs<=1;
			read<=0;
			stop<=0;
			nSamples<=0;
		end
	else if(stCur==SINGLE_MODE) //if(n==0 y ctrl==0)
		begin
			stop<=0;
			nSamples<=0;
			if(rp==0)
				begin
					count_clk<=count_clk+1;
					cs<=0;
				end	
			else
				begin
					count_clk<=0;
					cs<=1;
				end
			if(count_clk>63)
				rp<=1;
			else
				rp<=0;
			if(count_clk==64)
				read<=1;
			else
				read<=0;
		end 
	else//if(CONTINUOUS_MODE)
		begin
			if(nSamples==20)
				stop<=1;
			else
				stop<=0;
			
			if(rp==0)
				begin
					count_clk<=count_clk+1;
				end
			else
				begin
					count_clk<=0;
				end
				
			if(count_clk<=56)
				begin
					rp<=0;
					cs<=0;	
					read<=0;
				end
			else if(count_clk>56 && count_clk<64)
				begin
					rp<=0;
					cs<=1;
					read<=0;
					
				end
			else if(count_clk==64)
				begin
					rp<=1;
					cs<=1;
					nSamples	<=	nSamples+1;
					read<=1;
				end
			else
				begin
					rp<=1;
					cs<=1;
					read<=0;
				end
		end
 end
 
 
//ACTUALIZAR LA MAQUINA DE ESTADOS
always@(posedge clk_in)
stCur<=stNext;
 
//CALCULAR EL SIGUIENTE ESTADO
always@(*)
begin
	stNext=stCur;
	case(stCur)
	IDLE_STATE:
			begin
				if(ctrl==1 && n==0) stNext=SINGLE_MODE;
				else if(ctrl==1 && n==1) stNext=CONTINUOUS_MODE;
				else stNext=IDLE_STATE;
			end
	SINGLE_MODE: 	
			begin
				if(ready) stNext=IDLE_STATE;
				else stNext=SINGLE_MODE;
			end	
	CONTINUOUS_MODE:
			begin
				if(stop) stNext=IDLE_STATE;
				else stNext=CONTINUOUS_MODE;
			end	
	default: stNext=IDLE_STATE;
	endcase
end

 
 
assign sclk=count_clk[1];
assign ready=read;

always@(negedge sclk)
begin
	case(count_data)
	   1: begin  dato[15]<=0;end
		2: begin  dato[14]<=0;end
		3: begin  dato[13]<=0;end
		4: begin  dato[12]<=sdo;end
		5: begin  dato[11]<=sdo;end
		6: begin  dato[10]<=sdo;end
		7: begin  dato[9]<=sdo;end
		8: begin  dato[8]<=sdo;end
		9: begin  dato[7]<=sdo;end
		10: begin dato[6]<=sdo;end
		11: begin dato[5]<=sdo;end
		12: begin dato[4]<=sdo;end
		13: begin dato[3]<=sdo;end
		14: begin dato[2]<=sdo;end
		15: begin dato[1]<=sdo;end
		0:  begin dato[0]<=0;end
		default: dato[15]<=0;
	endcase
end



always@(posedge sclk)
begin
	if(stCur==SINGLE_MODE) count_data<=count_data+1;
	else if(stCur==CONTINUOUS_MODE) count_data<=count_data+1;
	else count_data<=0;
end
 
always@(posedge read)
	begin
		data<=dato[12:1];
	end
	
assign sync=cs;	
endmodule
