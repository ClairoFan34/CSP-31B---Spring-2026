#include <iostream>
#include "Circle.h"
using namespace std;

double Circle::PI = 3.14;

Circle::Circle(double rad) {
    radius = rad;
}
Circle::Circle(Circle &other){
    radius = other.radius;
}
void Circle::setRadius(double &rad) {
    radius = rad;
}
double Circle::getRadius() const {
    return radius;
}
double Circle::getArea() const {
    return PI * radius * radius;
}
void Circle::print() const {
    cout << radius;
}

string Circle::toString() const {
    return "Circle";
}


