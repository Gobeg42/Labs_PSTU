#include <iostream>
using namespace std;
int main()
{
    int n, i, space;
    cin >> n;
    space = n - 2;
    if (n >= 3)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i == 1 or i == n)
            {
                for (int j = 1; j <= n; j++)
                {
                    cout << "*";
                }
            }
            else
            {
                cout << "*";
                for (int b = 1; b <= space; b++)
                {
                    cout << " ";
                }
                cout << "*";
            }
            cout << endl;
        }
    }
}


