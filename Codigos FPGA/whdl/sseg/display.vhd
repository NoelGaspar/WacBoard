----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:43:50 08/28/2016 
-- Design Name: 
-- Module Name:    display - Behavioral 
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
use ieee.std_logic_unsigned.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity display is
port(
clk : in std_logic;
d0: in std_logic_vector(3 downto 0);
d1: in std_logic_vector(3 downto 0);
d2: in std_logic_vector(3 downto 0);
d3: in std_logic_vector(3 downto 0);
d: out std_logic_vector(3 downto 0);
an: out std_logic_vector(3 downto 0)
);
end display;

architecture Behavioral of display is

signal cont: std_logic_vector(1 downto 0):="00";

begin
	process(clk)
	begin
		if(clk'event and clk = '1') then
			cont <= cont + 1;
			case cont is
			when "00"=>  d <= d0; an<="1110";  -- '0'
			when "01"=>  d <= d1; an<="1101";  -- '0'
			when "10"=>  d <= d2; an<="1011";  -- '0'
			when "11"=>  d <= d3; an<="0111";  -- '0'
			when others=> d <= d0; an<="1110"; -- '0'
			end case;
		end if;
	end process;
end Behavioral;

