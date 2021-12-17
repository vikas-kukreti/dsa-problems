#include<iostream>
using namespace std;

//! default values

class Student { // user defined data
    public:
    int rollNo;
    int age;
    string name;
    static int countStudents;
    static string schoolName;

    static void printNoOfStudents() {
        cout << countStudents << endl;
    }

    Student(int rollNo, int age, string name) {
        countStudents++;
        this->rollNo = rollNo;
        this->age = age;
        this->name = name;
    }

    // * special member function
    // * same name as class name
    // * Automatically gets invoked
    // * Initializes properties of the object
    // * Allocates memory to the object
 
    void printDetails() {
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
        cout << "Roll No = " << rollNo << endl;
        cout << endl;
    }
};

int Student::countStudents = 0;
string Student::schoolName = "DIET";

int main(int argc, char const *argv[])
{
    Student vikas(1, 21, "Vikas Kukreti");
    Student rashmi(2, 55, "Rashmi");
    Student nikita(2, 23, "Nikita");
    Student sheetal(2, 31, "Chudail");

    Student::printNoOfStudents();
    
    return 0;
}

//! static properties and methods
