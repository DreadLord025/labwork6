#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b, c, d;

	cout << "\nВведіть кількість учнів - ";
	cin >> a;

	cout << "\nСкільки учнів буде в 1-й шеренгі? - ";
	cin >> b;

	d = a / b;
	cout << "\nКількість повних шеренг - " << d << "\n";

	c = a % b;
	cout << "\nКількість учнів, які залишились - " << c << "\n";

	system("pause");
	return 0;
}