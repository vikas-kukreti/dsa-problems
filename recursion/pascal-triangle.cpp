#include <iostream>
using std::cout;

int pascalTriangle(int r, int c) {
    if(c == 1 || c == r) return 1;
    return pascalTriangle(r-1, c-1) + pascalTriangle(r-1, c);
}

int main(int argc, char const *argv[])
{
    cout << pascalTriangle(5, 3);
    return 0;
}
