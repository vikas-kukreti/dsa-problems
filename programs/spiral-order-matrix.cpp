#include <iostream>

int* spiralOrder(int* A[3], int n11, int n12, int *len1) {
    int l = 0, t = 0, r = n11 - 1, b = n12 - 1;
    int dir = 0, i, j = 0;
    while(t <= b && l <= r) {
        if(dir == 0) {
            // go from left to right to cover the current top row
            for(i=l; i<=r; i++) {
                len1[j++] = A[t][i];
            }
            t++;
            dir = 1;
        } else if(dir == 1) {
            // go from top to bottom to cover the current right
            for(i=t; i<=b; i++) {
                len1[j++] = A[i][r];
            }
            r--;
            dir = 2;
        } else if(dir == 2) {
            // go from right to left  to cover the current bottom
            for(i=r; i>=l; i--) {
                len1[j++] = A[b][i];
            }
            b--;
            dir = 3;
        } else if(dir == 3) {
            // go from bottom to top to cover the current left
            for(i=b; i>=t; i--) {
                len1[j++] = A[i][l];
            }
            l++;
            dir = 0;
        }
    }
    return len1;
}

int main(int argc, char const *argv[])
{
    int r = 3, c = 3;
    int *A[r] = {
        new int[c],
        new int[c],
        new int[c]
    };
    A[0][0] = 1;
    A[0][1] = 2;
    A[0][2] = 3;
    A[1][0] = 4;
    A[1][1] = 5;
    A[1][2] = 6;
    A[2][0] = 7;
    A[2][1] = 8;
    A[2][2] = 9;

    int* ans = spiralOrder(A, r, c, new int[r * c]);

    for(int i=0; i<r*c; i++) {
        std::cout << ans[i] << " ";
    }

    return 0;
}
