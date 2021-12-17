#include <iostream>
using namespace std;

class Human {
    int age;
    public:
    Human() {
        //! allocate memory to object
        age = 1;
        cout << "Human in born!" << endl;
    }
    ~Human() {
        // ! frees up memory taken by object
        cout << "Human is died!"<< endl;
    }
};

void createHuman() {
    Human a;
    cout << "He is living his life"<< endl;
    cout << "He is 90 years old!"<< endl;
    return;
}

int main(int argc, char const *argv[])
{
    createHuman();
    
    cout << "Back to main!";
    return 0;
}
