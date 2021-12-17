#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{

    string someText = "vikas kukreti";
    cout << someText.length() << endl;
    cout << someText.size() << endl;
    cout << someText.compare("vikas kukreti") << endl;
    cout << someText.find("kukreti") << endl;
    cout << someText.empty() << endl;
    someText = "Vikas";
    someText.assign("Vikas");

    return 0;
}