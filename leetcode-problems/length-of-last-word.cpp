#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    unsigned lengthOfLastWord(string s) {
        unsigned length = 0;
        
        for(int i=s.size()-1; i>=0; i--) {
            if(s[i] == ' ') {
                if(i < s.size()-1 && s[i+1] != ' ') {
                    break;
                }
            } else {
                length++;
            }
        }

        return length;
    }
};


int main(int argc, char const *argv[])
{
    string sentence = "   fly me   to   the moon  ";
    Solution s;
    int length = s.lengthOfLastWord(sentence);
    cout << "Length of longest word: " << length;
    return 0;
}
