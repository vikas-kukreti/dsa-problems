#include <iostream>
#include <vector>

using namespace std;

bool descending(int i, int j) {
    return (i > j);
}

bool ascending(int i, int j) {
    return (i < j);
}

void sort(vector<int> &numbers, bool(*condition)(int, int)) {
    vector<int>::iterator i, j;
    for(i=numbers.begin(); i!= numbers.end(); i++) {
        for(j=numbers.begin(); j!=numbers.end();j++) {
            if(condition(*i, *j)) {
                int temp = *i;
                *i = *j;
                *j = temp;
            }
        }
    }
}

void loopVector(vector<int> &v, void(*fun)(int)) {
    vector<int>::iterator i;
    for(i=v.begin(); i!= v.end(); i++) {
        fun(*i);
    }
}

void print(int n) {
    cout << n << " ";
}

int main(int argc, char const *argv[])
{
    vector<int> numbers = {10, 5, 2, 6, 6, 9, 24, 7};
    sort(numbers, descending);
    loopVector(numbers, print);

    return 0;
}
