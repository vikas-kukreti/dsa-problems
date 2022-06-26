#include <iostream>
#include <string>

using namespace std;

void permutation(string s, string a)
{
    if (s.length() == 1)
    {
        cout << a << s << endl;
    }

    for (int i = 0; i < s.length(); i++)
    {
        a.push_back(s[i]);
        permutation(s.substr(0, i) + s.substr(i + 1, s.length()), a);
        a.pop_back();
    }
}

int main(int argc, char const *argv[])
{

    string s = "ABC";

    permutation(s, "");

    return 0;
}
