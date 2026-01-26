#include <iostream>
#include <iomanip>
#include "Cylinder.h" 

using namespace std;

int main() {
    Cylinder Cyl1(3.5, 10.0);
    Cylinder Cyl2(Cyl1);

    cout << "Cylinder 1" << endl;
    Cyl1.print(); 
    
    cout << "Surface Area: " << Cyl1.getArea() << endl;
    cout << "Volume:       " << Cyl1.getVolume() << endl << endl;

    cout << "Cylinder 2" << endl;
    Cyl2.print(); 
    
    cout << "Surface Area: " << Cyl2.getArea() << endl;
    cout << "Volume:       " << Cyl2.getVolume() << endl;

    double newHeight = 2.2;
    Cyl2.setHeight(newHeight);
    cout << "Cylinder 2" << endl;
    Cyl2.print(); 
    
    cout << "Surface Area: " << Cyl2.getArea() << endl;
    cout << "Volume:       " << Cyl2.getVolume() << endl;

    return 0;
}