#include "Circle.h"

class Cylinder : public Circle {
    public:
        Cylinder(double r, double h); 
        Cylinder(Cylinder &);    
        void setHeight(double &);    
        double getHeight() const;    
        double getArea() const;         
        double getVolume() const;        
        void print() const;             
    private:
        double height;                 
};
