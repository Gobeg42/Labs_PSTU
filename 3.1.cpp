#include <iostream>
using namespace std;
int main()
{
	int a[20];
	int key;
	int r, range_max, range_min;
	range_min = 2;
	range_max = 412;
	for (int i = 0; i < 20; i++)
	{
		a[i] = ((double)rand() / RAND_MAX) * (range_max - range_min) + range_min;
		cout << a[i] << " ";
	}
	cout << endl;
	for (int j = 1; j < 20; j++)
	{
		key = a[j];
		int i = j - 1;
		while (i >= 0 && a[i] > key)
		{
			a[i + 1] = a[i];
			i--;
		}
		a[i + 1] = key;
	}
	for (int i = 0; i < 20; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
