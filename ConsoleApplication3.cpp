#include <iostream>
using namespace std;
int main()
{
    float n,j,b;
    cin >> n;
    b = sqrt(n);
    if (b == round(b))
    {
        for (int i = 1; i <= b; i++)
        {
            for (int j = 1; j <= b; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    return 0;
}


