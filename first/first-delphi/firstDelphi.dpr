program firstDelphi;

{$APPTYPE CONSOLE}

{$R *.res}

Uses
    System.SysUtils;

Var
    FirstSide, SecondSide, ThirdSide, UpperLimitOfInput:Integer;
    Input:String;
    IsCorrect:Boolean;
    FirstSideSqr, SecondSideSqr, ThirdSideSqr:Int64;

Begin
    Writeln('����:   ���� ����� ������ ������������.');
    Writeln('������: ����������, �������� �� ������ ����������� �������������.');
    IsCorrect := False;
    UpperLimitOfInput := 1000000000;
    While Not IsCorrect Do
    Begin
        Writeln('������� �������� ������ ������� ������������ �� ���������� 1000000000 ');
        Readln(Input);
        IsCorrect := TryStrToInt(Input, FirstSide);

        If Not IsCorrect Then
            Writeln('������� ������ ���� ����� ������, ��������� ����');

        If IsCorrect And (FirstSide > UpperLimitOfInput) Then Begin
            IsCorrect := False;
            Writeln('�������� �� ������ ��������� 1000000000, ��������� ����');
        End;

        If IsCorrect And (FirstSide < 0) Then Begin
            IsCorrect := False;
            Writeln('�������� �� ������ ���� �������������, ��������� ����');
        End;
    End;

    IsCorrect := False;
    While Not IsCorrect Do
    Begin
        Writeln('������� �������� ������ ������� ������������ �� ���������� 1000000000 ');
        Readln(Input);
        IsCorrect := TryStrToInt(Input, SecondSide);

        If Not IsCorrect Then
            Writeln('������� ������ ���� ����� ������, ��������� ����');

        If IsCorrect And (SecondSide > UpperLimitOfInput) Then Begin
            IsCorrect := False;
            Writeln('�������� �� ������ ��������� 1000000000, ��������� ����');
        End;

        If IsCorrect And (SecondSide < 0) Then Begin
            IsCorrect := False;
            Writeln('�������� �� ������ ���� �������������, ��������� ����');
        End;
    End;

    IsCorrect := False;
    While Not IsCorrect Do
    Begin
        Writeln('������� �������� ������� ������� ������������ �� ���������� 1000000000 ');
        Readln(input);
        IsCorrect := TryStrToInt(input, thirdSide);

        If Not IsCorrect Then
        Writeln('������� ������ ���� ����� ������, ��������� ����');

        If IsCorrect And (thirdSide > UpperLimitOfInput) Then Begin
            IsCorrect := False;
            Writeln('�������� �� ������ ��������� 1000000000, ��������� ����');
        End;

        If IsCorrect And (thirdSide < 0) Then Begin
            IsCorrect := False;
            Writeln('�������� �� ������ ���� �������������, ��������� ����');
        End;
    End;

    FirstSideSqr  := FirstSide  * FirstSide;
    SecondSideSqr := SecondSide * SecondSide;
    ThirdSideSqr  := ThirdSide  * ThirdSide;

    If ((FirstSide < (SecondSide + ThirdSide)) And (SecondSide < (FirstSide + ThirdSide)) And (ThirdSide < (FirstSide + SecondSide))) And ((Not (FirstSide = 0)) And (Not (SecondSide = 0)) And (Not (ThirdSide = 0))) Then
    Begin
        If (FirstSideSqr = SecondSideSqr + ThirdSideSqr) Or (SecondSideSqr = FirstSideSqr + ThirdSideSqr) Or (ThirdSideSqr = FirstSideSqr + SecondSideSqr) Then
            Writeln('����������� �������������')
        Else
            Writeln('����������� �� �������������');
    End Else
    Writeln('����������� �� ����������');

    Readln;
End.
