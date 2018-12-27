`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:42:25 05/17/2016 
// Design Name: 
// Module Name:    test_operaciones 
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
module test_operaciones(A, B,C
    );

input[11:0] A;
input[11:0] B;
output[11:0] C;

reg  [7:0] D=8'h08;
reg  [7:0] F=8'h0f;
wire [7:0]aux;
assign aux=D&F;
assign C=(B^12'hfff)+12'h001;

endmodule
