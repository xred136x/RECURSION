// шаблон
#include<iostream>
using namespace std;

// Факториал переданного числа

long long factorial(int num) {
	if (num <= 0)
		return 1;
	return factorial(num - 1) * num;
}
// вычисление числа фибоначчи

int fibonacci(int num) {
	if (num <= 0)
		return 0;
	if (num <= 1)
		return 1;
	return fibonacci(num - 1) + fibonacci(num - 2);
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	// Задание факториал

	/*cout << "Введите число: ";
	cin >> n;
	cout << n << "! = " << factorial(n) << '\n';*/

	// Задача 1 числа фибоначчи

	cout << "введите номер числа фибоначчи: ";
	cin >> n;
	cout << "Число фибоначчи №" << n << " = " << fibonacci(n) << '\n';

	cout << "Первые 13 чисел фибоначчи\n";
	for (int i = 0; i < 13; i++)
		cout << fibonacci(i) << ", ";
	cout << "\b\b\n";

	return 0;
}