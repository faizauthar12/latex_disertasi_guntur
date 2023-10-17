begin
process (clk, we, datain)

begin
if we = '0' then
	i<=1; 
else
if (rising_edge (clk)) and we = '1' then
	if i=1 then
		datain1<=datain(63 downto 42); 				
		datain2<=datain(41 downto 20);				
		datain3(19 downto 0)<=datain(19 downto 0); 	
   	elsif i<24  then
		Rout(7 downto 1) <= PixR(7 downto 1);
		Gout(7 downto 1) <= PixG(7 downto 1);
		Bout(7 downto 1) <= PixB(7 downto 1);
		Rout(0) <= datain1(i-2);
		Gout(0) <= datain2(i-2);
		Bout(0) <= datain3(i-2);	
	end if;
i<=i+1;
	if i>23 then 
		i<=1;
   	end if;
	end if;
end if;
end process;
outR <= Rout;
outG <= Gout;
outB <= Bout;
end Behavioral;
