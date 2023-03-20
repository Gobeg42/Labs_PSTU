

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int const SIZE = 5;
    int arr[SIZE];
    int maxi, mini;
    for (int i = 0; i < SIZE; i++)//заполняю массив рандомными значениями
    {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++)
    {
        maxi = i;
        mini = i;
        for (int j = 0; j < SIZE; j++)
        {
            if (arr[j] > arr[maxi])
                maxi = j;
            if (arr[j] < arr[mini])
                mini = j;
        }
        swap(arr[maxi], arr[mini]);//меняю максимальное и минимальное значение местами
    }
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sum = sum + arr[i];//суммирую все числа в массиве
    }
    int sr = (float)sum / SIZE;//среднее значение
    for (int i = 0; i < SIZE; i++)
    {
        if ((arr[i] + sr % 10) < sr)
            cout << arr[i] << " ";
    }
}
