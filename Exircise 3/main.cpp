//3. ����: �� ����������� � ��� ������� ?

#include <iostream>
using namespace std;

unsigned short int myFunc(unsigned short int x);
int main()
{
    unsigned short int x=5, y;
    y = myFunc(x);//���������� ��� ������ ������� y = myFunc(int);
    cout << "x: " << x << "y: " << y << "\n";
}
unsigned short int myFunc(unsigned short int x)//�������� ��� ������ ������� ��� �������� ������ ����������� "unsigned short int"
{
    return (4 * x);//Void �� ������� ����� 
}

