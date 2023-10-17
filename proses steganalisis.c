begin
process (clk, we, stegoR, stegoG, stegoB)

begin
if we = '0' then
	i<=1; 
else
if (rising_edge (clk)) and we = '1' then
	if i<23 then
		data_ekstrakR(i-1)<=stegoR(0);
		data_ekstrakG(i-1)<=stegoG(0);
		data_ekstrakB(i-1)<=stegoB(0); 
	end if;
	i<=i+1;
end if;
end if;

end process;
ekstrak <= data_ekstrakR & data_ekstrakG & data_ekstrakB(19 downto 0);
end Behavioral;
