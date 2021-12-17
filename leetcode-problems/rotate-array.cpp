#include <stdio.h>

void rotateByOne(int arr[], int size) {
    int first = arr[0];
    for(int i=1; i<size; i++) {
        arr[i-1] = arr[i];
    }
    arr[size - 1] = first;
}

void rotate(int arr[], int count, int size) {
    for(int i=0; i<count; i++) {
        rotateByOne(arr, size);
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5}, i;
    rotate(arr, 2, 5);
    for (i = 0; i < 5; i++)
        printf("%d  ", arr[i]);
 
    return 0;
}