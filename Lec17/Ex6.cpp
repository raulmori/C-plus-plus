// Testing class Circle.
      #include <iostream>
      
      using std::cout;
      using std::endl;
      using std::fixed;
      
      #include <iomanip>
    
    using std::setprecision;
    
    #include "circle.h"  // Circle class definition
    
    int main()
    {
       Circle circle( 37, 43, 2.5 );  // instantiate Circle object
    
       // display point coordinates
       cout << "X coordinate is " << circle.getX() 
            << "\nY coordinate is " << circle.getY()
            << "\nRadius is " << circle.getRadius();

circle.setX( 2 );          // set new x-coordinate
       circle.setY( 2 );          // set new y-coordinate
       circle.setRadius( 4.25 );  // set new radius      
    
       // display new point value
       cout << "\n\nThe new location and radius of circle are\n";
       circle.print();
    
       // display floating-point values with 2 digits of precision
       cout << fixed << setprecision( 2 );
    
       // display Circle's diameter
       cout << "\nDiameter is " << circle.getDiameter();
    
       // display Circle's circumference
       cout << "\nCircumference is " << circle.getCircumference();
    
       // display Circle's area
       cout << "\nArea is " << circle.getArea();
    
       cout << endl;
    
       return 0;  // indicates successful termination
       
    } // end main


