entity dekripsi_stega is
PORT (
	clk : in  STD_LOGIC;
	we : in  STD_LOGIC;
	stegoR : in  STD_LOGIC_VECTOR (7 downto 0);
	stegoG : in  STD_LOGIC_VECTOR (7 downto 0);
	stegoB : in  STD_LOGIC_VECTOR (7 downto 0);
	Dout : out STD_LOGIC_VECTOR (63 downto 0));
end dekripsi_stega;
