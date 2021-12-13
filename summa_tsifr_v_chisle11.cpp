#include <iostream>
using namespace std;
int main()
{
	int n,s,k1;
	s = 0;
	cin >> n;
	while (n != 0)
	{
		k1 = n % 10;
		n = n / 10;
		s = s + k1;
	}
	cout << s;
}

