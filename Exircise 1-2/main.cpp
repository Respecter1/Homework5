/*
	1. �������� �������� ��� ������� � ��'�� Perimeter, 
��� ������� �������� ���� unsigned long int �� ������ ��� ��������� ���� unsigned short int.
*/


unsigned long int Perimeter(unsigned short int, unsigned short int);


/*
2. �������� ���������� ������� Perimeter ����� � ����������� � ����� 1.
��� ���������, �� ��� �����������, ������������� ������� � ������ ������������,
� ������� ������� ���� �������� (������� ������� ���� ������� ������).
*/

unsigned long int Perimeter(unsigned short int length, unsigned short int width) 
{
	//��� �� ���� ������������ � ������������ static_cast<unsigned long int>
	return 2 * (static_cast<unsigned long int>(length) + static_cast<unsigned long int>(width));
}


