#ifndef GEOMETRICOBJECT_H
#define GEOMETRICOBJECT_H

#include <string>
using namespace std;

class GeometricObject {
public:
	GeometricObject();
	GeometricObject(string& color, bool filled);
	string getColor() const { 
		return this->color; 
	}
	void setColor(string& color){
		this->color = color;
	}
	bool isFilled() const { 
		return filled; 
	}
	void setFilled(bool filled) { 
		this->filled = filled; 
	}
	virtual string toString() const;
	//virtual makes this method behave polymorphically
private:
	string color;
	bool filled;
};

#endif

