`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:13:01 07/27/2015 
// Design Name: 
// Module Name:    display 
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
module display(clk,disp0,disp1,disp2,disp3,an,seg);
// Inputs
input clk;											// Clock input.
input [6:0] disp0, disp1, disp2, disp3;	// Displays 0,1,2,3.
// Outputs
output reg [3:0] an;								// Selector del display 7 segmentos.
output reg [6:0] seg;							// Segmentos del display 7 segmentos.

// Variables auxiliares
reg [1:0] cont_ss = 0;
initial 
begin
	seg=0;
	an=0;
end

always @(posedge clk) begin
	cont_ss = cont_ss + 1;
	case(cont_ss)
		2'b00: begin an = 4'b1110; seg = disp0; end
		2'b01: begin an = 4'b1101; seg = disp1; end
		2'b10: begin an = 4'b1011; seg = disp2; end
		2'b11: begin an = 4'b0111; seg = disp3; end
	endcase
end

endmodule
