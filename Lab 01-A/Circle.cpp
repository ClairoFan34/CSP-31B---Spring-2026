#include "Circle.h"
#include <iostream>
using namespace std;

int main() {
    Circle Circ1, Circ2(5), Circ3(Circ2);
    double newRadius = 10;

    cout << "Circle 1: " << endl;
    Circ1.print(); 
    cout << "\nArea: " << Circ1.getArea() << endl;

    cout << "Circle 2: " << endl;
    Circ2.print(); 
    cout << "\nArea: " << Circ2.getArea() << endl;

    cout << "Circle 3: " << endl;
    Circ3.print(); 
    cout << "\nArea: " << Circ3.getArea() << endl;
    Circ3.setRadius(newRadius);
    cout << "Modified Circle 3: " << endl;
    Circ3.print(); 
    cout << "\nArea: " << Circ3.getArea() << endl;
}