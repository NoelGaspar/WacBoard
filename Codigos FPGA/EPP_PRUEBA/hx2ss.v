`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:11:44 07/27/2015 
// Design Name: 
// Module Name:    hx2ss 
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
module hx2ss(btn,counter,seg);
// Inputs
input btn;

// Outputs
output reg[1:0] counter;
output reg [6:0] seg;


initial counter=0;
always @(posedge btn)
begin	
	counter=counter+1;
	case(counter)
		0: seg = 7'b1000000;
		1: seg = 7'b1111001;
		2: seg = 7'b0100100;
		3: seg = 7'b0110000;
	/*4: seg = 7'b0011001;
	4'h5: seg = 7'b0010010;
	4'h6: seg = 7'b0000010;
	4'h7: seg = 7'b1111000;
	4'h8: seg = 7'b0000000;
	4'h9: seg = 7'b0011000;
	4'hA: seg = 7'b0001000;
	4'hB: seg = 7'b0000011;
	4'hC: seg = 7'b1000110;
	4'hD: seg = 7'b0100001;
	4'hE: seg = 7'b0000110;
	4'hF: seg = 7'b0001110;*/
	endcase
end
endmodule
