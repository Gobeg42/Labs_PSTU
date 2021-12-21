#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Введите два числа";
	int a, b;
	cin >> a >> b;
	if (b != 0)
	{
		a = a / b;
		cout << a;
	}
	else
	{
		cout << "Делитель = 0";
	}
}