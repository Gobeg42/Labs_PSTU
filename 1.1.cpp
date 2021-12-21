#include<iostream>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "Rus");
	cout << "Введите три разных числа";
	int a, b, c;
	cin >> a >> b >> c;
	if (a>b && a>c)
	{
		cout << "Наибольшее число:" << a << endl;
	}
	if (b > a && b > c)
	{
		cout << "Наибольшее число:" << b << endl;
	}
	if (c > a && c > b)
	{
		cout << "Наибольшее число:" << c << endl;
	}

}