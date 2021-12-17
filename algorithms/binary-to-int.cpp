#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    string binaryNumber = "11101";
    int sum = 0, p = 0;
    
    for(int i=binaryNumber.length() - 1; i>=0; --i,p++) {
        if(binaryNumber[i] == '1') {
            sum += pow(2, p);
        }
    }

    cout << sum;
    return 0;
}