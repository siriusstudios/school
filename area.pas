program SP;

var a, b, answer : integer;
    c : string;
    
    
begin
 writeln('Please write in S if you want to define the area, P if yoou wanna define the perimeter.');
 readln(c);
  if c = 'P' then 
  begin
    writeln('You chose to define the perimeter. Write in the length and wideness of rectangle.');
    readln(a, b);
    answer:= a+b * 2;
    writeln('The perimeter is:' , answer);
     
  end;
     
  if c = 'S' then
  begin
    writeln('You chose to define the area of square. Please write in the length of any side.');
    readln(a);
    answer:= a*a;
    writeln('The area is ' , answer);
  end;
    