#include <iostream>
#include <limits>

int getInt()
{
	int value{0};

	static int sideNumber{ 0 };
	sideNumber++;

	while (true)
	{
		std::cout << "Введите длинну сороны номер " << sideNumber << std::endl;
		std::cin >> value;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			std::cout << "введено не корректное число, повторите ввод \n\n";
		}
		else
		{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			break;
		}
	}
	return value;
}

int main()
{
	std::setlocale(LC_ALL, "ru-RU");
	int firstSide{ 0 }, secondSide{ 0 }, thirdSide{ 0 };

	firstSide  = getInt();
	secondSide = getInt();
	thirdSide  = getInt();

	int maxSide = firstSide;

	if (secondSide > maxSide)
		maxSide = secondSide;

	if (thirdSide > maxSide)
		maxSide = thirdSide;

	if ((maxSide * maxSide == firstSide * firstSide + secondSide * secondSide) ||
		(maxSide * maxSide == firstSide * firstSide + thirdSide * thirdSide)   || 
		(maxSide * maxSide == secondSide * secondSide + thirdSide * thirdSide))
	{
		std::cout << "треугольник прямоугольный\n";
	}
	else
	{
		std::cout << "треугольник не прямоугольный\n";
	}

	return 0;
}