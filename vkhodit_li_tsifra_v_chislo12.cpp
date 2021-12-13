#include <iostream>
using namespace std;
int main()
{
    int n, z,k1;
    setlocale(LC_ALL, "ru");
    cin >> n;
    cin >> z;
    while (n != 0)
    {
        k1 = n % 10;
        n = n / 10;
        if (k1 == z)
        {
            cout << "да, входит";
            break;
        }

    }
}

