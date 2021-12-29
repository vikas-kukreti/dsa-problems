#include <iostream>
using namespace std;

class Set {
    int *set = NULL;
    int length;
    public:
    Set(void);
    Set(int, int *);
    int get(int);
    void add(int);
    int size();
    int search(int);
    void print();
    static Set Union(Set, Set);
    static Set intersection(Set, Set);
    static Set difference(Set, Set);
};

Set::Set() {
    length = 0;
    set = new int[1000];
}

Set::Set(int size, int *init) {
    set = new int[1000];
    for(int i=0;i<size; i++) {
        set[i] = init[i];
    }
    length = size;
}

int Set::get(int index) {
    if(index > -1 && index < length)
        return set[index];
    return 0;
}

int Set::search(int val) {
    for(int i=0;i<length;i++) {
        if(set[i] == val) {
            return i;
        }
    }
    return -1;
}

void Set::add(int val) {
    if(!(length < 1000))
        return;
    if(search(val) != -1)
        return;
    set[length++] = val;
}

int Set::size() {
    return length;
}

Set Set::Union(Set a, Set b) {
    Set u;
    int i=0;
    while(i < a.size()) {
        u.add(a.get(i++));
    }
    i=0;
    while(i < b.size()) {
        if(a.search(b.get(i)) == -1) {
            u.add(b.get(i));
        }
        i++;
    }
    return u;
}

Set Set::intersection(Set a, Set b) {
    Set u;
    int i=0;
    while(i < b.size()) {
        if(a.search(b.get(i)) != -1) {
            u.add(b.get(i));
        }
        i++;
    }
    return u;
}

Set Set::difference(Set a, Set b) {
    Set u;
    int i=0;
    while(i < a.size()) {
        if(b.search(a.get(i)) == -1) {
            u.add(a.get(i));
        }
        i++;
    }
    return u;
}

void Set::print() {
    if(length == 0) {
        cout << "[]\n";
        return;
    }
    cout << "[" << set[0];
    for(int i=1; i<length; i++) {
        cout << ", " << set[i];
    }
    cout << "]\n";
}

int main(int argc, char const *argv[])
{
    int arr1[] = {10, 20, 40, 60, 67};
    int arr2[] = {10, 30, 61, 67};
    Set a(5, arr1), b(4, arr2);
    Set c = Set::Union(a, b);
    Set d = Set::intersection(a, b);
    Set e = Set::difference(a, b);
    c.print();
    d.print();
    e.print();
    return 0;
}
