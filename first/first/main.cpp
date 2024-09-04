#include <iostream>
#include <limits>

int main()
{
	std::setlocale(LC_ALL, "ru-RU");

	const int countOfSides = 3;
	int arrayOfSides[countOfSides]{ 0 };

	for (int i{ 0 }; i < countOfSides; i++)
	{
		bool checking{ true };
		while (checking)
		{
			std::cin >> arrayOfSides[i];
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

				std::cout << "введено не корректное число, повторите ввод \n\n";
			}
			else
			{
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				checking = false;
			}
		}
	}

	int firstSide{ arrayOfSides[0] * arrayOfSides[0] };
	int secontSide{ arrayOfSides[1] * arrayOfSides[1] };
	int thirdSide{ arrayOfSides[2] * arrayOfSides[2] };

	bool answer = (firstSide == secontSide + thirdSide || secontSide == firstSide + thirdSide || thirdSide == firstSide + secontSide);

	if (answer)
	{
		std::cout << "треугольник прямоугольный\n";
	}
	else
	{
		std::cout << "треугольник не прямоугольный\n";
	}
}
