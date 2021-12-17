#include<iostream>
#define PI 3.14

using namespace std;

class Cylinder {
    int h, r;
    public:
    Cylinder(int, int);
    int curvedSurfaceArea();
    int totalSurfaceArea();
    int volume();
};

Cylinder::Cylinder(int h, int r) {
    this->h = h;
    this->r = r;
}

int Cylinder::curvedSurfaceArea() {
    return 2 * PI * r *  h;
}

int Cylinder::totalSurfaceArea() {
    return 2 * PI * r * (r + h);
}

int Cylinder::volume() {
    return PI * r * r * h;
}

void printCylinderDetails(Cylinder *c) {
    cout << "CSA = " << c->curvedSurfaceArea() << endl;
    cout << "TSA = " << c->totalSurfaceArea() << endl;
    cout << "Vol = " << c->volume() << endl;
}

int main(int argc, char const *argv[])
{
    Cylinder gas(40, 9), container(20, 10);

    printCylinderDetails(&gas);
    printCylinderDetails(&container);
    
    return 0;
}