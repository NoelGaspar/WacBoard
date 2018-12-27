`timescale 1ns / 1ps

module pixel_processor(	
								input clk,
								input enable,
								input reset,
								
								input [7:0] CDSBUS, 
								
								input [15:0] muestra,
								input clk_muestra,
								
								input [15:0] coeff_addr,
								input [31:0] coeff_value,					
								input new_coeff,
								
								input [15:0] mod,
								input new_modo,
								
								input [15:0] numero_muestras,
								input new_num_muestras,
								
								input [15:0] numero_marca,
								input new_num_marca,
								
								input torrent_tx_clk_in,
								output data_out_to_torrent,
								output muestras_guardadas_to_torrent,
								
								output [15:0] modo,
								output test
								
								); 
	
	reg we_m, we_c, ena_m, enb_m, ena_c, enb_c, out_en;
	reg [17:0] addr_w_m, addr_r_m, addr_r_m_2, addr_r_m_3, addr_w_c, addr_r_c;
	wire [17:0] muestra_guardada, muestra_procesada;
	wire [31:0] coeficiente;
	
	initial begin 
		addr_w_m = 0;
		addr_r_m = 0;
		addr_r_m_2 = 0;
		addr_w_c = 0;
		addr_r_c = 0;
		out_en = 0;
	end
	
	/* ---- NUMERO DE MUESTRAS ---- */
	reg [15:0] N;
	initial N = 200;
	always@(posedge new_num_muestras) begin
		N <= numero_muestras;
	end
	
	/* ---- Marca de muestras (DEBUG) ---- */
	reg [15:0] marca;
	initial marca = 0;
	always@(posedge new_num_marca) begin
		marca <= numero_marca;
	end
	
	reg test;
	
	always@(posedge clk_muestra) begin
		if(addr_w_m == 0 && state == STATE_SAMPLING)
			test <= 1'b1;
		else if(addr_w_m == marca)
			test <= 1'b1;
		else
			test <= 1'b0;
	end
	
	/* ---- GUARDA COEF ---- */
	reg [15:0] adr;
	reg [31:0] cof;
	always@(posedge new_coeff) begin
		adr <= coeff_addr;
		cof <= coeff_value;
	end
	
	/* ---- MODO DE OPERACION ---- */
	reg [15:0] modo;
	always@(posedge new_modo) begin
		modo <= mod;
	end
	
	reg [17:0] output_A;
	reg [17:0] output_B;
	reg output_strobe_A;
	reg output_strobe_B;
	reg [15:0] direccion_coeficiente;
	
	always@(*)
		case(modo)
			16'h0000: begin
				output_A = muestra_guardada;
				output_B = addr_r_m_3;
				output_strobe_A = CDSBUS[0];
				output_strobe_B = CDSBUS[0];
				direccion_coeficiente = addr_r_m_3;
			end
			16'h0001: begin
				output_A = coeficiente;
				output_B = addr_r_m_3;
				output_strobe_A = CDSBUS[0];
				output_strobe_B = CDSBUS[0];
				direccion_coeficiente = addr_r_m_3;
			end
			16'h0002: begin
				output_A = muestra_procesada;
				output_B = addr_w_m;
				output_strobe_A = output_ready;
				output_strobe_B = output_ready;
				direccion_coeficiente = addr_r_c;
			end
			16'h0003: begin
				output_A = muestra_procesada_raw[17:0];
				output_B = addr_w_m;
				output_strobe_A = output_ready;
				output_strobe_B = output_ready;
				direccion_coeficiente = addr_r_c;
			end
			16'h0004: begin
				output_A = muestra_procesada_raw[35:18];
				output_B = addr_w_m;
				output_strobe_A = output_ready;
				output_strobe_B = output_ready;
				direccion_coeficiente = addr_r_c;
			end
			16'h0005: begin
				output_A = muestra_procesada_raw[53:36];
				output_B = addr_w_m;
				output_strobe_A = output_ready;
				output_strobe_B = output_ready;
				direccion_coeficiente = addr_r_c;
			end
			16'h0006: begin
				output_A = muestra_procesada_raw[63:54];
				output_B = addr_w_m;
				output_strobe_A = output_ready;
				output_strobe_B = output_ready;
				direccion_coeficiente = addr_r_c;
			end
			default: begin
				output_A = coeficiente;
				output_B = addr_r_m_3;
				output_strobe_A = CDSBUS[0];
				output_strobe_B = CDSBUS[0];
				direccion_coeficiente = addr_r_m_3; 
			end
	endcase
	
	/* ----- MEMORIAS ----- */
	
	mem_2port MUESTRAS 		( 	// PUERTO A: Se usa para grabar muestras del ADC
										.clka(clk_muestra), 
										.ena(ena_m), 
										.wea(we_m), 
										.addra(addr_w_m), 
										.dina(muestra), 
										.douta(),
										// PUERTO B: Se usa para leer muestras
										.clkb(clk_muestra),
										.enb(enb_m),
										.web(1'b0),
										.addrb(addr_r_m_2), 
										.dinb(0), 
										.doutb(muestra_guardada)
									);

	mem_2port_32 COEFICIENTES 	( 	// PUERTO A
										.clka(clk_muestra),
										.ena(ena_c), 
										.wea(new_coeff), 
										.addra(adr), 
										.dina(cof),
										.douta(douta), 
										// PUERTO B
										.clkb(~clk_muestra),
										.enb(enb_c),
										.web(1'b0),
										.addrb(direccion_coeficiente),
										.dinb(0),
										.doutb(coeficiente)
									);  
									
	/* ----- OUTPUT DE DATOS HACIA TORRENT ----- */
		
	fake_torrent_adc_testing fake (
										.torrent_tx_clk_in(torrent_tx_clk_in), 
										.new_data_strobe(output_strobe_A), 
										.data_in(output_A),
										.enable(out_en),
										.data_out_to_torrent(data_out_to_torrent)
									); 
	
	fake_torrent_adc_testing fake2 (
										.torrent_tx_clk_in(torrent_tx_clk_in), 
										.new_data_strobe(output_strobe_B), 
										.data_in(output_B), 
										.enable(out_en),
										.data_out_to_torrent(muestras_guardadas_to_torrent) 
									); 
	
	/* ----- FILTRO ----- */
									
	reg acumm_enable = 0;	
	wire [63:0] muestra_procesada_raw;
	wire output_ready;
	reg accum_reset;
	
	mult_accom_div_cw filtro (
		.clk(clk_muestra), 
		.ce(1'b1), 
		.accum_enable(acumm_enable),
		.accum_reset(accum_reset), 
		.coeff(coeficiente),
		.muestra(muestra), 
		.muestra_procesada(muestra_procesada), 
		.muestra_procesada_raw(muestra_procesada_raw), 
		.n(N),
		.output_ready(output_ready) 
   );	
	 
	/* ------------- STATE MACHINE -------------- */
	
	localparam  STATE_IDLE 							= 4'b0000,
					STATE_PRE_DELAY					= 4'b0001,
					STATE_SAMPLING 			 		= 4'b0011,
					STATE_POST_DELAY					= 4'b0010, 
					STATE_OUTPUT_SAMPLES				= 4'b0110,
					STATE_ENABLE_COEF_MEM         = 4'b0100,
					STATE_WAIT_FOR_PROCESSING     = 4'b1100; 
	
	reg [3:0] state;
	initial state = STATE_IDLE;
	reg [3:0] next_state;
	initial next_state = STATE_IDLE;
	
	always@(posedge clk_muestra) begin
		if(enable) begin
			if(reset) state <= STATE_IDLE; 
			else	    state <= next_state;
		end
	end
	
	always@(*) begin
		next_state = state;
		case (state)
			STATE_IDLE: begin 	// Habilitado para recibir coeficientes en la memoria
				we_m 		= 1'b0;
				we_c 		= 1'b1;
				ena_m 	= 1'b0;
				enb_m 	= 1'b0;
				ena_c 	= 1'b1;
				enb_c 	= 1'b0;

				acumm_enable = 1'b0;	
				accum_reset = 1'b1;
				out_en = 1'b0;
					
				if(CDSBUS[5] == 1'b1) next_state = STATE_PRE_DELAY; 
			end
			STATE_PRE_DELAY: begin  // Espero N clocks (delay del ADC)
				we_m 		= 1'b0;
				we_c 		= 1'b0;
				ena_m 	= 1'b0;
				enb_m 	= 1'b0;
				ena_c 	= 1'b0;
				enb_c 	= 1'b0;			
				
				acumm_enable = 1'b0;
				accum_reset = 1'b0;
				out_en = 1'b0;
				
				if(count_pre_delay == DELAY - 2) next_state = STATE_ENABLE_COEF_MEM;
			end
			STATE_ENABLE_COEF_MEM: begin  // Un clock antes de empezar a samplear activo la memoria de los coeficientes porque la salida tiene un retardo de 1 clock
				we_m 		= 1'b0;
				we_c 		= 1'b0;
				ena_m 	= 1'b0;
				enb_m 	= 1'b0;
				ena_c 	= 1'b0;
				enb_c 	= 1'b1;
				
				acumm_enable = 1'b0;
				accum_reset = 1'b0;
				out_en = 1'b0;
				
				next_state = STATE_SAMPLING;
			end
			STATE_SAMPLING: begin   // Empieza a samplear, guarda las muestras en memoria y comienza a filtrar
				we_m 		= 1'b1;
				we_c 		= 1'b0;
				ena_m 	= 1'b1;
				enb_m 	= 1'b0;
				ena_c 	= 1'b0;
				enb_c 	= 1'b1;
				
				acumm_enable = 1'b1;
				accum_reset = 1'b0;
				out_en = 1'b0;
				
				if(addr_w_m == N - (DELAY - 2)) next_state = STATE_POST_DELAY;
			end
			STATE_POST_DELAY: begin // Sigue sampleando y filtrando por N clocks más (delay del ADC)
				we_m 		= 1'b1;
				we_c 		= 1'b0;
				ena_m 	= 1'b1;
				enb_m 	= 1'b0; 
				ena_c 	= 1'b0;
				enb_c 	= 1'b1;		
				
				acumm_enable = 1'b1;
				accum_reset = 1'b0;
				out_en = 1'b0;
				
				if(count_post_delay == DELAY - 1) begin
					if(modo > 16'h0001) next_state = STATE_WAIT_FOR_PROCESSING;
					else next_state = STATE_OUTPUT_SAMPLES;
				end
			end
			STATE_WAIT_FOR_PROCESSING: begin
				we_m 		= 1'b0;
				we_c 		= 1'b0;
				ena_m 	= 1'b0;
				enb_m 	= 1'b0;
				ena_c 	= 1'b0;
				enb_c 	= 1'b0;
				
				acumm_enable = 1'b0;
				accum_reset = 1'b0;
				out_en = 1'b1;
				
				if(output_ready) next_state = STATE_IDLE; 
			end
			STATE_OUTPUT_SAMPLES: begin 		// Paro de samplear, espero a que el filtro esté listo
				we_m 		= 1'b0;
				we_c 		= 1'b0;
				ena_m 	= 1'b0;
				enb_m 	= 1'b1;
				ena_c 	= 1'b0;
				enb_c 	= 1'b1;
				
				acumm_enable = 1'b0;
				accum_reset = 1'b0;
				out_en = 1'b1;
				
				if(addr_r_m_2 == N-1 || CDSBUS[3] == 1'b1) begin
					next_state = STATE_IDLE;  
				end
			end
			default: begin
				next_state = state; 
			end
		endcase
	end
	
	reg pre2_cds5, pre_cds5;
	assign cds_posedge = pre_cds5 & ~pre2_cds5;
	always@(posedge clk_muestra) begin	
		pre_cds5 <= CDSBUS[5];
		pre2_cds5 <= pre_cds5;
	end
	
	always@(posedge clk_muestra) begin	
		if(state != STATE_OUTPUT_SAMPLES) begin
			addr_r_m_2 <= 0;
			addr_r_m_3 <= 0; 			
		end else begin
			if(cds_posedge) begin 
				addr_r_m_2 <= addr_r_m_2 + 1;
				addr_r_m_3 <= addr_r_m_2; 
			end
		end
	end
	
	always@(posedge clk_muestra) begin
		if(state == STATE_SAMPLING || state == STATE_POST_DELAY) begin
			addr_w_m <= addr_w_m + 1;
		end else if(state == STATE_IDLE) begin
			addr_w_m <= 0;
		end
	end
	
	always@(posedge clk_muestra) begin
		if(state == STATE_SAMPLING || state == STATE_POST_DELAY || state == STATE_ENABLE_COEF_MEM) begin
			addr_r_c <= addr_r_c + 1;
		end else if(state == STATE_IDLE) begin
			addr_r_c <= 0;
		end
	end
	
	localparam DELAY = 6; // 6 muestras de delay que vienen desde el ADC
	
	reg [3:0] count_pre_delay;
	reg [3:0] count_post_delay;
	
	always@(negedge clk_muestra) begin
		if(state == STATE_PRE_DELAY)
			count_pre_delay <= count_pre_delay + 1;
		else
			count_pre_delay <= 0;
			
		if(state == STATE_POST_DELAY)
			count_post_delay <= count_post_delay + 1;
		else
			count_post_delay <= 0;
	end

endmodule
