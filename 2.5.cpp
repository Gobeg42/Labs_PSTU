#include <iostream>
using namespace std;
int main()
{
    float n, stars;
    cin >> n;
    stars = 1;
    if (n > 2 and n==round(n))
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= stars; j++)
            {
                cout<< "*";
            }
            cout << endl;
            stars = stars + 1;
        }
    }
    return 0;
}

