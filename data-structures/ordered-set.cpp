#include <iostream>
#include <algorithm>
using namespace std;

class Set {
    int *set = NULL;
    int length;
    public:
    Set(void);
    Set(int, int *);
    int get(int);
    void append(int val);
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
    sort(init, init+size);
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
    int i = 0, j=length-1;
    while(i<=j) {
        int mid = (i+j)/2;
        if (set[mid] == val) {
            return i;
        } else if (set[mid] > val) {
            i = mid + 1;
        } else {
            j = mid - 1;
        }
    }
    return -1;
}

void Set::add(int val) {
    if(!(length < 1000))
        return;
    if(search(val) != -1)
        return;
    int i=length-1;
    for(;i>=0;i--) {
        if(set[i] > val) {
            set[i+1] = set[i];
        }
    }
    set[i+1] = val;
    length++;
}

void Set::append(int val) {
    if(!(length < 1000))
        return;
    set[length++] = val;
}

int Set::size() {
    return length;
}

Set Set::Union(Set a, Set b) {
    Set u;
    int i=0, j=0;
    while(i < a.size() && j<b.size()) {
        if(a.get(i) == b.get(j)) {
            u.append(a.get(i++));
            j++;
        } else if(a.get(i) < b.get(j)) {
            u.append(a.get(i++));
        } else {
            u.append(b.get(j++));
        }
    }
    while(i < a.size()) {
        u.append(a.get(i++));
    }
    while(j < b.size()) {
        u.append(b.get(j++));
    }
    return u;
}

Set Set::intersection(Set a, Set b) {
    Set u;
    int i=0, j=0;
    while(i < a.size() && j<b.size()) {
        if(a.get(i) == b.get(j)) {
            u.append(a.get(i++));
            j++;
        } else if(a.get(i) < b.get(j)) {
            i++;
        } else {
            j++;
        }
    }
    return u;
}

Set Set::difference(Set a, Set b) {
    Set u;
    int i=0, j=0;
    while(i < a.size() && j<b.size()) {
        if(a.get(i) == b.get(j)) {
            i++;
            j++;
        } else if(a.get(i) < b.get(j)) {
            u.append(a.get(i++));
        } else {
            j++;
        }
    }
    while(i < a.size()) {
        u.append(a.get(i++));
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
    cout << "Union: ";
    c.print();
    cout << "Intersection: ";
    d.print();
    cout << "Difference: ";
    e.print();
    return 0;
}
