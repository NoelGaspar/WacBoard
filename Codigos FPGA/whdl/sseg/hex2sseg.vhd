----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:31:44 08/28/2016 
-- Design Name: 
-- Module Name:    hex2sseg - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity hex2sseg is
port(
clk : in std_logic;
hex : in std_logic_vector(3 downto 0);  --BCD input
seg : out std_logic_vector(6 downto 0)  -- 7 bit decoded output.
	);
end hex2sseg;

architecture Behavioral of hex2sseg is

begin
process(clk,hex)
begin
case hex is
when "0000"=> seg <="0000001";  -- '0'
when "0001"=> seg <="1001111";  -- '1'
when "0010"=> seg <="0010010";  -- '2'
when "0011"=> seg <="0000110";  -- '3'
when "0100"=> seg <="1001100";  -- '4' 
when "0101"=> seg <="0100100";  -- '5'
when "0110"=> seg <="0100000";  -- '6'
when "0111"=> seg <="0001111";  -- '7'
when "1000"=> seg <="0000000";  -- '8'
when "1001"=> seg <="0000100";  -- '9'
 --nothing is displayed when a number more than 9 is given as input. 
when others=> seg <="1111111"; 
end case;
end process;

end Behavioral;

