      // Circle4 class member-function definitions.
      #include <iostream>  
      
      using std::cout;
      
      #include "circle4.h"   // Circle4 class definition
      
      // default constructor
    Circle4::Circle4( int xValue, int yValue, double radiusValue )
       : Point3( xValue, yValue )  // call base-class constructor
    {
       setRadius( radiusValue );
    
    } // end Circle4 constructor
    
    // set radius 
    void Circle4::setRadius( double radiusValue )
    {
       radius = ( radiusValue < 0.0 ? 0.0 : radiusValue );
    
    } // end function setRadius

    // return radius 
    double Circle4::getRadius() const
    {
       return radius;
    
    } // end function getRadius
    
    // calculate and return diameter
    double Circle4::getDiameter() const
    {
       return 2 * getRadius();
    
    } // end function getDiameter
    
    // calculate and return circumference
    double Circle4::getCircumference() const
    {
       return 3.14159 * getDiameter();
    
    } // end function getCircumference

// calculate and return area
    double Circle4::getArea() const
    {
       return 3.14159 * getRadius() * getRadius();
    
    } // end function getArea
    
    // output Circle4 object
    void Circle4::print() const
    {
       cout << "Center = ";
       Point3::print();      // invoke Point3's print function
       cout << "; Radius = " << getRadius();
    
    } // end function print





