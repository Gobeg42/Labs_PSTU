


#include <iostream>

using namespace std;

int main()
{
    int const SIZE = 6;
    int arr[] = { -3,0,-5,12,8,3 };
    int j;
   
    for (int i = 1; i < SIZE; i++)
    {
       int tmp = arr[i];
        for (j = i - 1; j >= 0 && arr[j] > tmp; j--)
        {
            arr[j + 1] = arr[j];
            arr[j] = -9999;
        }
        arr[j + 1] = tmp;
    }
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
    

}
