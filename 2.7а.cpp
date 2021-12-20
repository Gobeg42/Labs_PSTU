#include <iostream>

using namespace std;

int main()
{
	float n, b;
	cin >> n;
	b = sqrt(n);
	if (b == round(b))
	{
		for (int i = 0; i < b; i++)
		{
			for (int i = 0; i < b; i++)
			{
				cout << "*";
			}
			cout << endl;
		}
	}
	return 0;
}