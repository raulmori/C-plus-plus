      // Circle2 class member-function definitions.
      #include <iostream>  
      
      using std::cout;
      
      #include "circle2.h"   // Circle2 class definition
      
      // default constructor
    Circle2::Circle2( int xValue, int yValue, double radiusValue )
    {
       x = xValue;
       y = yValue;
       setRadius( radiusValue );
    
    } // end Circle2 constructor

    // set radius 
    void Circle2::setRadius( double radiusValue )
    {
       radius = ( radiusValue < 0.0 ? 0.0 : radiusValue );
    
    } // end function setRadius
    
    // return radius 
    double Circle2::getRadius() const
    {
       return radius;
    
    } // end function getRadius
    
    // calculate and return diameter
    double Circle2::getDiameter() const
    {
       return 2 * radius;
    
    } // end function getDiameter


// calculate and return circumference
    double Circle2::getCircumference() const
    {
       return 3.14159 * getDiameter();
    
    } // end function getCircumference
    
    // calculate and return area
    double Circle2::getArea() const
    {
       return 3.14159 * radius * radius;
    
    } // end function getArea
    
    // output Circle2 object
    void Circle2::print() const
    {
       cout << "Center = [" << x << ", " << y << ']'
            << "; Radius = " << radius;
    
    } // end function print

