#include "Circle.h"
#include <string>

class Cylinder : public Circle {
    public:
        Cylinder(double r, double h); 
        Cylinder(Cylinder &);    
        void setHeight(double &);    
        double getHeight() const;    
        double getArea() const;         
        double getVolume() const;        
        void print() const;
        string toString() const;          
    private:
        double height;                 
};
