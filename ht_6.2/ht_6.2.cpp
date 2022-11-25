#include <Windows.h>
#include <iostream>
#include <string>
#include "Counter.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Counter counter;
	std::string s;
	char c;
	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::cin >> s;
	if (s == "да") {
		int a = 0;
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> a;
		counter = Counter(a);
	}
	else counter = Counter();
	do {
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> c;
		switch (c)
		{
		case '+': counter.Increase(); break;
		case'-': counter.Decrease(); break;
		case'=': std::cout << counter.return_counter() << '\n'; break;
		default: break;
		}
	} while (c != 'x' && c != 'х'); // если введут русскую "х" вместо английской "х"
}