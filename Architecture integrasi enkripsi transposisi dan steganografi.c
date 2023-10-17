architecture Behavioral of enkripsi_stego is
COMPONENT TRANSPOSISI
PORT(	clk, we: in std_logic;
	Din : in  STD_LOGIC_VECTOR (7 downto 0);
	den : out std_logic;
	Dout : out  STD_LOGIC_VECTOR (63 downto 0));
END COMPONENT;

COMPONENT penyisipan_ver2
PORT(	clk, we : in std_logic;
	datain : in  STD_LOGIC_VECTOR (63 downto 0);
	PixR : in  STD_LOGIC_VECTOR (7 downto 0);
	PixG : in  STD_LOGIC_VECTOR (7 downto 0);
	PixB : in  STD_LOGIC_VECTOR (7 downto 0);
	outR : out  STD_LOGIC_VECTOR (7 downto 0);
	outG : out  STD_LOGIC_VECTOR (7 downto 0);
	outB : out  STD_LOGIC_VECTOR (7 downto 0));
END COMPONENT;
