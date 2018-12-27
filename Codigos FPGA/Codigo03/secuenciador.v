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
module secuenciador(clk,seq_en, mode, dato, wr,theBeanConfig);

//--------------------------
//INPUTS
//--------------------------
input clk;
input seq_en; 
input [1:0] mode;
input [7:0]	dato;
input wr;
output [15:0] theBeanConfig;

reg [15:0] mem1 [0:31];
reg [15:0] mem2 [0:31];
reg [15:0] mem3 [0:31];

initial 
begin
$readmemb("memory_mod6.list",mem1);
$readmemb("memory_mod6_2.list",mem2);
$readmemb("memory_mod7.list",mem3);
end 
  
reg [4:0] 	counter_r=5'b11111;
reg [4:0]	counter_w=5'b11111;
reg [15:0] 	config_out=0;

always@(posedge clk)
begin 
	if(wr==1)
		begin
			if(seq_en==1)
				begin
					counter_w<=0;
				end
			else if(seq_en==0&&counter_w==5'b11111)
				begin
					counter_w<=5'b11111;
				end
			else if(seq_en==0&&counter_w<5'b11111)
				begin
					counter_w<=counter_w+1;
					mem3[counter_w]<=dato;
				end
		end
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
else if(seq_en==0&&counter_r==5'b11111)
	begin
		counter_r <= 5'b11111;
		config_out<=mem1[0];
	end
else if((seq_en==0)&&(counter_r<5'b11111))
	begin
		counter_r<=counter_r+1;
			if(mode==2'b11)
				begin
					config_out<=mem3[counter_r];
				end
			else if(mode==2'b10)
				begin
					config_out<=mem2[counter_r];
				end
			else if(mode==2'b01)
				begin
					config_out<=mem1[counter_r];
				end
			else
				begin
					config_out<=mem1[0];
				end
	end
end	
end
assign theBeanConfig=config_out;

endmodule
