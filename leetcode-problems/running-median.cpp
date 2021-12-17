#include<iostream>
#include<algorithm>

using namespace std;

template<typename A>
float* runningMedian(A* arr, int size) {
    float* answers = new float[size];
    for(int i=0; i<size; i++) {
        sort(arr, arr+i+1);
        if((i+1) % 2 == 0) {
            answers[i] = float(arr[i/2] + arr[i/2 + 1]) / 2;
        } else {
            answers[i] = arr[i/2];
        }
    }
    return answers;
}

template<typename T>
void printArray(T* arr, int size) {
    for(int i=0;i<size; i++)
        cout << arr[i] << endl;
}


int main(int argc, char const *argv[])
{
    float arr[] = {2, 1, 5, 7, 2, 0, 5};
    int size = sizeof(arr) / sizeof(int);
    float* answers = runningMedian(arr, size);
    cout << "List before median: ";
    printArray(arr, size);
    cout << "Running median: ";
    printArray<float>(answers, size);
    return 0;
}
