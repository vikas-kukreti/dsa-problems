#include<iostream>
using namespace std;

class Numbers {
    int a, b, c;
    public:
    Numbers(int, int, int);
    Numbers operator+(Numbers &x);
    void printAll();
    int getSum();
    int getAvg();
    int getMax();
    int getMin();
};

Numbers::Numbers(int a, int b, int c) {
    this->a = a;
    this->b = b;
    this->c = c;
}

Numbers Numbers::operator+(Numbers &x) {
        int a = this->a + x.a;
        int b = this->b + x.b;
        int c = this->c + x.c;

        Numbers newObj(a, b, c);
        return newObj;
    }

void Numbers::printAll() {
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
}

int Numbers::getSum() {
    return a + b + c;
}

int Numbers::getAvg() {
    return getSum() / 3;
}

int Numbers::getMax() {
    return (a > b && a > c) ? a : (b > a && b > c) ? b : c;
}

int Numbers::getMin() {
    return (a < b && a < c) ? a : (b < a && b < c) ? b : c;
}

int main(int argc, char const *argv[])
{
    Numbers a(10, 20, 30), b(12, 54, 78);

    Numbers c = a + b;
    Numbers d = a.operator+(b);

    c.printAll();
    d.printAll();
    
    return 0;
}
