// Using an inline function to calculate.
      // the volume of a cube.
      #include <iostream>
      
      using std::cout;
      using std::cin;
      using std::endl;
      
    // Definition of inline function cube. Definition of function
    // appears before function is called, so a function prototype 
    // is not required. First line of function definition acts as 
    // the prototype.
    inline double cube( const double side )         
    {                                               
       return side * side * side;  // calculate cube
                                                    
    } // end function cube   


int main()
    {
       cout << "Enter the side length of your cube: ";
    
       double sideValue;
    
       cin >> sideValue;
    
       // calculate cube of sideValue and display result
       cout << "Volume of cube with side " 
            << sideValue << " is " << cube( sideValue ) << endl;
    
       return 0;  // indicates successful termination
    
    } // end main
