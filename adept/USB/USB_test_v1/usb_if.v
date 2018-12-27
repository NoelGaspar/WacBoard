// DO NOT CHANGE THE FOLLOWING LINE!!!!! IT IS NECESSARY FOR PROPER SYNTHESIS!!!
// synthesis attribute fsm_encoding of usb_if is user;
module usb_if #(parameter DATA_WIDTH=8, ADDR_WIDTH=8)
              ( output usbWait,												// AAH: This is EXTERNAL
                output usbIF_data_write,									//	AAH: This is internal
                output reg [ADDR_WIDTH-1:0] usbIF_address,			//	AAH: This is internal
                input  [DATA_WIDTH-1:0] usbIF_data_in,				// AAH: This is internal
                inout [7:0] usbData,										// AAH: This is EXTERNAL
                input usbAddrStrobe_n, usbDataStrobe_n, usbWE_n,	// AAH: These are EXTERNAL
                input clk														//	AAH: This is EXTERNAL
);
localparam READ = 1, WRITE = 0;
// AAH Comments

// usbData is either usbIF_data_in  (when usbWE_n = 1 and direction = 1 and usbAddrStrobe_n = 1)
// 			  or     usbIF_address  (when usbWE_n = 1 and direction = 1 and usbAddrStrobe_n = 0)
//				  or	   high impedance (when either usbWE_n = 0 or direction = 0 or both are 0)
// I don't really need to understand the protocol if the interface is the same of what I'm trying to do.
// Then I should just try it, and if it works, keep it working.

// End of AAH Comments

//----------------------------------------------------------------------
// The following constants define state codes for the USB port interface
// state machine. The high order bits of the state number give a unique
// state identifier. The low order bits are the state machine outputs for
// that state. This type of state machine implementation uses no
// combination logic to generate outputs which should produce glitch
// free outputs.
// Because the encodings are already set, we need to turn off the 
// "FSM Encoding Algorithm" - this is done by the comment above the module.
localparam READY     =  8'b 0000_0000,
           ADDR_WR_A =  8'b 0001_0100,
           ADDR_WR_B =  8'b 0010_0001,
           ADDR_RD_A =  8'b 0011_0010,
           ADDR_RD_B =  8'b 0100_0011,
           DATA_WR_A =  8'b 0101_1000,
           DATA_WR_B =  8'b 0110_0001,
           DATA_RD_A =  8'b 0111_0010,
           DATA_RD_B =  8'b 1000_0011;

// State machine current state register
reg [7:0] current_state, next_state;
// Internal control signals
wire  direction;
wire  addr_write;
wire [7:0] busout;
// Registers

  // Drive the tristate bus - with Z if we are not being read, 
  // Otherwise, with the usbIF_address or usbIF_data_in
  assign usbData = (usbWE_n && direction) ? busout : 8'b ZZZZZZZZ;
  assign busout =  (~usbAddrStrobe_n)?usbIF_address : usbIF_data_in;

  // Map control signals from the current state
  assign usbWait          = current_state[0] ;
  assign direction        = current_state[1] ;
  assign addr_write       = current_state[2] ;
  assign usbIF_data_write = current_state[3] ;

  // This process determines the next state machine state based
  // on the current state and the state machine inputs.
  always @* begin
    // Set the next state default
    next_state = current_state;
    //usbWait      = 0;
    //direction  = WRITE;
    //addr_write = 0;
    //usbIF_data_write = 0;
    case(current_state)
    // Idle state usbWaiting for the beginning of an EPP cycle
    // Wait for and address or data strobe for a read or write cycle
    READY : begin
      if (~usbAddrStrobe_n) 
    next_state = usbWE_n?ADDR_RD_A:ADDR_WR_A;
      else if (~usbDataStrobe_n)
    next_state = usbWE_n?DATA_RD_A:DATA_WR_A;
    end
    ADDR_WR_A : begin
      //addr_write = 1;
      next_state = ADDR_WR_B;
    end
    ADDR_WR_B : begin
      //usbWait      = 1;
      if(~usbAddrStrobe_n) 
        next_state = ADDR_WR_B;
      else 
        next_state = READY;
    end
    ADDR_RD_A : begin
      //direction  = READ;
      next_state = ADDR_RD_B;
    end
    ADDR_RD_B : begin
      //usbWait      = 1;
      //direction  = READ;
      if(~usbAddrStrobe_n) 
        next_state = ADDR_RD_B;
      else 
        next_state = READY;
    end
    DATA_WR_A : begin
      //usbIF_data_write = 1;
      next_state = DATA_WR_B;
    end
    DATA_WR_B : begin
      //usbWait      = 1;
      if(~usbDataStrobe_n)
        next_state = DATA_WR_B;
      else 
        next_state = READY;
    end
    DATA_RD_A : begin
      //direction  = READ;
      next_state = DATA_RD_B;
    end
    DATA_RD_B : begin
      //usbWait      = 1;
      //direction  = READ;
      if(~usbDataStrobe_n)
        next_state = DATA_RD_B;
      else 
        next_state = READY;
    end
    default : begin
      next_state = READY;
    end
    endcase
  end

  // On the clock, set the next state and if the address isb being written, set 
  // the address.
  always @(posedge clk) begin
    current_state <= next_state;
    if(addr_write) begin
      usbIF_address <= usbData;
    end
  end
endmodule
