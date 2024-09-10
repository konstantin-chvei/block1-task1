#include <iostream>

int main()
{
	std::setlocale(LC_ALL, "ru-RU");

	int firstSide;
	int secondSide;
	int thirdSide;

	bool isCorrect;

	long firstSideSqr;
	long secondSideSqr;
	long thirdSideSqr;

	firstSide = 0;
	secondSide = 0;
	thirdSide = 0;

	isCorrect = true;

	std::cout << "Дано:\tДаны длины сторон треугольника \nЗадача:\tОпределить, является ли данный треугольник прямоугольным.\n\n";

	std::cout << "Введите значение первой стороны треугольника не певышающее 1000000000 " << std::endl;
	while (isCorrect)
	{
		std::cin >> firstSide;
		if (std::cin.fail() || firstSide < 0 || firstSide > 1000000000)
		{
			std::cin.clear();
			std::cin.ignore(INT16_MAX, '\n');

			std::cout << "Введено не корректное число: ";

			if (firstSide < 0)
			{
				std::cout << "сторона не может быть отрицательной или равной нулю, повторите ввод\n";
			}
			else if (firstSide > 1000000001)
			{
				std::cout << "сторона не может превышать 1000000000, повторите ввод\n";
			}
			else
			{
				std::cout << "сторона должна быть числом, повторите ввод\n";
			}

		}
		else if (std::cin.peek() != '\n') {
			std::cout << "Введено некорректное число, повторите попытку\n";
			std::cin.ignore(INT_MAX, '\n');
		}
		else
		{
			std::cin.ignore(INT16_MAX, '\n');
			isCorrect = false;
		}
	}

	isCorrect = true;

	std::cout << "Введите значение второй стороны треугольника не певышающее 1000000000 " << std::endl;
	while (isCorrect)
	{
		std::cin >> secondSide;
		if (std::cin.fail() || secondSide < 0 || secondSide > 1000000000)
		{
			std::cin.clear();
			std::cin.ignore(INT16_MAX, '\n');

			std::cout << "Введено не корректное число: ";

			if (secondSide < 0)
			{
				std::cout << "сторона не может быть отрицательной или равной нулю, повторите ввод\n";
			}
			else if (secondSide > 1000000001)
			{
				std::cout << "сторона не может превышать 1000000000, повторите ввод\n";
			}
			else
			{
				std::cout << "сторона должна быть числом, повторите ввод\n";
			}
		}
		else if (std::cin.peek() != '\n') {
			std::cout << "Введено некорректное число, повторите попытку\n";
			std::cin.ignore(INT_MAX, '\n');
		}
		else
		{
			std::cin.ignore(INT16_MAX, '\n');
			isCorrect = false;
		}
	}

	isCorrect = true;

	std::cout << "Введите значение третьей стороны треугольника не певышающее 1000000000 " << std::endl;
	while (isCorrect)
	{
		std::cin >> thirdSide;
		if (std::cin.fail() || thirdSide < 0 || thirdSide > 1000000000)
		{
			std::cin.clear();
			std::cin.ignore(INT16_MAX, '\n');

			std::cout << "Введено не корректное число ";

			if (thirdSide < 0)
			{
				std::cout << "сторона не может быть отрицательной или равной нулю, повторите ввод\n";
			}
			else if (thirdSide > 1000000001)
			{
				std::cout << "сторона не может превышать 1000000000, повторите ввод\n";
			}
			else
			{
				std::cout << "сторона должна быть числом, повторите ввод\n";
			}
		}
		else if (std::cin.peek() != '\n') {
			std::cout << "Введено некорректное число, повторите попытку\n";
			std::cin.ignore(INT_MAX, '\n');
		}
		else
		{
			std::cin.ignore(INT16_MAX, '\n');
			isCorrect = false;
		}
	}

	firstSideSqr = firstSide * firstSide;
	secondSideSqr = secondSide * secondSide;
	thirdSideSqr = thirdSide * thirdSide;

	if (firstSideSqr == secondSideSqr + thirdSideSqr || secondSideSqr == firstSideSqr + thirdSideSqr || thirdSideSqr == firstSideSqr + secondSideSqr)
	{
		std::cout << "Треугольник прямоугольный\n";
	}
	else
	{
		std::cout << "Треугольник не прямоугольный\n";
	}
}
