`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////
module wac(clk,ctrlWac,confWac,adcWacEn,confWacEn, adcOut, syncDac,sdiDac,sclkDac,csDpot1,csDpot2,csDpot3,sdiDpot,clkDpot,muxDacEn, muxDacSel, muxRef1,muxRef2,muxRef3,theBeanConf,sdoAdc1,clkAdc1,csAdc1,sdoAdc2,clkAdc2,csAdc2);


//---------------------
// INPUTS
//---------------------
input clk;
//wacCtrl
input [7:0]ctrlWac;
input [15:0]confWac;
input adcWacEn;
input confWacEn;
//ADC
input sdoAdc1;
input sdoAdc2;


//---------------------
// OUTPUTS
//---------------------
//wacCtrl
output [7:0]adcOut;
//DAC
output syncDac;
output sdiDac;
output sclkDac;
//DigiPot
output csDpot1,csDpot2,csDpot3;
output sdiDpot;
output clkDpot;
//MUX
output reg muxDacEn,muxDacSel;
output reg muxRef1,muxRef2,muxRef3;
//the Bean Config
output reg [15:0]theBeanConf=0;
//ADC
output clkAdc1,clkAdc2;
output csAdc1,csAdc2;


initial
begin
muxDacEn=0;
muxDacSel=0;
muxRef1=0;
muxRef2=0;
muxRef3=0;
end

wire [15:0] datoDac;
wire ctrlDac;
wire [7:0] datoDpot;
wire [1:0] muxDpot;

wire ctrlDpot;

wire [7:0]dataOutAdc1,dataOutAdc2;
wire enAdc1,enAdc2;


//MODO DAC
assign datoDac=(ctrlWac[3:0]==4'b0001)? confWac:16'b0;  	//actualizamos el dato con el nuevo valor
assign ctrlDac=(ctrlWac[3:0]==4'b0001)? confWacEn:1'b1;	//enviamos el pulso de activacion para el dac
//MODO DPOT
assign muxDpot= (ctrlWac[3:0]==4'b0011)? confWac[9:8]:2'b11;	//actualizamos el multiplexor del digipot
assign datoDpot=(ctrlWac[3:0]==4'b0011)? confWac[7:0]:8'b0;	//actualizamos el dato con el nuevo valor
assign ctrlDpot=(ctrlWac[3:0]==4'b0011)? confWacEn:1'b1;		//enviamos el pulso que activa el envio de datos al digipot
//MODO CONFIG
always@(posedge clk)
begin
if(ctrlWac[3:0]==4'b0100)
	theBeanConf=confWac;	 
if(ctrlWac[3:0]==4'b0010)
	begin
	muxRef1=		confWac[0];	//actualizamos en dac mux
	muxRef2=		confWac[1];	//actualizamos en dac mux
	muxRef3=		confWac[2];	//actualizamos en dac mux
	muxDacEn= 	confWac[3];	//actualizamos en dac mux
	muxDacSel= 	confWac[4];	//actualizamos sel dac mux
	end	
end
//MODO ADC1
assign adcOut=(ctrlWac==8'h11)?dataOutAdc1:8'bzzzz_zzzz;
assign enAdc1=(ctrlWac==8'h11)?adcWacEn:1'b1;
//MODO ADC2
assign adcOut=(ctrlWac==8'h12)?dataOutAdc2:8'bzzzz_zzzz;
assign enAdc2=(ctrlWac==8'h12)?adcWacEn:1'b1;




Dac_ctrl dacWAC(
    .clk_in(clk), 
    .ctrl(ctrlDac), 
    .dato(datoDac), 
    .sync(syncDac), 
    .sdi(sdiDac), 
    .sclk(sclkDac)
    );

Digipot_ctrl dpotWac(
    .clk(clk), 
    .mux(muxDpot), 
    .ctrl(ctrlDpot), 
    .dato(datoDpot), 
    .cs1(csDpot1), 
    .cs2(csDpot2), 
    .cs3(csDpot3), 
    .sdi(sdiDpot), 
    .clk_out(clkDpot)
    );

adcCtrl adc1 (
    .clk(clk), 
    .adcEn(enAdc1), 
    .adcDataOut(dataOutAdc1), 
    .sdo(sdoAdc1), 
    .cs(csAdc1), 
    .sclk(clkAdc1)
    );

adcCtrl adc2 (
    .clk(clk), 
    .adcEn(enAdc2), 
    .adcDataOut(dataOutAdc2), 
    .sdo(sdoAdc2), 
    .cs(csAdc2), 
    .sclk(clkAdc2)
    );


endmodule
