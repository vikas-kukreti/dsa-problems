#include<iostream>
using namespace std;

template<typename T>
void reverse(T* arr, int size) {
    for(int i=0;i<size/2; i++) {
        int temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
}

template<typename T>
void printArray(T* arr, int last) {
    if(last > 0) {
        printArray(arr, last-1);
    }
    cout << arr[last] << "  ";
}

template<typename T>
T sumOfArray(T* arr, int size, int i = 0) {
    if(i == size) {
        return 0;
    }
    return arr[i] + sumOfArray(arr, size, i+1);
}

int main(int argc, char const *argv[])
{
    int arr[] = {13, 5, 2, 50, 24, 99, 24, 5, 6};
    int size = sizeof(arr) / sizeof(int);
    printArray(arr, size-1);
    reverse(arr, size);
    printArray(arr, size-1);
    return 0;
}
