#include<iostream>

void maxMin(int arr[], int size) {
    if(size == 0) {
        std::cout << "ERROR: Empty array provided!" << std::endl;
        return;
    }
    int max = arr[0], min = arr[0];
    for(int i=1 ;i<size; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    std::cout << "Min = " << min << std::endl;
    std::cout << "Max = " << max << std::endl;
}

int main(int argc, char const *argv[])
{
    int arr[] = {23, 345, 34, 675, 34, 2};
    maxMin(arr, 6);
    return 0;
}