#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b, c, d;

	cout << "\n������ ������� ���� - ";
	cin >> a;

	cout << "\n������ ���� ���� � 1-� ������? - ";
	cin >> b;

	d = a / b;
	cout << "\nʳ������ ������ ������ - " << d << "\n";

	c = a % b;
	cout << "\nʳ������ ����, �� ���������� - " << c << "\n";

	system("pause");
	return 0;
}