#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru-RU");

	int valueN;
	int first;
	int result;
	int temp;
	const int UPPER_LIMIT_INPUT = 45;
	bool isCorrect;
	first = 1;
	temp = 0;
	result = 0;
	isCorrect = false;
	std::cout << "�����  n-��  ����  ����  ���������,  ��������  �������� ����������� �� ��������:\n   a1=a2=1;   ai=ai-1 + ai-2,  (i>2)." << std::endl;
	while (!isCorrect)
	{
		std::cout << "������� ����� ����� ���� ���������, �� ����������� 45" << std::endl;
		std::cin >> valueN;
		if (std::cin.fail() || valueN < 0 || valueN > UPPER_LIMIT_INPUT)
		{
			std::cin.clear();
			while (std::cin.peek() != '\n')
				std::cin.ignore();
			std::cout << "������� �� ���������� �����: " << std::endl;
			if (valueN < 0)
			{
				std::cout << "����� �������� �� ����� ���� �������������, ��������� ����" << std::endl;
			}
			else if (valueN > UPPER_LIMIT_INPUT)
			{
				std::cout << "����� �������� �� ����� ��������� 45, ��������� ����" << std::endl;
			}
			else
			{
				std::cout << "����� �������� ������ ���� ������, ��������� ����" << std::endl;
			}
		}
		else if (std::cin.peek() != '\n') {
			std::cout << "������� ������������ �����, ��������� �������" << std::endl;
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
	for (int i = 0; i < valueN; i++)
	{
		temp = result + first;
		first = result;
		result = temp;
	}
	std::cout << "�������� ����� ���� ��������� � ������� " << valueN << " �����: " << result << std::endl;
}