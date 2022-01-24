// Circle3 class member-function definitions.
      #include <iostream>  
      
      using std::cout;
      
      #include "circle3.h"   // Circle3 class definition
      
      // default constructor
    Circle3::Circle3( int xValue, int yValue, double radiusValue )
    {
       x = xValue;
       y = yValue;
       setRadius( radiusValue );
    
    } // end Circle3 constructor
    
    // set radius 
    void Circle3::setRadius( double radiusValue )
    {
       radius = ( radiusValue < 0.0 ? 0.0 : radiusValue );
    
    } // end function setRadius

// return radius 
    double Circle3::getRadius() const
    {
       return radius;
    
    } // end function getRadius
    
    // calculate and return diameter
    double Circle3::getDiameter() const
    {
       return 2 * radius;
    
    } // end function getDiameter
    
    // calculate and return circumference
    double Circle3::getCircumference() const
    {
       return 3.14159 * getDiameter();
    
    } // end function getCircumference

// calculate and return area
    double Circle3::getArea() const
    {
       return 3.14159 * radius * radius;
    
    } // end function getArea
    
    // output Circle3 object
    void Circle3::print() const
    {
       cout << "Center = [" << x << ", " << y << ']'
            << "; Radius = " << radius;
    
    } // end function print


