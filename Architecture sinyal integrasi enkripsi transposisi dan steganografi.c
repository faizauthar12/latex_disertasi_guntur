signal memrs,memgs,membs : std_logic_vector(7 downto 0);
signal dens : std_logic;
signal douts : STD_LOGIC_VECTOR (63 downto 0);

begin
dev1: TRANSPOSISI port map(clk, we, Din, dens, douts);
dev2: penyisipan_ver2 port map(clk, dens, douts, memrs, memgs, membs, outRoutG, outB);
