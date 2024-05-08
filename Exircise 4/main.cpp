//4. Баги: що неправильно у цій функції ?


#include <iostream>
using namespace std;

int myFunc(unsigned short int x);

int main()
{
    unsigned short int x = 5;// х нельзя підставляти не ініціалізовану змінну
    unsigned short int y = myFunc(x);// об'явив і ініцілізував тут змінну
    cout << "x: " << x << " y: " << y << "\n";

    return 0;// програма працює коректно.
}

int myFunc(unsigned short int x)//крапка з комою тут не потрібна 
{
    return (4 * x);
}
