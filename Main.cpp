// ������
#include<iostream>
using namespace std;

// ��������� ����������� �����

long long factorial(int num) {
	if (num <= 0)
		return 1;
	return factorial(num - 1) * num;
}
// ���������� ����� ���������

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

	// ������� ���������

	/*cout << "������� �����: ";
	cin >> n;
	cout << n << "! = " << factorial(n) << '\n';*/

	// ������ 1 ����� ���������

	cout << "������� ����� ����� ���������: ";
	cin >> n;
	cout << "����� ��������� �" << n << " = " << fibonacci(n) << '\n';

	cout << "������ 13 ����� ���������\n";
	for (int i = 0; i < 13; i++)
		cout << fibonacci(i) << ", ";
	cout << "\b\b\n";

	return 0;
}