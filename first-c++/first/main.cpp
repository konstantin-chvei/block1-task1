#include <iostream>

int main()
{
	std::setlocale(LC_ALL, "ru-RU");

	int firstSide;
	int secondSide;
	int thirdSide;

	bool isCorrect;

	long firstSideSqr;
	long secontSideSqr;
	long thirdSideSqr;

	firstSide  = 0;
	secondSide = 0;
	thirdSide  = 0;

	isCorrect = true;

	std::cout << "����:\t���� ����� ������ ������������ \n������:\t����������, �������� �� ������ ����������� �������������.\n\n";

	std::cout << "������� �������� ������ ������� ������������ �� ���������� 1000000000 " << std::endl;
	while (isCorrect)
	{
		std::cin >> firstSide;
		if (std::cin.fail() || firstSide < 0 || firstSide > 1000000000)
		{
			std::cin.clear();
			std::cin.ignore(INT16_MAX, '\n');

			std::cout << "������� �� ���������� �����: ";

			if (firstSide < 0)
			{
				std::cout << "������� �� ����� ���� ������������� ��� ������ ����, ��������� ����\n";
			}
			else if (firstSide > 1000000001)
			{
				std::cout << "������� �� ����� ��������� 1000000000, ��������� ����\n";
			}
			else
			{
				std::cout << "������� ������ ���� ������, ��������� ����\n";
			}

		}
		else
		{
			std::cin.ignore(INT16_MAX, '\n');
			isCorrect = false;
		}
	}
	
	isCorrect = true;

	std::cout << "������� �������� ������ ������� ������������ �� ���������� 1000000000 " << std::endl;
	while (isCorrect)
	{
		std::cin >> secondSide;
		if (std::cin.fail() || secondSide < 0 || secondSide > 1000000000)
		{
			std::cin.clear();
			std::cin.ignore(INT16_MAX, '\n');

			std::cout << "������� �� ���������� �����: ";

			if (secondSide < 0)
			{
				std::cout << "������� �� ����� ���� ������������� ��� ������ ����, ��������� ����\n";
			}
			else if (secondSide > 1000000001)
			{
				std::cout << "������� �� ����� ��������� 1000000000, ��������� ����\n";
			}
			else
			{
				std::cout << "������� ������ ���� ������, ��������� ����\n";
			}
		}
		else
		{
			std::cin.ignore(INT16_MAX, '\n');
			isCorrect = false;
		}
	}

	isCorrect = true;

	std::cout << "������� �������� ������� ������� ������������ �� ���������� 1000000000 " << std::endl;
	while (isCorrect)
	{
		std::cin >> thirdSide;
		if (std::cin.fail() || thirdSide < 0 || thirdSide > 1000000000)
		{
			std::cin.clear();
			std::cin.ignore(INT16_MAX, '\n');

			std::cout << "������� �� ���������� ����� ";

			if (thirdSide < 0)
			{
				std::cout << "������� �� ����� ���� ������������� ��� ������ ����, ��������� ����\n";
			}
			else if (thirdSide > 1000000001)
			{
				std::cout << "������� �� ����� ��������� 1000000000, ��������� ����\n";
			}
			else
			{
				std::cout << "������� ������ ���� ������, ��������� ����\n";
			}
		}
		else
		{
			std::cin.ignore(INT16_MAX, '\n');
			isCorrect = false;
		}
	}

	firstSideSqr  = firstSide  * firstSide;
	secontSideSqr = secondSide * secondSide;
	thirdSideSqr  = thirdSide  * thirdSide;

	if (firstSideSqr == secontSideSqr + thirdSideSqr || secontSideSqr == firstSideSqr + thirdSideSqr || thirdSideSqr == firstSideSqr + secontSideSqr)
	{
		std::cout << "����������� �������������\n";
	}
	else
	{
		std::cout << "����������� �� �������������\n";
	}
}
