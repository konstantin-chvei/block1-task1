#include <iostream>

void main()
{
	setlocale(LC_ALL, "ru-RU");
	int h;
	int n;
	const int UPPER_LIMIT_ARRAY = 20;
	const int LOVER_LIMIT_ARRAY = 2;
	const int UPPER_LIMIT_H = 10000;
	const int LOVER_LIMIT_H = 0;
	const int UPPER_LIMIT_X = 10000;
	const int LOVER_LIMIT_X = 0;
	int countOfTowers = 1;
	int indexOfHigher = 1;
	int firstTower = 0;
	float arrayOfTowers[10][2];
	bool isCorrect;
	isCorrect = false;
	h = 0;
	n = 0;
	std::cout << "Условие:\nВ начале координат (0;0) стоит башня0 высоты h.\nЗадано n башен двумя числами(x;h), где h – высота. Башня всегда выше оси X.\nПодсчитать количество башен, которые видны с башни0.\n";
	while (!isCorrect)
	{
		std::cout << "Введите высоту башни, в диапазоне от " << LOVER_LIMIT_H << " до " << UPPER_LIMIT_H << std::endl;
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
		else if (h > UPPER_LIMIT_H || h < LOVER_LIMIT_H)
		{
			std::cout << "Введённое вами число не входит в допустимые границы, повторите попытку\n";
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
		std::cout << "Введите количество башен, в диапазоне от " << LOVER_LIMIT_ARRAY << " до " << UPPER_LIMIT_ARRAY << std::endl;
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
		else if (n > UPPER_LIMIT_H || n < LOVER_LIMIT_H)
		{
			std::cout << "Введённое вами число не входит в допустимые границы, повторите попытку\n";
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
	std::cout << "Введите характеристики башен " << std::endl;
	for (int i = 1; i < n + 1; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			isCorrect = false;
			while (!isCorrect)
			{
				std::cout << "Введите параметр башни, в диапазоне от " << LOVER_LIMIT_H << " до " << UPPER_LIMIT_H << std::endl;
				std::cin >> arrayOfTowers[i][j];
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
				else if (arrayOfTowers[i][j] > UPPER_LIMIT_H || arrayOfTowers[i][j] < LOVER_LIMIT_H)
				{
					std::cout << "Введённое вами число не входит в допустимые границы, повторите попытку\n";
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
		}
	}
	for (int i = 2; i < n + 1; i++)
	{
		if ((arrayOfTowers[i][1] - arrayOfTowers[indexOfHigher][1]) >=
			((arrayOfTowers[i][0] - arrayOfTowers[firstTower][0]) *
				(arrayOfTowers[indexOfHigher][1] - arrayOfTowers[firstTower][1])) /
			(arrayOfTowers[indexOfHigher][0] - arrayOfTowers[firstTower][0]))
		{
			countOfTowers++;
			indexOfHigher = i;
		}
	}
	std::cout << countOfTowers << std::endl;
}
