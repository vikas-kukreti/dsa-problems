#include <iostream>
#include <vector>
#include <string>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        string shortest = "";
        for(auto str : strs) {
            if(shortest.length() < str.length()) {
                shortest = str;
            }
        }
        for(int i=shortest.length()-1; i>=0; i--) {
            for(int j=0; j<strs.size(); j++) {
                if(shortest[i] != strs[j][i]) {
                    shortest.pop_back();
                    break;
                }
            }
        }
        
        return shortest;
    }


    int main(int argc, char const *argv[])
    {
        vector<string> strs = {"flower","flow","flight"};
        string answer = longestCommonPrefix(strs);
        cout << answer;
        return 0;
    }
    