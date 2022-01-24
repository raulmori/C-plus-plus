// Demonstrate errors resulting from attempts
      // to access private class members.          
      #include <iostream>
      
      using std::cout;
      
      // include definition of class Time from time1.h
      #include "time1.h"
    
    int main()
    {
       Time t;  // create Time object
    
       
       t.hour = 7;  // error: 'Time::hour' is not accessible
    
       // error: 'Time::minute' is not accessible
       cout << "minute = " << t.minute;          
    
       return 0;
    
    } // end main
