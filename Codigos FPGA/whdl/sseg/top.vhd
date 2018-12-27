----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:25:28 08/28/2016 
-- Design Name: 
-- Module Name:    top - Behavioral 
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

entity top is
port(
		clk : in std_logic;
		btn: in std_logic_vector(3 downto 0);
      an : out std_logic_vector(3 downto 0);  --BCD input
      segment7 : out std_logic_vector(6 downto 0)  -- 7 bit decoded output.
);
end top;



architecture Behavioral of top is
-- Declaraciones
signal d0: std_logic_vector(3 downto 0):="0001";
signal d1: std_logic_vector(3 downto 0):="0001";
signal d2: std_logic_vector(3 downto 0):="0001";
signal d3: std_logic_vector(3 downto 0):="0001";
signal d: std_logic_vector(3 downto 0);
signal count: std_logic_vector(1 downto 0):="00";
component hex2sseg
	port(	clk : in std_logic;
			hex : in std_logic_vector(3 downto 0);  --BCD input
			seg : out std_logic_vector(6 downto 0)  -- 7 bit decoded output.
			);
end component;	
component display
	port(	clk : in std_logic;
			d0: in std_logic_vector(3 downto 0);
			d1: in std_logic_vector(3 downto 0);
			d2: in std_logic_vector(3 downto 0);
			d3: in std_logic_vector(3 downto 0);
			d: out std_logic_vector(3 downto 0);
			an: out std_logic_vector(3 downto 0)
			);
end component; 
begin

u1	: display PORT MAP(clk=>clk,d0=>d0,d1=>d1,d2=>d2,d3=>d3,d=>d,an=>an);
u2 : hex2sseg PORT MAP(clk=>clk,hex=>d,seg=>segment7);

process (btn(0))
begin
	if rising_edge(btn(0))then
	d0<=d0+1;
	end if;
end process;

process (btn(1))
begin
	if rising_edge(btn(1))then
	d1<=d1+1;
	end if;
end process;
	
process (btn(2))
begin
	if rising_edge(btn(2))then
	d2<=d2+1;
	end if;
end process;

process (btn(3))
begin
	if rising_edge(btn(3))then
	d3<=d3+1;
	end if;
end process;
end Behavioral;

