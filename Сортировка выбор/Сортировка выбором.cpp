using namespace std;
#include <iostream>

int main()
{
    int const SIZE = 7;
    int arr[SIZE]{ 1,5,0,4,33,19,-2 };
    for (int i = 0; i < SIZE ; i++)
    {
        int min = i;
        for (int j = i+1 ; j < SIZE; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j; 
            }
            swap(arr[i], arr[min]);

           
        }
    }
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
}
