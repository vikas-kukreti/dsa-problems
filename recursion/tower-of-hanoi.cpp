#include <iostream>
#include <vector>
using namespace std;

void toh(int n, int A, int B, int C) {
    if(n > 0) {
        toh(n-1, A, C, B);
        cout << "(" << A << "," << C << ")" << endl;
        toh(n-1, B, A , C);
    }
}

void TOH(int n, vector<int> &A, vector<int> &B, vector<int> &C) {
    if(n > 0) {
        TOH(n-1, A, C, B);
        C.push_back(A.back());
        A.pop_back();
        TOH(n-1, B, A , C);
    }
}

int main() {
    // A, B, C are tower numbers
    
    vector<int> A = {3, 2, 1}, B, C;
    // toh(3, 1, 2, 3);
    TOH(A.size(), A, B, C);
    for(int v: C) cout << v << " ";
    return 0;
}