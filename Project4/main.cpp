/*
6. �������� ��������, ��� ������ � ����������� ��� ����� � ������� �������, �������� ��� �������� ������ 5.
������� ��������� ��� ����������� ��� �������, ���� ������� ������� ��������, �� ������� - 1.
������� ����� ����� ���� ������
*/

#include <iostream>

unsigned short int divide(unsigned short int, unsigned short int);

int main()
{
	unsigned short int a = 6;
	unsigned short int b = 0;
	unsigned short int c = divide(a,b);
	
	if (c != -1)
		std::cout << "a / b = " << c;
	else
		std::cout << "Division by 0 error!!! ";

	return 0;
}

unsigned short int divide(unsigned short int x, unsigned short int y)
{
	if (x == 0 || y == 0)
	{
		return -1;
	}
	else
	{
		return x / y;
	}
}
