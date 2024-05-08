#include <iostream>
/*
5. �������� �������, ��� ������ ��� ��������� ���� unsigned short int � ������� ��������� ������ ������� ��������� �� ������.
������� �� ������� ���������� �������� �����, ���� ����� ����� ������� ����, ��� � ����� ������� ���� �� ��������� �������� -1.

*/
short int divide(unsigned short int number1, unsigned short int number2)//��� ������� short int �� unsigned short int ��� �������� ��� ����� 
{
	return number2 != 0 ? number1 / number2 : -1;
}

/*
6. �������� ��������, ��� ������ � ����������� ��� ����� � ������� �������, �������� ��� �������� ������ 5.
������� ��������� ��� ����������� ��� �������, ���� ������� ������� ��������, �� ������� - 1.
������� ����� ����� ���� ������
*/
int main()
{
	unsigned short int a, b;

	std::cout << "Enter your first number: ";
	std::cin >> a;

	std::cout << "Enter your second number: ";
	std::cin >> b;

	short int result = divide(a, b);
	
	if (result!=-1)
		std::cout << a << "/" << b << "=" << result;
	else
		std::cout << "Error!";
	
	return 0;
}


