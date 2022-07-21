#include <bits/stdc++.h>
using namespace std;

void sort(int arr[], int size)
{
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void kthMinMax(int arr[], int size, int k)
{
    if (k > size)
    {
        cout << "Error: Invalid Arguments provided!" << endl;
        return;
    }
    sort(arr, size);
    cout << "Minimum(" << k << ") : " << arr[k - 1] << endl;
    cout << "Maximum(" << k << ") : " << arr[size - k - 1] << endl;
}

void kthMinMaxPQ(int arr[], int size, int k) {
    priority_queue<int> pq;
    for(int i=0; i<k; i++) {
        pq.push(arr[i]);
    }

    for(int i=k; i<size; i++) {
        if(pq.top() > arr[i]) {
            pq.pop();
            pq.push(arr[i]);
        }
    }

    cout << pq.top();
}

int main()
{
    int array[8] = {2, 1, 6, 9, 8, 4};
    int k = 3;
    kthMinMax(array, 6, k);
}