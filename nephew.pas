program newhw;
var input,num1,num2;
begin
    readln(input);
    num1 := 0;
    while input>0 do 
    begin
        num2:= input mod 10;
        input:= input div 10;
        num1 := num1*10 + num2;
end;
    writeln('The reverse number of your input is: ', num1);
end.
