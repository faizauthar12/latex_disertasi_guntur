entity enkripsi_stego is
port( 	clk, we : in std_logic;
	Din : in  STD_LOGIC_VECTOR (7 downto 0);
	PixR : in  STD_LOGIC_VECTOR (7 downto 0);
	PixG : in  STD_LOGIC_VECTOR (7 downto 0);
	PixB : in  STD_LOGIC_VECTOR (7 downto 0);
	outR : out  STD_LOGIC_VECTOR (7 downto 0);
	outG : out  STD_LOGIC_VECTOR (7 downto 0);
	outB : out  STD_LOGIC_VECTOR (7 downto 0));
end enkripsi_stego;
