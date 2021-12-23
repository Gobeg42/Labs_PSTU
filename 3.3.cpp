#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int tmp;
    int arr[7];
    int range_min=2;
    int range_max = 9000;
    for (int i = 0; i < 7; i++)
    {
        arr[i] = ((double)rand() / RAND_MAX) * (range_max - range_min) + range_min;
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 7 - 1; i++)
    {
        for (int j = 0; j < 7 - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}