#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	float x, a, b,d, c,x1,x2;
	cout << "Дано уравнение вида ax^2+bx+c=0"<< endl;
	cout << "Введите коэффициенты a,b,c: ";
	cin >> a >> b >> c;
	d = pow(b, 2) - 4 * a * c;
	x1 = (- b + sqrt(d)) / (2 * a);
	x2 = (-b - sqrt(d)) / (2 * a);
	if (d == 0)
	{
		cout << x1;
	}
	if (d < 0)
	{
		cout << "решений нет";
	}
	if (d > 0)
	{
		cout << x1 << " " << x2;
	}
}


