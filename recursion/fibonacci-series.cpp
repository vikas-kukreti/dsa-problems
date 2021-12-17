#include <iostream>
using namespace std;



// int fib(int n) {
//     static int F[] = {0, 1};
//     if(n<=1) return n;
//     return F(n-2) + F(n-1);
// }

int fibIte(int n) {
    int t0 = 0, t1 = 1, i, s;
    if(n<=1) return n;
    for(i=2; i<=n; i++) {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

int main(int argc, char const *argv[])
{
    cout << fibIte(6);
    return 0;
}
