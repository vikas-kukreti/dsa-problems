// ! lcm * hcf = a * b
// * lcm X hcf = product of 2 numbers

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int a = 30, b = 42, rem = -1, lcm, hcf, dividend, divisor;

    if (a > b)
    {
        dividend = b;
        divisor = a;
    }
    else
    {
        dividend = a;
        divisor = b;
    }

    while (rem != 0)
    {
        rem = dividend % divisor;
        dividend = divisor;
        divisor = rem;
    }

    hcf = dividend;
    lcm = (a * b) / hcf;

    cout << "HCF = " << hcf << endl;
    cout << "LCM = " << lcm << endl;

    return 0;
}
