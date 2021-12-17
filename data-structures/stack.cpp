#include <iostream>
#define MAX 100
using namespace std;

class Stack
{
    int stack[100] = {};
    int top = -1;

public:
    void push(int value)
    {
        if (top >= MAX - 1)
        {
            throw "Stack overflow!";
        }
        stack[++top] = value;
    }

    int pop()
    {
        if (top < 0)
        {
            throw "Stack underflow!";
        }
        return stack[top--];
    }
};

int main(int argc, char const *argv[])
{

    try
    {
        Stack a;
        a.push(10);
        a.push(20);
        a.push(40);
        a.push(560);
        a.push(740);
        a.push(2450);
        a.push(13530);
        cout << a.pop() << " ";
        cout << a.pop() << " ";
        cout << a.pop() << " ";
        cout << a.pop() << " ";
        cout << a.pop() << " ";
        cout << a.pop() << " ";
        cout << a.pop() << " ";
        cout << "Done with life now!";
    }
    catch (const char *message)
    {
        cout << message << endl;
    }

    return 0;
}