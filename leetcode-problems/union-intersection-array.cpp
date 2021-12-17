#include<iostream>
using namespace std;

template <typename T>
void printUnion(T arr1[], int m, T arr2[], int n) {
    int i = 0, j = 0;
    while(i<m && j<n) {
        if(arr1[i] < arr2[j])
            cout << arr1[i++] << " ";
        else if(arr2[j] < arr1[i])
            cout << arr2[j++] << " ";
        else {
            cout << arr1[i++] << " ";
            j++;
        }
    }

    while(i < m) cout << arr1[i++] << " ";
    while(j < n) cout << arr2[j++] << " ";
    cout << endl;
}

template <typename T>
void printIntersection(T arr1[], int m, T arr2[], int n) {
    int i = 0, j = 0;
    while(i<m && j<n) {
        if(arr1[i] < arr2[j]) i++;
        else if(arr2[j] < arr1[i]) j++;
        else {
            cout << arr1[i++] << " ";
            j++;
        }
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    int arr1[] = {1,2,5,6,8};
    int arr2[] = {1,2,3,4,7,9,10};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    printUnion(arr1, m, arr2, n);
    printIntersection(arr1, m, arr2, n);
    return 0;
}