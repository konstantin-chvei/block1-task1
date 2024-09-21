Program Fibonacci;

uses
  System.SysUtils;

Var
    ValueN, First, Result, Temp, I:Integer;
    IsCorrect:Boolean;
Const
    UPPER_LIMIT_INPUT:Integer = 45;
Begin
    Writeln('Задание: найти  n-ый  член  ряда  Фибоначчи,  элементы  которого вычисляются по формулам:');
    Writeln('   a1=a2=1;   ai=ai-1 + ai-2,  (i>2).');
    First := 1;
    Temp := 0;
    Result := 0;
    ValueN := 0;
    IsCorrect := False;
    While Not IsCorrect Do
    Begin
        WriteLn('Введите номер члена ряда Фибоначчи, не превышающее 45');
        Try
            Readln(ValueN);
            IsCorrect := True;
        Except
            WriteLn('Неверный ввод, повторите попытку');
        End;
        If(ValueN > UPPER_LIMIT_INPUT) Then
        Begin
            WriteLn('Вы ввели слишком большое число, повторите попытку');
            IsCorrect := False;
        End;
        If(ValueN < 1) Then
        Begin
            WriteLn('Член ряда  Фибоначчи с таким номером не существует, повторите попытку');
            IsCorrect := False;
        End;
    End;
    For I := 1 To ValueN Do Begin
	    Temp := Result + First;
	    First := Result;
	    Result := Temp;
    End;
    Writeln('Значение члена ряда Фибоначчи с номером ', ValueN,' равно: ', Result);
    Readln;
End.
