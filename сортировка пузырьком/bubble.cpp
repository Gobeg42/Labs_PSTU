

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int const SIZE = 9;
    int a;
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 100;
        cout << " " << arr[i];
    }
    cout << endl;
    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = 0; j < SIZE - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                a = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = a;
            }
        }
    }
    for (int i = 0; i < SIZE; i++)
    {
        cout << " " << arr[i];
    }
}

