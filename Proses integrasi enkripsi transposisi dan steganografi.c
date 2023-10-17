process(clk,we)
begin
if (rising_edge (clk)) then
	if dens='1' then
		memrs <= PixR;
		memgs <= PixG;
		membs <= PixB;
	end if;
end if;
end process;
