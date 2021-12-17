#include <iostream>
using std::cout;

// ! time O(n) space =O(n)
int pow(int m, int n) {
    if(n==0) return 1;
    return pow(m, n-1) * m;
}

int power(int m, int n) {
    if(n==0) return 1;
    if(n%2 == 0) return power(m*m, n/2);
    return power(m*m, (n-1)/2) * m;
}

int main(int argc, char const *argv[])
{
    cout << power(10, 3);
    return 0;
}
