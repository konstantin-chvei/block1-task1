#include <iostream>

int main()
{
	std::setlocale(LC_ALL, "ru-RU");

	int firstSide;
	int secondSide;
	int thirdSide;
	int upperLimitOfInput;

	bool isCorrect;

	long firstSideSqr;
	long secondSideSqr;
	long thirdSideSqr;

	firstSide = 0;
	secondSide = 0;
	thirdSide = 0;
	upperLimitOfInput = 1000000000;

	isCorrect = true;

	std::cout << "����:\t���� ����� ������ ������������ \n������:\t����������, �������� �� ������ ����������� �������������.\n\n";

	std::cout << "������� �������� ������ ������� ������������ �� ���������� 1000000000 " << std::endl;
	while (isCorrect)
	{
		std::cin >> firstSide;
		if (std::cin.fail() || firstSide < 0 || firstSide > upperLimitOfInput)
		{
			std::cin.clear();
			std::cin.ignore(INT16_MAX, '\n');

			std::cout << "������� �� ���������� �����: ";

			if (firstSide < 0)
			{
				std::cout << "������� �� ����� ���� �������������, ��������� ����\n";
			}
			else if (firstSide > upperLimitOfInput)
			{
				std::cout << "������� �� ����� ��������� 1000000000, ��������� ����\n";
			}
			else
			{
				std::cout << "������� ������ ���� ������, ��������� ����\n";
			}

		}
		else if (std::cin.peek() != '\n') {
			std::cout << "������� ������������ �����, ��������� �������\n";
			std::cin.ignore(INT_MAX, '\n');
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
		if (std::cin.fail() || secondSide < 0 || secondSide > upperLimitOfInput)
		{
			std::cin.clear();
			std::cin.ignore(INT16_MAX, '\n');

			std::cout << "������� �� ���������� �����: ";

			if (secondSide < 0)
			{
				std::cout << "������� �� ����� ���� �������������, ��������� ����\n";
			}
			else if (secondSide > upperLimitOfInput)
			{
				std::cout << "������� �� ����� ��������� 1000000000, ��������� ����\n";
			}
			else
			{
				std::cout << "������� ������ ���� ������, ��������� ����\n";
			}
		}
		else if (std::cin.peek() != '\n') {
			std::cout << "������� ������������ �����, ��������� �������\n";
			std::cin.ignore(INT_MAX, '\n');
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
		if (std::cin.fail() || thirdSide < 0 || thirdSide > upperLimitOfInput)
		{
			std::cin.clear();
			std::cin.ignore(INT16_MAX, '\n');

			std::cout << "������� �� ���������� ����� ";

			if (thirdSide < 0)
			{
				std::cout << "������� �� ����� ���� �������������, ��������� ����\n";
			}
			else if (thirdSide > upperLimitOfInput)
			{
				std::cout << "������� �� ����� ��������� 1000000000, ��������� ����\n";
			}
			else
			{
				std::cout << "������� ������ ���� ������, ��������� ����\n";
			}
		}
		else if (std::cin.peek() != '\n') {
			std::cout << "������� ������������ �����, ��������� �������\n";
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

	if (firstSide < (secondSide + thirdSide) && secondSide < (firstSide + thirdSide) && thirdSide < (secondSide + firstSide) && (firstSide != 0 && secondSide != 0 && thirdSide != 0))
	{
		if (firstSideSqr == secondSideSqr + thirdSideSqr || secondSideSqr == firstSideSqr + thirdSideSqr || thirdSideSqr == firstSideSqr + secondSideSqr)
		{
			std::cout << "����������� �������������\n";
		}
		else
		{
			std::cout << "����������� �� �������������\n";
		}
	}
	else
	{
		std::cout << "����������� �� ����������\n";
	}

	std::cout << "������� ����� �������, ����� ������� ��� ����:\n";
	std::cin.get();
}