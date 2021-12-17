#include<iostream>
#include<map>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {5, 10, 2, 5, 50, 5, 10, 1, 2, 2};
    int length = sizeof(arr) / sizeof(arr[0]);

    map<int, int> m;


    for(int i=0; i<length; i++) {
        map<int,int>::iterator itr = m.find(arr[i]);
        if(itr == m.end()) {
            m.insert(pair<int, int>(arr[i], 1));
        } else {
            itr->second = itr->second + 1;
        }
    }

    map<int, int>::iterator it;

    for(it=m.begin(); it != m.end(); it++) {
        cout << it->first << " is present  ";
        cout << it->second << " times" << endl;
        cout << endl;
    }

    return 0;
}
