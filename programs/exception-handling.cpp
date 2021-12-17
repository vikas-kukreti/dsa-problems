#include<iostream>
using std::cout;

void printArray(int* arr, int count) {
    if(arr == NULL) throw "NULL Pointer Provided!";
    if(count < 0) throw "Invalid Number of elements in array provided!";
    for(int i=0; i<count; i++)
        cout << arr[i] << "\t";
}

int main(int argc, char const *argv[])
{
    int* ptr = NULL;

    int arr[] = {10, 34, 64, 64};

    try {
        printArray(ptr, 4);
    } catch(const char* message) {
        cout << message;
    }
    
    return 0;
}
