Program Fibonacci;

uses
  System.SysUtils;

Var
    ValueN, First, Result, Temp, I:Integer;
    IsCorrect:Boolean;
Const
    UPPER_LIMIT_INPUT:Integer = 45;
Begin
    Writeln('�������: �����  n-��  ����  ����  ���������,  ��������  �������� ����������� �� ��������:');
    Writeln('   a1=a2=1;   ai=ai-1 + ai-2,  (i>2).');
    First := 1;
    Temp := 0;
    Result := 0;
    ValueN := 0;
    IsCorrect := False;
    While Not IsCorrect Do
    Begin
        WriteLn('������� ����� ����� ���� ���������, �� ����������� 45');
        Try
            Readln(ValueN);
            IsCorrect := True;
        Except
            WriteLn('�������� ����, ��������� �������');
        End;
        If(ValueN > UPPER_LIMIT_INPUT) Then
        Begin
            WriteLn('�� ����� ������� ������� �����, ��������� �������');
            IsCorrect := False;
        End;
        If(ValueN < 1) Then
        Begin
            WriteLn('���� ����  ��������� � ����� ������� �� ����������, ��������� �������');
            IsCorrect := False;
        End;
    End;
    For I := 1 To ValueN Do Begin
	    Temp := Result + First;
	    First := Result;
	    Result := Temp;
    End;
    Writeln('�������� ����� ���� ��������� � ������� ', ValueN,' �����: ', Result);
    Readln;
End.
