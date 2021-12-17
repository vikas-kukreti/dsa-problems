#include <iostream>
using namespace std;

template <typename T>
void rotateByOne(T arr[], int size)
{
    T last = arr[size - 1];
    for (int i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}

template <typename T>
void printArray(T arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << " -> " << arr[i] << endl;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    rotateByOne(arr, 5);
    printArray(arr, 5);
    return 0;
}