#include<iostream>
using namespace std;

template<typename T>
T* minMax(T* arr, int size) {
    T min, max;
    min = arr[0];
    max = arr[0];
    for(int i=1; i<size; i++) {
        if(min > arr[i]) min = arr[i];
        if(max < arr[i]) max = arr[i];
    }
    T ans[] = new T[2];
    ans[0] = min;
    ans[1] = max;
    return ans;
}

int main(int argc, char const *argv[])
{
    int arr[] = {13, 5, 2, 50, 24, 99, 24, 5, 6};
    int size = sizeof(arr) / sizeof(int);
    int* ans = minMax(arr, size);
    cout << "min = " << ans[0];
    cout << "max = " << ans[1];

    delete[] ans;

    return 0;
}