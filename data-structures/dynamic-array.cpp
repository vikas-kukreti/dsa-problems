#include<iostream>
using std::cout;
using std::cin;

class Array {
        int* arr;
        int index;
        int size;
        void arrayResize();

    public:
        Array(int);
        ~Array();

        void insertAt(int, int);
        void insertAtEnd(int);
        void insertAtStart(int);

        void deleteAt(int);
        void deleteAtStart();
        void deleteAtEnd();

        int search(int);
        void update(int, int);

        int get(int);
        int length();
};

Array::Array(int size) {
    arr = new int[size];
    index = -1;
    this->size = size;
}

Array::~Array() {
    delete[] arr;
}

void Array::arrayResize() {
    int* newArr = new int[2*size];
    for(int i=0; i<=index; i++) {
        newArr[i] = arr[i];
    }

    delete[] arr;
    arr = newArr;
    this->size = size * 2;
}

void Array::insertAt(int pos, int val) {
    if(index >= size - 1) { //! if array is full
        arrayResize();
    }

    if(pos > index + 1 ) {
        cout << "Cannot be inserted due to gap!";
        return;
    }

    for(int i=index; i>=pos; i--)
        arr[i+1] = arr[i];

    arr[pos] = val;
    index++;
}

void Array::insertAtEnd(int val) {
    insertAt(index+1, val);
}

void Array::insertAtStart(int val) {
    insertAt(0, val);
}

void Array::deleteAt(int pos) {
    if(index < 0) {
        cout << "Array is empty!";
        return;
    }
    if(pos > index) {
        cout << "Cannot delete empty location!";
        return;
    }

    for(int i=pos; i<index; i++)
        arr[i] = arr[i+1];

    index--;
}

void Array::deleteAtStart() {
    deleteAt(0);
}

void Array::deleteAtEnd() {
    deleteAt(index);
}

int Array::search(int value) {
    for(int i=0; i<=index; i++) {
        if(arr[i] == value) return i;
    }
    return -1;
}

void Array::update(int pos, int value) {
    if(pos > index || pos < 0) {
        cout << "Position out of range!";
        return;
    }
    arr[pos] = value;
}

int Array::get(int i) {
    if(i < 0 || i > index) {
        cout << "Index out of bounds!";
        return 0;
    }
    return arr[i];
}

int Array::length() {
    return index + 1;
}

int main(int argc, char const *argv[])
{
    Array list = Array(1); //! dynamic 
    list.insertAtStart(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);
    list.insertAtStart(5);
    

    for(int i=0; i<list.length(); i++) {
        cout << list.get(i) << " ";
    }

    return 0;
}