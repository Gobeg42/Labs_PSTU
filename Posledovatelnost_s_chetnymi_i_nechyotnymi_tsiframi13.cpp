#include <iostream>
using namespace std;
int main()
{
    int n,k1,s;
    cin >> n;
    s = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            k1 = -i;
            s = s + k1;
        }
        else
        {
            k1 = i;
            s = s + k1;
        }
    }
    cout << s;
}


