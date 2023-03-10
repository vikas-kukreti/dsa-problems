#include <iostream>
/**
 * 1
 * 4 6
 * 9 11 13
 * 17 19 21 23
 */

using std::cout;
using std::endl;

void printPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (i % 4 == 0)
            {
                cout << i * i + 2 * j + 1 << "\t";
            }
            else
            {
                cout << i * i + 2 * j << "\t";
            }
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{

    printPattern(4);
    return 0;
}
