#include <iostream>
using namespace std;

int fact(int n) {
    if(n<0) throw 0;
    if(n==1 || n==0) return 1;
    return fact(n-1) * n;
}

int main(int argc, char const *argv[])
{
    try {
        cout << fact(5);
    } catch(int code) {
        cout << "Factorial of negative number is not possible to calculate";
    }
    return 0;
}