#include <iostream>
using namespace std;

void printDuplicate(char str[], int len)
{
    // 97 is ascii code for a and 122 is z (total: 26)
    int table[26] = {0};
    int i;
    for (i = 0; i < len; i++)
    {
        if (str[i] > 96 && str[i] < 123)
        {
            table[str[i] - 97]++;
        }
        else if (str[i] > 64 && str[i] < 91)
        {
            table[str[i] - 65]++;
        }
    }

    for (i = 0; i < 26; i++)
    {
        if (table[i] > 1)
        {
            cout << (char)(97 + i) << " : " << table[i] << endl;
        }
    }
}

int main(int argc, char const *argv[])
{
    char str[] = "findInNg";
    printDuplicate(str, 7);
    return 0;
}
