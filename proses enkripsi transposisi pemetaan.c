begin
process (clk, we, Din) 
variable i : integer range 1 to 64 := 1;
variable j : integer range 0 to 10 := 0;

begin	
if we = '0' then 
	mem1 <= ( others=>'0');
	mem0 <= ( others=>'0');
	j:=0;
	den<='0';
else
if (rising_edge (clk)) and we = '1' then
	if j < 8 then  
		mem0 <= Din & mem0(63 downto 8);
		j:=j+1;
  	elsif j < 9 then
      		for i in 1 to 64 loop
			mem1(conv_integer(KEY(i))-1) <= mem0(i-1);
   		end loop;	
       		j:=j+1;
	else		
       		j:=0;		
	end if;
 end if;
end if;
if j=9 then
	den<='1';
end if;
Dout<=mem1;
end process;
end Behavioral;
