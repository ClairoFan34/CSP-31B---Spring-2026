#include "GeometricObject.h"
#include <string>

class Circle : public GeometricObject {
    public:
        Circle (double = 1);
        Circle (Circle &);
        void setRadius (double &);
        double getRadius () const;
        double getArea() const;
        void print() const;
        string toString() const;
    private:
        double radius;
        static double PI;
};