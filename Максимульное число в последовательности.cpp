#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int n, k;
    int max = -1000000;
    int min = 1000000;
    cout << "Введите длинну последовательности" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        if (k > max)
        {
            max = k;
        }
        if (k < min)
        {
            min = k;
        }
    }
    cout << min + max;
}


