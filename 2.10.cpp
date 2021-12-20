#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int n, k;
	int max = 0;
	cout << "Введите количество элементов последовательности: " << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		if (k > max)
		{
			max = k;
		}
	}
	cout << "Наибольший элемент последовательности: " << max;
	return 0;
}