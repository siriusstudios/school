program Ameba;

var i, a, b, amebi : integer;

begin 
amebi := 1;
i:= 0;
Repeat
i:= i+1;
amebi:= amebi * 2; 

write(' Амёб ', amebi);
writeln(' Час: ', (i*3));

Until i = 8;


end.
