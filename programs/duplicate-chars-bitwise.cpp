// check if a string has duplicate characters using bitwise operators
#include <iostream>

using std::cout;

int main(int argc, char const *argv[])
{
    char A[] = "finding";
    long int H = 0, x = 0, i;
    for (i = 0; A[i] != '\0'; i++)
    {
        x = 1;
        x = x << (A[i] - 97);
        if ((x & H) > 0)
        {
            printf("%c is duplicate\n", A[i]);
        }
        else
        {
            H = x | H;
        }
    }
    return 0;
}
