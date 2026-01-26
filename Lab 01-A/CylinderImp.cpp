#include <iostream>
#include "Cylinder.h"
using namespace std;

Cylinder::Cylinder(Circle c, double h) : base(c) {
    height = h;
}

Cylinder::Cylinder(double r, double h) : base(r) {
    height = h;
}


Cylinder::Cylinder(Cylinder &other) : base(other.base) {
    height = other.height;
}

void Cylinder::setHeight(double &h) {
    height = h;
}

double Cylinder::getHeight() const {
    return height;
}

double Cylinder::getArea() const {
    double baseArea = base.getArea(); 
    double totalArea = (2 * 3.14 * base.getRadius()) * height; 
    return (2 * baseArea) + totalArea;
}

double Cylinder::getVolume() const {
    return base.getArea() * height; 
}

void Cylinder::print() const {
    cout << "Radius: ";
    base.print();
    cout << " ";
    cout << "Height: " << height << endl;
}
