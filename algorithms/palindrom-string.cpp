#include <iostream>

using namespace std;

bool isPalindrome(char *str, int len) {
    int i, j;
    for(i = 0, j=len-1; i < j; i++, j--) {
        if(str[i] != str[j]) {
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    char str[] = "NAVAN";
    cout << "NAVAN : " << isPalindrome(str, 5);
    
    return 0;
}
