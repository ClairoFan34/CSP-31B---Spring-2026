#include <iostream>
#include "GeometricObject.h"

GeometricObject::GeometricObject() {
	this->color = "blue";
	this->filled = 1;
}


GeometricObject::GeometricObject(string& color, bool filled) {
	this->color = color;
	this->filled = filled;
}

string GeometricObject::toString() const {
	return "GeometricObject";
}