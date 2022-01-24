// Display order in which base-class and derived-class 
      // constructors are called.
      #include <iostream>  
      
      using std::cout;
      using std::endl;
      
      #include "circle5.h"  // Circle5 class definition
    
    int main()
    {
       { // begin new scope      
                                 
          Point4 point( 11, 22 );
                                 
       } // end scope            
    
       cout << endl;
       Circle5 circle1( 72, 29, 4.5 );
    
       cout << endl;
       Circle5 circle2( 5, 5, 10 );
    
       cout << endl;
       return 0;  // indicates successful termination
       
    } // end main
