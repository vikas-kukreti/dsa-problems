#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int size, int value)
{
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == value)
        {
            return mid;
        }
        else if (value > arr[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[] = {10, 20, 30, 11};
    int size = sizeof(arr) / sizeof(int);
    sort(arr, arr + size);

    int* start = arr;
    int* end = arr + size - 1;
    
    while(start <= end) {
        cout << *start << " ";
        start++;
    }
    return 0;
}
