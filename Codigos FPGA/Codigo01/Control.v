`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:52:56 10/26/2015 
// Design Name: 
// Module Name:    Control 
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
module Control(clk, data_in,tx_send, data_out, ctrl_dac,dato_dac,mux_dpot,ctrl_dpot,dato_dpot,seg);

//INPUTS
input clk;
input	[7:0]	data_in;
input	tx_send;

//OUTPUTS
output reg [7:0]data_out;
output reg ctrl_dac;
output reg [15:0]dato_dac;
output reg [1:0] mux_dpot;
output reg ctrl_dpot;
output reg [7:0]dato_dpot;
output reg [6:0] seg;

//auxiliares
reg [7:0] count;
reg estado;

initial
	begin
		count=0;
		ctrl_dac=1;
		ctrl_dpot=1;
		mux_dpot=0;
		dato_dpot='h80;
		dato_dac='he800; // {control,dato}= {1100,1000 0000 0000}
		seg=0;
		data_out='h40;
	end

wire [1:0]mux;
assign mux=mux_dpot;

always @(posedge clk)
begin	
	case(mux)
		0: seg = 7'b1000000;
		1: seg = 7'b1111001;
		2: seg = 7'b0100100;
		3: seg = 7'b0110000;
	endcase
end


always@(posedge tx_send) 
		begin
			if(data_in == 'h72)	begin dato_dac=	'he800;		 	estado=1; data_out='h01;	end
			if(data_in == 'h74)	begin dato_dac=	dato_dac+1; 	estado=1; data_out='h03;	end
			if(data_in == 'h65)	begin dato_dac=	dato_dac-1; 	estado=1; data_out='h04;	end
			if(data_in == 'h66)	begin dato_dpot=	'h80;				estado=0; data_out='h05;	end
			if(data_in == 'h67)	begin dato_dpot=	dato_dpot+1;	estado=0; data_out='h06;	end
			if(data_in == 'h64)	begin dato_dpot=	dato_dpot-1;	estado=0; data_out='h07;	end
			if(data_in == 'h61)	begin mux_dpot= mux_dpot+1; data_out='h08; end
			if(data_in == 'h71)	begin mux_dpot= mux_dpot-1; data_out='h09;end
		end


always@(posedge clk)
	begin
		if(tx_send)
			count<=0;
		else
		begin	
			if(estado&&(count<=68))
			begin
				if(count<68)
					count<=count+1;
				if(count==0) 
					ctrl_dac=0;
				if(count>=68)
					ctrl_dac=1;
			end
			if(!(estado)&&(count<=36))
			begin 
				if(count<36)
					count<=count+1;
				if(count==0)
					ctrl_dpot=0;
				if(count>=36)
					ctrl_dpot=1;
			end
		end
	end




endmodule
