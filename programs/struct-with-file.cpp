#include<iostream>
#include<string>
#include<fstream>

using namespace std;

struct Student
{
    int roll_no;
    string name;
    int age;
    string address;
};


int main(int argc, char const *argv[])
{
    struct Student vikas;

    ofstream vikasFile("vikas.dat", ios::binary);
    vikasFile.write((char *) &vikas, sizeof(struct Student));
    vikasFile.close();

    ifstream vikasFile("vikas.dat", ios::binary);
    vikasFile.read((char *) &vikas, sizeof(struct Student));
    vikasFile.close();

    cout << vikas.roll_no << endl;
    cout << vikas.name << endl;

    struct Student nikita;
    nikita.roll_no = 11;
    nikita.name = "Nikita Rawat";
    nikita.age = 20;
    nikita.address = "Apna Ghar";


    
    return 0;
}
