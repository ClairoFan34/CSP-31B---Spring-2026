  
class circleType
{
public:
    void setRadius(double r){
      if (r >= 0)
        radius = r;
      else
        radius = 0;
    };
      //Function to set the radius.
      //Postcondition: if (r >= 0) radius = r;
      //               otherwise radius = 0;

    double getRadius(){
      return radius;
    };
      //Function to return the radius.
      //Postcondition: The value of radius is returned.

    double area(){
      return 3.14 * radius * radius;
    };
      //Function to return the area of a circle.
      //Postcondition: Area is calculated and returned.

    double circumference(){
      return 2 * 3.14 * radius;
    };
      //Function to return the circumference of a circle.
      //Postcondition: Circumference is calculated and returned.

    circleType(double r = 0){
      radius = r;
    };
      //Constructor with a default parameter.
      //Radius is set according to the parameter.
      //The default value of the radius is 0.0;
      //Postcondition: radius = r;

private:
    double radius;
};
