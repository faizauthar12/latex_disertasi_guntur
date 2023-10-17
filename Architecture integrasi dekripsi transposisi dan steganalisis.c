architecture Behavioral of dekripsi_stega is
COMPONENT steganalisis
Port (	clk : in  STD_LOGIC;
	we : in  STD_LOGIC;
	stegoR : in  STD_LOGIC_VECTOR (7 downto 0);
	stegoG : in  STD_LOGIC_VECTOR (7 downto 0);
	stegoB : in  STD_LOGIC_VECTOR (7 downto 0);
	den : out STD_LOGIC;
	ekstrak : out STD_LOGIC_VECTOR (63 downto 0));
END COMPONENT;

COMPONENT dekripsi
Port (	clk : in  STD_LOGIC;
	we : in  STD_LOGIC;
	Din : in  STD_LOGIC_VECTOR (63 downto 0);
	Dout : out  STD_LOGIC_VECTOR (63 downto 0));
END COMPONENT;
