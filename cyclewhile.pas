program Ameba;

var i, a, b, amebi : integer;

begin 
amebi := 1;
i:= 0;
while i < 8 do
begin
i:= i+1;
amebi:= amebi * 2; 

write(' Амёб ', amebi);
writeln(' Час: ', (i*3));
end;


end.
