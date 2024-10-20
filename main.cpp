#include <iostream>

void main()
{
	setlocale(LC_ALL, "ru-RU");
	int h;
	int n;
	float arrayOfTowers[10][2];
	bool isCorrect;
	isCorrect = false;
	std::cout << "� ������ ��������� (0;0) ����� �����0 ������ h.\n������ n ����� ����� �������(x;h), ��� h � ������.����� ������ ���� ��� X.\n���������� ���������� �����, ������� ����� � �����0.\n";

	while (!isCorrect)
	{
		std::cout << "������� ������ �����0\n";
		std::cin >> h;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cout << "�������� ����, ��������� �������\n";
			while (std::cin.peek() != '\n')
				std::cin.ignore();
		}
		else if (std::cin.peek() != '\n')
		{
			std::cout << "���� ����� �� ������ ��������� ����������� ��������, ��������� �������\n";
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
		std::cout << "������� ���������� �����\n";
		std::cin >> n;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cout << "�������� ����, ��������� �������\n";
			while (std::cin.peek() != '\n')
				std::cin.ignore();
		}
		else if (std::cin.peek() != '\n')
		{
			std::cout << "���� ����� �� ������ ��������� ����������� ��������, ��������� �������\n";
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