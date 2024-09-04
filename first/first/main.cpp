#include <iostream>
#include <limits>

int main()
{
	std::setlocale(LC_ALL, "ru-RU");

	int firstSide{ 0 }, secondSide{ 0 }, thirdSide{ 0 };
	std::cout << "введите значение первой стороны треугольника не певышающее 13000000 " << std::endl;
	bool firstChecking{ true };
	while (firstChecking)
	{
		std::cin >> firstSide;
		if (std::cin.fail() || firstSide < 0 || firstSide >= 13000000)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			std::cout << "введено не корректное число, повторите ввод \n\n";
		}
		else
		{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			firstChecking = false;
		}
	}

	std::cout << "введите значение второй стороны треугольника не певышающее 13000000 " << std::endl;
	bool secondChecking{ true };
	while (secondChecking)
	{
		std::cin >> secondSide;
		if (std::cin.fail() || secondSide < 0 || secondSide >= 13000000)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			std::cout << "введено не корректное число, повторите ввод \n\n";
		}
		else
		{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			secondChecking = false;
		}
	}

	std::cout << "введите значение третьей стороны треугольника не певышающее 13000000 " << std::endl;
	bool thirdChecking{ true };
	while (thirdChecking)
	{
		std::cin >> thirdSide;
		if (std::cin.fail() || thirdSide < 0 || thirdSide >= 13000000)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			std::cout << "введено не корректное число, повторите ввод \n\n";
		}
		else
		{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			thirdChecking = false;
		}
	}

	double firstSideSqr  = firstSide  * firstSide;
	double secontSideSqr = secondSide * secondSide;
	double thirdSideSqr  = thirdSide  * thirdSide;

	bool answer = (firstSideSqr == secontSideSqr + thirdSideSqr || secontSideSqr == firstSideSqr + thirdSideSqr || thirdSideSqr == firstSideSqr + secontSideSqr);

	if (answer)
	{
		std::cout << "треугольник прямоугольный\n";
	}
	else
	{
		std::cout << "треугольник не прямоугольный\n";
	}
}
