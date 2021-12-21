#include <iostream>
#include <cmath>

using namespace std;

// f(x) = 2x^3 - 3x - 16
// f'(x) = 6x^2-3
// f''(x) = 12x;
// [1, 2]
// ф(x) = x + λ(2x^3 - 3x - 16)
// -1/r < λ < 0, если f'(x) > 0
// 0 < λ < 1/r, если f'(x) < 0
// r = max(|f'(a)|, |f'(b)|)
// λ = -1/100 = -0.01

int main()
{
    setlocale(LC_ALL, "rus");
    float x, xPrev;
    double lambda = -0.01;
    x = 2; 
    xPrev = 0; 
    double eps = 0.000001;

    while (abs(x - xPrev) > eps)
    {
        xPrev = x;
        x = lambda * (2*(pow(xPrev, 3)) - (3*(xPrev)) - 16 + xPrev);
    }
    cout << "Корень по методу итераций: " << x << endl;
    return 0;
}

