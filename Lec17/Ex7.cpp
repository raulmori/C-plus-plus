// Circle2 class contains x-y coordinate pair and radius.
      #ifndef CIRCLE2_H
      #define CIRCLE2_H
      
      #include "point.h"  // Point class definition
      
      class Circle2 : public Point {
      
    public:
    
       // default constructor
       Circle2( int = 0, int = 0, double = 0.0 );  
    
       void setRadius( double );   // set radius
       double getRadius() const;   // return radius
    
       double getDiameter() const;       // return diameter
       double getCircumference() const;  // return circumference
       double getArea() const;           // return area
    
       void print() const;         // output Circle2 object
    
    private:                              
       double radius;  // Circle2's radius

    }; // end class Circle2
    
    #endif 
