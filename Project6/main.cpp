//4. ����: �� ����������� � ��� ������� ?


#include <iostream>
using namespace std;

int myFunc(unsigned short int x);

int main()
{
    unsigned short int x = 5;// � ������ ���������� �� ������������ �����
    unsigned short int y = myFunc(x);// ��'���� � ���������� ��� �����
    cout << "x: " << x << " y: " << y << "\n";

    return 0;// �������� ������ ��������.
}

int myFunc(unsigned short int x)//������ � ����� ��� �� ������� 
{
    return (4 * x);
}