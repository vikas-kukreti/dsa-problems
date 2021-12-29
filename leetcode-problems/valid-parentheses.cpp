#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s) {
    stack<char> a;
    
    for(char c: s) {
        switch (c)
        {
        case '{':
        case '(':
        case '[':
            a.push(c);
            break;
        case '}':
            if(a.empty() || a.top() != '{') return false;
            a.pop();
            break;
        case ']':
            if(a.empty() || a.top() != '[') return false;
            a.pop();
            break;
        case ')':
            if(a.empty() || a.top() != '(') return false;
            a.pop();
            break;
        default:
            return false;
        }
    }
    
    return a.empty();
}

int main(int argc, char const *argv[])
{
    string s = "{[]}";
    cout << "is valid:" << isValid(s);
    
    return 0;
}
