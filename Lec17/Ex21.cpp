// Circle5 class contains x-y coordinate pair and radius.
      #ifndef CIRCLE5_H
      #define CIRCLE5_H
      
      #include "point4.h"  // Point4 class definition
      
      class Circle5 : public Point4 {
      
    public:
    
       // default constructor
       Circle5( int = 0, int = 0, double = 0.0 );
    
       ~Circle5();                 // destructor
       void setRadius( double );   // set radius
       double getRadius() const;   // return radius
    
       double getDiameter() const;       // return diameter
       double getCircumference() const;  // return circumference
       double getArea() const;           // return area
    
       void print() const;         // output Circle5 object

 private: 
       double radius;  // Circle5's radius
    
    }; // end class Circle5
    
    #endif 

