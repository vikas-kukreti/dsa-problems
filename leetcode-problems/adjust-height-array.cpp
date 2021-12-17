#include <iostream>
#include <algorithm>

using namespace std;

template <typename T>
void printArray(T arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << " -> " << arr[i] << endl;
    }
}

int min(int a, int b) {
    if(a > b) return b;
    return a;
}

int max(int a, int b) {
    if(a > b) return a;
    return b;
}

template<typename T>
T findMinMaxDiff(T arr[], int k, int size) {
    sort(arr, arr+size);
    T minValue = arr[0], maxValue = arr[size - 1];
    T result = maxValue - minValue;

    for(int i=1; i<size; i++){
        if(arr[i] >= k) {
            maxValue = max(arr[i - 1] + k, arr[size - 1] - k);
            minValue = min(arr[0] + k, arr[i] - k);
            result = min(result, maxValue - minValue);
        }
    }
    return result;
}

int main(int argc, char const *argv[])
{
    int arr[] = {5, 5, 8, 6, 4, 10, 3, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << findMinMaxDiff(arr, 5, size);
    return 0;
}
