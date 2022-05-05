// 2 string are anagram when they use same set of letters and length is also equal
// using hash table
// only lower case letters
#include <iostream>
#include <vector>

bool isAnagram(std::string s1, std::string s2)
{
    std::vector<int> table(26, 0);
    if (s1.length() != s2.length())
    {
        return false;
    }
    for (char c : s1)
    {
        table[c - 97]++;
    }
    for (char c : s2)
    {
        table[c - 97]--;
        if (table[c - 97] < 0)
        {
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    std::string str1 = "viikas";
    std::string str2 = "skiaiv";
    std::cout << isAnagram(str1, str2);
    return 0;
}
