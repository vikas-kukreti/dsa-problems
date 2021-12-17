#include <iostream>
using namespace std;

template <typename T>
void print(T arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << " -> " << arr[i] << endl;
    }
}

template <typename T>
void sort012(T arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if(arr[i] > arr[i+1]) {
            T temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }        
    }
    for (int i = 0; i < size - 1; i++)
    {
        if(arr[i] > arr[i+1]) {
            T temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }        
    }
    for (int i = 0; i < size - 1; i++)
    {
        if(arr[i] > arr[i+1]) {
            T temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }        
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 2, 0, 2, 1};
    sort012(arr, 6);
    print(arr, 6);

    return 0;
}