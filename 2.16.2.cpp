#include <iostream>

using namespace std;

int main()
{
	int n, z, sum = 0;
	cin >> n;
	cin >> z;
	for (int i = 0; i <= n; i++)
	{
		if (i % 2 == 0 and i % z == 0)
		{
			sum += i;
		}
		if (i % 2 != 0 and i % z == 0)
		{
			sum -= i;
		}
	}
	cout << sum;
	return 0;
}