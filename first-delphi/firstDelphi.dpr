program firstDelphi;

{$APPTYPE CONSOLE}

{$R *.res}

Uses
  System.SysUtils;

Var
    FirstSide, SecondSide, ThirdSide:Integer;
    Input:String;
    IsCorrect:Boolean;
    FirstSideSqr, SecondSideSqr, ThirdSideSqr:Int64;

Begin

    IsCorrect := False;
    While Not IsCorrect Do
    Begin
        Writeln('Введите значение первой стороны треугольника не певышающее 1000000000 ');
        Readln(Input);
        IsCorrect := TryStrToInt(Input, FirstSide);

        If IsCorrect And (FirstSide > 1000000000) Then
            Writeln('Значение не должно превышать 1000000000, повторите ввод');

        If Not IsCorrect Then
            Writeln('сторона должна быть целым числом, повторите ввод');
    End;

    IsCorrect := False;
    While Not IsCorrect Do
    Begin
        Writeln('Введите значение второй стороны треугольника не певышающее 1000000000 ');
        Readln(Input);
        IsCorrect := TryStrToInt(Input, SecondSide);

        If IsCorrect And (SecondSide > 1000000000) Then
            Writeln('Значение не должно превышать 1000000000, повторите ввод');

        If Not IsCorrect Then
            Writeln('сторона должна быть целым числом, повторите ввод');
    End;

    IsCorrect := False;
    While Not IsCorrect Do
    Begin
        Writeln('Введите значение третьей стороны треугольника не певышающее 1000000000 ');
        Readln(input);
        IsCorrect := TryStrToInt(input, thirdSide);

        If IsCorrect And (ThirdSide > 1000000000) Then
        Writeln('Значение не должно превышать 1000000000, повторите ввод');

        If Not IsCorrect Then
        Writeln('сторона должна быть целым числом, повторите ввод');
    End;

    FirstSideSqr  := FirstSide  * FirstSide;
    SecondSideSqr := SecondSide * SecondSide;
    ThirdSideSqr  := ThirdSide  * ThirdSide;

    If (FirstSideSqr = SecondSideSqr + ThirdSideSqr) Or (SecondSideSqr = FirstSideSqr + ThirdSideSqr) Or (ThirdSideSqr = FirstSideSqr + SecondSideSqr) Then
        Writeln('Треугольник прямоугольный')
    Else
        Writeln('Треугольник не прямоугольный');
    Readln;
End.
