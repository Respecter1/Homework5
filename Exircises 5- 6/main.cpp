#include <iostream>
/*
5. Напишіть функцію, яка приймає два параметри типу unsigned short int і повертає результат ділення першого параметра на другий.
Функція не повинна виконувати операцію поділу, якщо друге число дорівнює нулю, але в цьому випадку вона має повернути значення -1.

*/
short int divide(unsigned short int number1, unsigned short int number2)//тип функції short int бо unsigned short int без знаковий тип даних 
{
	return number2 != 0 ? number1 / number2 : -1;
}

/*
6. Напишіть програму, яка запитує у користувача два числа і викликає функцію, записану при виконанні вправи 5.
Виведіть результат або повідомлення про помилку, якщо функція поверне значення, що дорівнює - 1.
Домашку можна здати після терміну
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


