#include <iostream>
using namespace std;

void changeValue(int* a, int* b) {
    int temp = *b;
    *b = *a;
    *a = temp;

    cout << "a = " << *a << "  b = " << *b << endl;
}

// ! [][][][][][][][][]
int main(int argc, char const *argv[])
{
    int a = 10, b = -43;
    cout << "a = " << a << "  b = " << b << endl;
    changeValue(&a, &b); // * call by reference
    cout << "a = " << a << "  b = " << b;

    return 0;
}
