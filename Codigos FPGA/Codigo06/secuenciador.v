`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:02:25 07/07/2016 
// Design Name: 
// Module Name:    secuenciador 
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
module secuenciador(clk,seq_en, mode, dato,Stb,mux_cont_en ,wr,theBeanConfig,flag_adc);

//--------------------------
//INPUTS
//--------------------------
input clk;
input seq_en; 
input [1:0] mode;
input [7:0]	dato;
input wr;
input Stb;
input [7:0] mux_cont_en;

output [15:0] theBeanConfig;
output flag_adc;

reg [15:0] mem1 [0:63];
reg [15:0] mem2 [0:63];
reg [15:0] mem3 [0:63];

 
initial 
begin
$readmemb("memory_mod6.list",mem1);
$readmemb("memory_mod2.list",mem2);
$readmemb("memory_mod2_2.list",mem3); 
end  
  
reg [5:0] 	counter_r=6'b111111;
reg [6:0]	counter_w=7'b0000000;
reg [15:0] 	config_out=0;
reg [15:0]	dato_temp=16'h1404;
reg flag =0;
reg notyet=0;
  
always@(posedge Stb)
begin 
	if(wr==1)
		begin
			if(counter_w<7'b1111111)
				begin
					counter_w<=counter_w+1;
					if(counter_w[0]==0)
						begin
							dato_temp<={dato,dato_temp[7:0]};
							mem3[counter_w[6:1]]<=dato_temp;
						end
					else
						begin
							dato_temp<={dato_temp[15:8],dato};
						end	
				end
			else
				begin	
					counter_w<=7'b1111111;
				end
		end
	else
		counter_w<=0;
end



 
always@(posedge clk)
begin 
if(wr==0)
begin
	if(seq_en==1)
		begin
			counter_r<=0;
			config_out<=mem1[0];
		end
	else if(seq_en==0&&counter_r==6'b111111)
		begin
			counter_r <= 6'b111111;
			config_out<=mem1[0];
		end
	else if((seq_en==0)&&(counter_r<6'b111111))
		begin
			if(counter_r==6'b111000) 	//counter_r=56
			//if(counter_r==6'b111100) //counter_r=60
				begin
					flag<=1;
				end
			else
				begin 
					flag<=0;
				end
			counter_r<=counter_r+1;
			if (counter_r < mux_cont_en+10'h01 )
				begin
					notyet<=0;
				end
			else
				begin
					notyet<=1;
				end
			if(mode==2'b11)
					begin
						config_out<={mem3[counter_r][15]&notyet,mem3[counter_r][14:0]};
					end
				else if(mode==2'b10)
					begin
						config_out<={mem2[counter_r][15]&notyet,mem2[counter_r][14:0]};
					end
				else if(mode==2'b01)
					begin
						config_out<={mem1[counter_r][15]&notyet,mem1[counter_r][14:0]};
					end
				else
					begin
						config_out<=mem1[0]; 
					end
		end
end	
end

assign theBeanConfig=config_out;
assign flag_adc=flag;

endmodule
