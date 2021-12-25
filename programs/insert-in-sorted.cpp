#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> arr) {
    for(int i: arr) {
        cout << i << " ";
    }
}

void insert(vector<int> &arr, int x) {
    int i = arr.size() - 1;
    while(i >= 0 && arr[i] > x) {
        arr[i+1] = arr[i];
        i--;
    }
    arr[i+1] = x;
}
int main(int argc, const char** argv) {
    vector<int> arr = {10, 24, 64, 124, 455, 636};
    insert(arr, 30);
    print(arr);

    return 0;
}