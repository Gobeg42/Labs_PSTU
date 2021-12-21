#include <iostream>
#include <cmath>

using namespace std;

// f(x) = 2x^3 - 3x - 16
// f'(x) = 6x^2-3
// [1, 2]
// f(1) = 8 - 3 - 16 = -11
// f(1) * f(2) < 0

int main()
{
    setlocale(LC_ALL, "rus");
    float a, b, c;
    float fA, fB, fC;
    double eps = 0.000001;
    a = 0;
    b = 3;
    while (b - a > eps)
    {
        c = (a + b) / 2;
        fA = (2*(pow(a, 3)) - (3*a) - 16);
        fB = (2*(pow(b, 3)) - (3*b) - 16);
        fC = (2*(pow(c, 3)) - (3*c) - 16);
        if (fA * fC < 0) { b = c; }
        else if (fC * fB < 0) { a = c; }
        else { cout << "Что-то не то!" << endl; }
    }
    cout << "Корни: " << a << "; " << b << endl;
    return 0;
}


