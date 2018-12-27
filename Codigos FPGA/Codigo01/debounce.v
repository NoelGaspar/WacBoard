`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:14:48 07/27/2015 
// Design Name: 
// Module Name:    debounce 
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
module debounce(clk,btn, btn_out);
input clk;
input btn;
output btn_out;

reg aux1,aux2,aux3,aux4,aux5,aux6;

always@(posedge clk)
begin
aux1<=btn;
aux2<= aux1;
aux3<= aux2;
aux4<= aux3;
aux5<= aux4;
aux6<= aux5;
end

assign btn_out=aux1&aux2&aux3&aux4&btn;
endmodule
