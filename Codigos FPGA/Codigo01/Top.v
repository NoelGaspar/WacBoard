`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:31:46 07/15/2015 
// Design Name: 
// Module Name:    Top 
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
module Top(clk,sw,SDI_REF,CLK_REF,CS_REF1,CS_REF2,CS_REF3,MUX_REF1,MUX_REF2,MUX_REF3,CS_DAC,SDI_DAC,CLK_DAC,SDO_ADC2,CS_ADC2,CLK_ADC2,DMUX_EN,DMUX_SEL,SDO_ADC1,CS_ADC1,CLK_ADC1,seg,an,Led,SOMI_spi,SIMO_spi,SCK_spi,CS_spi);
//module Top(clk,Clk_out);

//inputs
input clk;  		//clk general, el mas rapido posible. 50MHz
input sw;	// Para efectos de prueba los sw determinaran las funciones de la placa
						// sw[0] indica si los mux utilizaran la salida analogica o la digital		
						
	
input SIMO_spi; 	//Data in spi-uc
input SCK_spi;		//Clock spi-uc	
input CS_spi;		//Chip select spi-uc

//ouputs
output SDI_REF;
output CLK_REF;
output CS_REF1;
output CS_REF2;
output CS_REF3;
output reg MUX_REF1;
output reg MUX_REF2;
output reg MUX_REF3;
output SDI_DAC;
output CLK_DAC;
output CS_DAC;
output [6:0]seg;
output [3:0]an;
output SOMI_spi;
output [7:0]Led;
output SDO_ADC2;
output CS_ADC2;
output CLK_ADC2 ;
output DMUX_EN;
output DMUX_SEL ;
output SDO_ADC1;
output CS_ADC1;
output CLK_ADC1;




//auxiliares



initial 
begin
MUX_REF1	=0;
MUX_REF2	=0;
MUX_REF3	=0;
end

assign SDO_ADC2	=0;
assign CS_ADC2	=0;
assign CLK_ADC2 =0;
assign DMUX_EN	=0;
assign DMUX_SEL =0;
assign SDO_ADC1	=0;
assign CS_ADC1	=0;
assign CLK_ADC1	=0;


wire clk_12M;
wire clk_m;
wire [6:0] 	disp;
wire [1:0]	mux;
wire tx_send;
wire [7:0]data_spi_in;
wire [7:0]data_spi_out;
wire [7:0]dato_dpot;
wire ctrl_dpot;
wire ctrl_dac;
wire [15:0]dato_dac;




//multiplexor para los mux analogicos
always@(posedge clk)
begin
	case(mux)
		0:begin 	
					MUX_REF1=sw;
					MUX_REF2=0;
					MUX_REF3=0;
					end
		1:	begin 
					MUX_REF1=0;
					MUX_REF2=sw;
					MUX_REF3=0;
					end
		2:	begin 	
					MUX_REF1=0;
					MUX_REF2=0;
					MUX_REF3=sw;
					end
		default:	begin 
					MUX_REF1=0;
					MUX_REF2=0;
					MUX_REF3=0;
					end
endcase
end



//divisor de clock. Como prueba usaremos todos los spi a 12MHz
Clk_div mod1(.clk_in(clk),.clk_out(clk_12M),.clk_m(clk_m));

//display 7s
display 	shows(clk_m, 0, 0, 0,disp, an, seg);



assign Led = data_spi_in;


//Control global de los modulos
Control instance_name (
    .clk(clk), 
    .data_in(data_spi_in), 
    .tx_send(tx_send),
	 .data_out(data_spi_out),
    .ctrl_dac(ctrl_dac), 
    .dato_dac(dato_dac), 
    .mux_dpot(mux), 
    .ctrl_dpot(ctrl_dpot), 
    .dato_dpot(dato_dpot), 
    .seg(disp)
    );



//Control de los digipot
/* 
	Dependiendo de la señal mux se seleciona que señal cs estará presente.
	El clock es de 12MHz
	La señal ctrl inicia la comunicación. se transmiten los 8 bits de data_digipot.
*/
Digipot_ctrl mod2(
	 .clk(clk),
    .mux(mux), 
    .ctrl(ctrl_dpot), 
    .dato(dato_dpot), 
    .cs1(CS_REF1), 
    .cs2(CS_REF2), 
    .cs3(CS_REF3), 
    .sdi(SDI_REF), 
    .clk_out(CLK_REF)
    );

//Control Ddel dac
/* 
	Dependiendo de la señal mux se seleciona que señal cs estará presente.
	El clock es de 12MHz
	La señal ctrl inicia la comunicación. se transmiten los 8 bits de data_digipot.
*/	 
Dac_ctrl mod5(
    .clk_in(clk), 
    .ctrl(ctrl_dac), 
    .dato(dato_dac), 
    .sync(CS_DAC), 
    .sdi(SDI_DAC), 
    .sclk(CLK_DAC)
    );

//Comunicación con el PC via spi y un uC	 
SPI2 mod7 (
    .clk(clk), 
    .SCK(SCK_spi), 
    .SIMO(SIMO_spi), 
    .CS(CS_spi), 
    .data_out(data_spi_out), 	//palabra que queremos enviar por spi al mU
    .SOMI(SOMI_spi), 
    .data_in(data_spi_in),          	//palabra que llega por spi
	 .tx_send(tx_send)
    );

endmodule
