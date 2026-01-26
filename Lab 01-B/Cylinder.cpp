#include <iostream>
#include <iomanip>
#include "Cylinder.h" 

using namespace std;

int main() {
    Cylinder Cyl1(3.5, 10.0);
    Cylinder cyl2(Cyl1);

    double updatedHeight = 15.75;
    cyl2.setHeight(updatedHeight);

    cout << "Cylinder 1" << endl;
    Cyl1.print(); 
    cout << "Surface Area: " << Cyl1.getArea() << endl;  
    cout << "Volume:       " << Cyl1.getVolume() << endl << endl; 

    cout << "Cylinder 2" << endl;
    cyl2.print(); 
    cout << "Surface Area: " << cyl2.getArea() << endl;
    cout << "Volume:       " << cyl2.getVolume() << endl;

    return 0;
}