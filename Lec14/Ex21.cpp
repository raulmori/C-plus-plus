// Member-function definitions for Time class.
      
      // include definition of class Time from time4.h
      #include "time4.h"
      
      // constructor function to initialize private data;
      // calls member function setTime to set variables;
      // default values are 0 (see class definition)
    Time::Time( int hr, int min, int sec ) 
    {
       setTime( hr, min, sec ); 
    
    } // end Time constructor
    
    // set values of hour, minute and second
    void Time::setTime( int h, int m, int s )
    {
       hour = ( h >= 0 && h < 24 ) ? h : 0;
       minute = ( m >= 0 && m < 60 ) ? m : 0;
       second = ( s >= 0 && s < 60 ) ? s : 0;
    
    } // end function setTime
    

// return hour value
    int Time::getHour() 
    { 
       return hour; 
    
    } // end function getHour
    
    // POOR PROGRAMMING PRACTICE:                     
    // Returning a reference to a private data member.
    int &Time::badSetHour( int hh )                   
    {                                                 
       hour = ( hh >= 0 && hh < 24 ) ? hh : 0;        
                                                      
       return hour;  // DANGEROUS reference return    
                                                      
    } // end function badSetHour                      
