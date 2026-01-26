#include "Circle.h"

class Cylinder {
    public:
        Cylinder(Circle, double);    
        Cylinder(double, double);    
        Cylinder(Cylinder &);       
        void setHeight(double &);     
        double getHeight() const;     
        double getArea() const;       
        double getVolume() const;     
        void print() const;           
    private:
        double height;                
        Circle base;                  
};

