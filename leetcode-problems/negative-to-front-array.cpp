#include <iostream>
using namespace std;

template <typename T>
void moveNegative(T arr[], int start, int end)
{
    while (start <= end)
    {
        if (arr[start] < 0 && arr[end] < 0)
            start++;
        else if (arr[start] > 0 && arr[end] < 0)
        {
            T temp = arr[end];
            arr[end] = arr[start];
            arr[start] = temp;
            end--;
            start++;
        }
        else if (arr[start] > 0 && arr[end] > 0)
        {
            end--;
        }
        else
        {
            start++;
            end--;
        }
    }
}

template <typename T>
void printArray(T arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << " -> " << arr[i] << endl;
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int count = sizeof(arr) / sizeof(arr[0]);
    moveNegative(arr, 0, count - 1);
    printArray(arr, count);
    return 0;
}
