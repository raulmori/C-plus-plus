// Member-function definitions for class Date.
      #include <iostream>
      
      using std::cout;
      using std::endl;
      
      // include Date class definition from date1.h
      #include "date1.h"
    
    // constructor confirms proper value for month; calls
    // utility function checkDay to confirm proper value for day
    Date::Date( int mn, int dy, int yr )
    {
       if ( mn > 0 && mn <= 12 )  // validate the month
          month = mn;
    
       else {                     // invalid month set to 1
          month = 1;
          cout << "Month " << mn << " invalid. Set to month 1.\n";
       }
    
       year = yr;                 // should validate yr
       day = checkDay( dy );      // validate the day

// output Date object to show when its constructor is called
       cout << "Date object constructor for date ";                
       print();                                                    
       cout << endl;                                               
    
    } // end Date constructor
    
    // print Date object in form month/day/year
    void Date::print() const
    {
       cout << month << '/' << day << '/' << year; 
    
    } // end function print
    
    // output Date object to show when its destructor is called
    Date::~Date()                                              
    {                                                          
       cout << "Date object destructor for date ";             
       print();                                                
       cout << endl;                                           
                                                               
    } // end destructor ~Date                                  
    


// utility function to confirm proper day value based on 
    // month and year; handles leap years, too
    int Date::checkDay( int testDay ) const
    {
       static const int daysPerMonth[ 13 ] = 
          { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    
       // determine whether testDay is valid for specified month
       if ( testDay > 0 && testDay <= daysPerMonth[ month ] )
          return testDay;
    
       // February 29 check for leap year 
       if ( month == 2 && testDay == 29 &&
          ( year % 400 == 0 ||                      
             ( year % 4 == 0 && year % 100 != 0 ) ) )
          return testDay;
    
       cout << "Day " << testDay << " invalid. Set to day 1.\n";
    
       return 1;  // leave object in consistent state if bad value
    
    } // end function checkDay


