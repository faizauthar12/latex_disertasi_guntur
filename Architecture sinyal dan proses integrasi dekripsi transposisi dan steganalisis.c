signal dens : std_logic;
signal ekstraks : STD_LOGIC_VECTOR (63 downto 0);

begin 
dev1: steganalisis port map(clk,we,stegoR,stegoG,stegoB,dens,ekstraks);
dev2: dekripsi port map(clk,dens,ekstraks,Dout);

end Behavioral;
