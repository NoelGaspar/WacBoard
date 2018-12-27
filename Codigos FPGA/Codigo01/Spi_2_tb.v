// Verilog Test Fixture Template

  `timescale 1 ns / 1 ps

  module Spi_2_tb;
			//inputs
          reg clk;
          reg SCK;
			 reg SIMO;
			 reg CS;
			 reg [7:0]data_out;
			 
			 //outputs
          wire SOMI;
          wire [7:0] data_in;

        

          integer <name1>;
          integer <name2>;

   // The following code initializes the Global Set Reset (GSR) and Global Three-State (GTS) nets
   // Refer to the Synthesis and Simulation Design Guide for more information on this process
   reg GSR;
   assign glbl.GSR = GSR;
   reg GTS;
   assign glbl.GTS = GTS;

   initial begin
      GSR = 1;
      GTS = 0; // GTS is not activated by default
      #100; // GSR is set for 100 ns
      GSR = 0;
   end

  // Initialize Inputs
      `define auto_init

      `ifdef auto_init

          initial begin
          end

      `endif
  endmodule
