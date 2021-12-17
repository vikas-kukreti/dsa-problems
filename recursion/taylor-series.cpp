#include <iostream>

using namespace std;

// ! Original O(n^2) using recursion
// double taylor_series(int x, int n) {
//     static double f=1;
//     static double p=1;
//     if(n==0) return 1;
//     double result = taylor_series(x, n-1);
//     p*=x;
//     f*=n;
//     return result + p/f;
// }

// * improved O(n) using recursion
double taylor_series(int x, int n, double s = 1.0)
{
    if (n == 0)
        return s;
    s = x * s / n + 1;
    return taylor_series(x, n - 1, s);
}

// * improved O(n) using loop
// double taylor_series(int x, int n) {
//     double s = 1;
//     while(n>0) {
//         s = s * (double)x/n + 1;
//         n--;
//     }
//     return s;
// }

int main(int argc, char const *argv[])
{

    cout << taylor_series(1, 10);
    return 0;
}
