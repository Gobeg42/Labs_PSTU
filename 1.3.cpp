#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	float a, i;
	cout << "Введите число";
	cin >> a;
	if (a < 5)
	{
		i = a * 3;
	}
	else if ((a >= 5) and (a <= 7))
	{
		i = a / 10;
	}
	else
	{
		i = a + 3;
	}
	cout <<"Ваше итоговое число"<< i;
}