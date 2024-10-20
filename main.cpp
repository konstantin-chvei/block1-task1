#include <iostream>

void main()
{
	setlocale(LC_ALL, "ru-RU");
	int h;
	int n;
	float arrayOfTowers[10][2];
	bool isCorrect;
	isCorrect = false;
	std::cout << "В начале координат (0;0) стоит башня0 высоты h.\nЗадано n башен двумя числами(x;h), где h – высота.Башня всегда выше оси X.\nПодсчитать количество башен, которые видны с башни0.\n";

	while (!isCorrect)
	{
		std::cout << "Введите высоту бышни0\n";
		std::cin >> h;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cout << "Неверный ввод, повторите попытку\n";
			while (std::cin.peek() != '\n')
				std::cin.ignore();
		}
		else if (std::cin.peek() != '\n')
		{
			std::cout << "Поле ввода не должно содержать посторонних символов, повторите попытку\n";
			while (std::cin.peek() != '\n')
				std::cin.ignore();
		}
		else
		{
			while (std::cin.peek() != '\n')
				std::cin.ignore();
			isCorrect = true;
		}
	}
	isCorrect = false;
	while (!isCorrect)
	{
		std::cout << "Введите количество башен\n";
		std::cin >> n;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cout << "Неверный ввод, повторите попытку\n";
			while (std::cin.peek() != '\n')
				std::cin.ignore();
		}
		else if (std::cin.peek() != '\n')
		{
			std::cout << "Поле ввода не должно содержать посторонних символов, повторите попытку\n";
			while (std::cin.peek() != '\n')
				std::cin.ignore();
		}
		else
		{
			while (std::cin.peek() != '\n')
				std::cin.ignore();
			isCorrect = true;
		}
	}
	arrayOfTowers[0][0] = 0;
	arrayOfTowers[0][1] = h;
	isCorrect = false;
	for (int i = 1; i < n + 1; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			std::cin >> arrayOfTowers[i][j];
		}
	}
	int countOfTowers = 1;
	int indexOfHigher = 1;
	int firstTower = 0;
	for (int i = 2; i < n + 1; i++)
	{
		if ((arrayOfTowers[i][1] - arrayOfTowers[indexOfHigher][1]) >=
			((arrayOfTowers[i][0] - arrayOfTowers[firstTower][0]) *
				(arrayOfTowers[indexOfHigher][1] - arrayOfTowers[firstTower][1])) /
			(arrayOfTowers[indexOfHigher][0] - arrayOfTowers[firstTower][0]))
		{
			countOfTowers++;
			indexOfHigher = i;
			std::cout << "true" << std::endl;
		}
		else
		{
			std::cout << "false" << std::endl;
		}
	}
	std::cout << countOfTowers << std::endl;
}
