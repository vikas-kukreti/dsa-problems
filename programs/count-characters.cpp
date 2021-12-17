// * C++ program to count given character in a string entered by user

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char string[100];
    char c;
    cout << "Enter string:";
    cin.getline(string, 100);
    cout << "Enter character to count:";
    cin >> c;
    int i = 0;
    int count = 0;
    while(string[i] != '\0') {
        if(string[i] == c) {
            count++;
        }
        i++;
    }

    cout << "This character is present " << count << " times";
    return 0;
}
