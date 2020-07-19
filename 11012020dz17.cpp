/*
* Пользователь 	вводит с клавиатуры число.Вывести на 	экран это число в квадрате, кубе и в 4й 	степени.
*/
#include <iostream>
#include <Windows.h>;
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int a, b, c, d;
	cout << "Введите число : " << endl;
	cin >> a; //введенное число
	d = a * a; //квадрат числа
	b = a * a * a; //куб
	c = a * a * a * a; //4 степ
	cout << "Квадрат: " << d << ", куб: " << b << ", 4тая степень: " << c << "." << endl;
	return 0;
}
