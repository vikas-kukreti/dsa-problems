#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int size = s.length();
        int number = 0;
        for(int i=size-1; i>=0; i--) {
            if(s[i] == 'I') {
                number += 1;
            } else if(s[i] == 'V') {
                if(i > 0 && s[i-1] == 'I') {
                    number += 4;
                    i--;
                } else {
                    number += 5;
                }
            } else if(s[i] == 'X') {
                if(i > 0 && s[i-1] == 'I') {
                    number += 9;
                    i--;
                } else {
                    number += 10;
                }
            } else if(s[i] == 'L') {
                if(i > 0 && s[i-1] == 'X') {
                    number += 40;
                    i--;
                } else {
                    number += 50;
                }
            } else if(s[i] == 'C') {
                if(i > 0 && s[i-1] == 'X') {
                    number += 90;
                    i--;
                } else {
                    number += 100;
                }
            } else if(s[i] == 'D') {
                if(i > 0 && s[i-1] == 'C') {
                    number += 400;
                    i--;
                } else {
                    number += 500;
                }
            } else if(s[i] == 'M') {
                if(i > 0 && s[i-1] == 'C') {
                    number += 900;
                    i--;
                } else {
                    number += 1000;
                }
            }
        }
        return number;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    cout << s.romanToInt("MMMXDCLVIII");
    return 0;
}
