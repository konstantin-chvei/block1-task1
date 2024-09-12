program firstDelphi;

{$APPTYPE CONSOLE}

{$R *.res}

uses
  System.SysUtils;

var
    firstSide, secondSide, thirdSide:integer;
    input:string;
    isCorrect:boolean;
    firstSideSqr, secondSideSqr, thirdSideSqr:Int64;

begin

    isCorrect := false;
    while(not isCorrect) do begin
    writeln('Введите значение первой стороны треугольника не певышающее 1000000000 ');
    readln(input);
    isCorrect := TryStrToInt(input, firstSide);

    if(isCorrect and (firstSide > 1000000000)) then begin
        writeln('Значение не должно превышать 1000000000, повторите ввод')
    end;

    if(not isCorrect) then
        writeln('сторона должна быть числом, повторите ввод')
    end;

    isCorrect := false;
    while(not isCorrect) do begin
    writeln('Введите значение второй стороны треугольника не певышающее 1000000000 ');
    readln(input);
    isCorrect := TryStrToInt(input, secondSide);

    if(isCorrect and (secondSide > 1000000000)) then begin
        writeln('Значение не должно превышать 1000000000, повторите ввод')
    end;

    if(not isCorrect) then
        writeln('сторона должна быть числом, повторите ввод')
    end;

    isCorrect := false;
    while(not isCorrect) do begin
    writeln('Введите значение третьей стороны треугольника не певышающее 1000000000 ');
    readln(input);
    isCorrect := TryStrToInt(input, thirdSide);

    if(isCorrect and (thirdSide > 1000000000)) then begin
        writeln('Значение не должно превышать 1000000000, повторите ввод')
    end;

    if(not isCorrect) then
        writeln('сторона должна быть числом, повторите ввод')
    end;

    firstSideSqr  := firstSide  * firstSide;
    secondSideSqr := secondSide * secondSide;
    thirdSideSqr  := thirdSide  * thirdSide;

    if((firstSideSqr = secondSideSqr + thirdSideSqr) or
    (secondSideSqr = firstSideSqr + thirdSideSqr)    or
    (thirdSideSqr = firstSideSqr + secondSideSqr))   then
    writeln('Треугольник прямоугольный') else
    writeln('Треугольник не прямоугольный');

    readln;
end.
