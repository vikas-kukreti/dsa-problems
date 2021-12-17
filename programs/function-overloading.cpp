#include <bits/stdc++.h>
using namespace std;

int product(int num1, int num2) {
    int prod = num1 * num2;
    return (prod > 0 ? prod: -prod);
}

float product(float num1, float num2) {
    float prod = num1 * num2;
    return (prod > 0 ? prod: -prod); 
}

float product(float num1, float num2, float num3) {
    float prod = num1 * num2 * num3;
    return (prod > 0 ? prod: -prod); 
}

float product(float num) {
    float prod = num * num;
    return (prod > 0 ? prod: -prod); 
}

float product(int num) {
    float prod = num * num;
    return (prod > 0 ? prod: -prod); 
}

//! function overloading

int main(int argc, char const *argv[])
{

    double num = 849.4545219;
    
    cout << typeid('A').name() << endl;
    cout << product(10, 10) << endl;
    cout << product(10.66F, 10.67F) << endl;
    cout << product(10.66F) << endl;
    cout << product(25) << endl;
    return 0;
}