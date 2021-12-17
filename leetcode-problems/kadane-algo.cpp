#include <iostream>
#include <climits>
using namespace std;

template <typename T>
T maxContinuosSum(T arr[], int size) {
    T sumTillNow = 0, max = INT_MIN;

    for(int i=0; i<size; i++) {
        sumTillNow += arr[i];
        if(max < sumTillNow) max = sumTillNow;
        if(sumTillNow < 0) sumTillNow = 0;
    }
    return max;
}

int main(int argc, char const *argv[])
{
    int arr[] = {-22, -5, -1, -7};
    cout << maxContinuosSum(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}
