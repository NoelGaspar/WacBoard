`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:50:36 11/24/2015 
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
module adcCtrl(clk, adcEn,adcDataOut,sdo,cs,sclk);

input clk;
input adcEn;
input sdo;

output reg cs=1;
output reg sclk=0;
output reg [7:0] adcDataOut=8'h00;

always@(posedge clk)
begin
	adcDataOut=adcDataOut+1;
end

endmodule
