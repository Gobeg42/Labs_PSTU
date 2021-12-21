#include <iostream>
#include <cmath>

using namespace std;

// f(x) = 2x^3 - 3x - 16
// f'(x) = 6x^2 - 3
// f''(x) = 12x;
// [1, 2]
// f(b) * f''(b) > 0


int main()
{
    setlocale(LC_ALL, "rus");
    float x, xPrev;
    x = 2;
    xPrev = 0;
    double eps = 0.000001;

    while (abs(x - xPrev) > eps)
    {
        xPrev = x;
        x = xPrev - ((2*(pow(xPrev, 3)) - (3*xPrev) - 16) / (6 * pow(xPrev, 2) - 3));
    }
    cout << "Корень: " << x << endl;
    return 0;
}

