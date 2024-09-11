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

        If Not IsCorrect Then
            Writeln('сторона должна быть целым числом, повторите ввод');

        If IsCorrect And (FirstSide > 1000000000) Then Begin
            IsCorrect := False;
            Writeln('Значение не должно превышать 1000000000, повторите ввод');
        End;

        If IsCorrect And (FirstSide < 0) Then Begin
            IsCorrect := False;
            Writeln('Значение не должно быть отрицательным, повторите ввод');
        End;
    End;

    IsCorrect := False;
    While Not IsCorrect Do
    Begin
        Writeln('Введите значение второй стороны треугольника не певышающее 1000000000 ');
        Readln(Input);
        IsCorrect := TryStrToInt(Input, SecondSide);

        If Not IsCorrect Then
            Writeln('сторона должна быть целым числом, повторите ввод');

        If IsCorrect And (SecondSide > 1000000000) Then Begin
            IsCorrect := False;
            Writeln('Значение не должно превышать 1000000000, повторите ввод');
        End;

        If IsCorrect And (SecondSide < 0) Then Begin
            IsCorrect := False;
            Writeln('Значение не должно быть отрицательным, повторите ввод');
        End;
    End;

    IsCorrect := False;
    While Not IsCorrect Do
    Begin
        Writeln('Введите значение третьей стороны треугольника не певышающее 1000000000 ');
        Readln(input);
        IsCorrect := TryStrToInt(input, thirdSide);

        If Not IsCorrect Then
        Writeln('сторона должна быть целым числом, повторите ввод');

        If IsCorrect And (thirdSide > 1000000000) Then Begin
            IsCorrect := False;
            Writeln('Значение не должно превышать 1000000000, повторите ввод');
        End;

        If IsCorrect And (thirdSide < 0) Then Begin
            IsCorrect := False;
            Writeln('Значение не должно быть отрицательным, повторите ввод');
        End;
    End;

    FirstSideSqr  := FirstSide  * FirstSide;
    SecondSideSqr := SecondSide * SecondSide;
    ThirdSideSqr  := ThirdSide  * ThirdSide;

    If ((FirstSide < (SecondSide + ThirdSide)) Or (SecondSide < (FirstSide + ThirdSide)) Or (ThirdSide < (FirstSide + SecondSide))) And ((Not (FirstSide = 0)) Or (Not (SecondSide = 0)) Or (Not (ThirdSide = 0))) Then
    Begin
        If (FirstSideSqr = SecondSideSqr + ThirdSideSqr) Or (SecondSideSqr = FirstSideSqr + ThirdSideSqr) Or (ThirdSideSqr = FirstSideSqr + SecondSideSqr) Then
            Writeln('Треугольник прямоугольный')
        Else
            Writeln('Треугольник не прямоугольный');
    End Else
    Writeln('Треугольник не существует');

    Readln;
End.
