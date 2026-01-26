#include "GeometricObject.h"
#include "Cylinder.h"
#include <iostream>

int main() {
    GeometricObject obj1;
    Circle obj2;
    Cylinder obj3(1,2);

    cout << obj1.toString() << endl;
    cout << obj2.toString() << endl; 
    cout << obj3.toString() << endl;

}