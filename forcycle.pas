program Ameba;

var i, a, b, amebi : integer;
//var x : real;
begin 
//For i:=10 to 5 do 
//begin 
//writeln('ok', i);
//end;
//
//For i:=15 downto 0 do
//begin
//writeln('ok', i);
//end;
//



amebi := 1;
//x := 1;

For i:= 1 to 8 do
begin
//x := power(2, i-1)*2;
amebi:= amebi * 2; 

write(' Амёб ', amebi);
//write(' Амёб ', x); // solution 2
writeln(' Час: ', (i*3));
end;


end.

