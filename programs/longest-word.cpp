#include<bits/stdc++.h>
using namespace std;

string longestWord(string sen) {
    string lw = "";
    string test = "";
    for(char c : sen) {
        if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            test += c;
        } else {
            if(lw.length() < test.length()) {
                lw = test;
            }
            test = "";
        }
    }

    if(lw.length() < test.length()) {
        lw = test;
    }

    reverse(lw.begin(), lw.end());

    return lw;
}

int main(int argc, char const *argv[])
{
    string test = "fun&!! time";
    string result = longestWord(test);

    cout << "Longest word: " << result << endl;

    return 0;
}

