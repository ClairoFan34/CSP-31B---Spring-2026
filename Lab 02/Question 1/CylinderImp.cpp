#include <iostream>
#include "Cylinder.h"
using namespace std;

Cylinder::Cylinder(double r, double h) : Circle(r) {
    height = h;
}

Cylinder::Cylinder(Cylinder &other) : Circle(other) {
    height = other.height;
}

void Cylinder::setHeight(double &h) {
    height = h;
}

double Cylinder::getHeight() const {
    return height;
}

double Cylinder::getArea() const {
    double circleArea = Circle::getArea(); 
    double circumference = 2 * 3.14 * getRadius();
    return (2 * circleArea) + (circumference * height);
}

double Cylinder::getVolume() const {
    return Circle::getArea() * height; 
}

void Cylinder::print() const {
    cout << "Radius: ";
    Circle::print();
    cout << " ";
    cout << "Height: " << height << endl;
}

string Cylinder::toString() const {
    return "Cylinder";
}