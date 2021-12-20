#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int n, i, tmp;
	cout << "Введите длинну последовательности" <<endl;
	cin >> n;
	bool flag = false;
	i = 1;
	while (i <= n && !flag)
	{
		cin >> tmp;
		if (tmp == 0)
		{
			i++;
		}
		else
		{
			flag = true;
		}
	}
	if (tmp > 0)
	{
		cout << "Сначала ввели положительное число";
	}
	if (tmp < 0)
	{
		cout << "Сначала ввели отрицательное число";
	}
	if (tmp == 0)
	{
		cout << "Все числа в последовательности равны 0";
	}
}

