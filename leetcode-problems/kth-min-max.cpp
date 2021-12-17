#include <iostream>
using namespace std;

void sort(int arr[], int size)
{
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void kthMinMax(int arr[], int size, int k)
{
    if (k > size)
    {
        cout << "Error: Invalid Arguments provided!" << endl;
        return;
    }
    sort(arr, size);
    cout << "Minimum(" << k << ") : " << arr[k - 1] << endl;
    cout << "Maximum(" << k << ") : " << arr[size - k - 1] << endl;
}

int main()
{
    int array[5] = {2, 1, 6, 98, 4};
    int k = 2;
    kthMinMax(array, 5, k);
}