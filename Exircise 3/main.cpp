//3. Баги: що неправильно у цій функції ?

#include <iostream>
using namespace std;

unsigned short int myFunc(unsigned short int x);
int main()
{
    unsigned short int x=5, y;
    y = myFunc(x);//підставляти тип данних неможна y = myFunc(int);
    cout << "x: " << x << "y: " << y << "\n";
}
unsigned short int myFunc(unsigned short int x)//виправив тип данних функції для коректної роботи подставивши "unsigned short int"
{
    return (4 * x);//Void не повертає нічого 
}
