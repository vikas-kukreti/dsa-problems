// * Write a C program to enter P, T, R and calculate Compound Interest

#include <iostream>
#include <math.h>

using namespace std;
int main(int argc, char const *argv[])
{
    float P, T, R, C;

    cout << "Enter P: ";
    cin >> P;
    cout << "Enter R: ";
    cin >> R;
    cout << "Enter T: ";
    cin >> T;

    C = P * (pow((1 + R/100), T));

    cout << "CI: " << C;
    return 0;
}
