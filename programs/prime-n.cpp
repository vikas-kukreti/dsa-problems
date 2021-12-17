#include <iostream>
using namespace std;


int isPrime(int num) {
    int factors = 0;
    int i = 1;
    while(i <= num) {
        if(num % i == 0) {
            factors = factors + 1;
        }
        i = i + 1;
    }
    if(factors == 2) {
        return 1; // true
    } else {
        return 0; // false
    }
}


void printPrime(int number) {
    int x = 1;
    while(x <= number) {
        int prime = isPrime(x);
        if(prime) {
            cout << x << " ";
        }
        x = x + 1;
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    printPrime(n);

    return 0;
}
