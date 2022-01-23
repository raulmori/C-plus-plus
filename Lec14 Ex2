      // Time class.
      #include <iostream>
      
      using std::cout;
      using std::endl;
      
      #include <iomanip>
      
    using std::setfill;
    using std::setw;
    
    // Time abstract data type (ADT) definition                     
    class Time {                                                    
                                                                    
    public:                                                         
       Time();                        // constructor                
       void setTime( int, int, int ); // set hour, minute, second   
       void printUniversal();         // print universal-time format
       void printStandard();          // print standard-time format 
                                                                    


private:                                                        
       int hour;     // 0 - 23 (24-hour clock format)               
       int minute;   // 0 - 59                                      
       int second;   // 0 - 59                                      
                                                                    
    }; // end class Time                                            
    
    // Time constructor initializes each data member to zero and
    // ensures all Time objects start in a consistent state     
    Time::Time()                                                
    {                                                           
       hour = minute = second = 0;                              
                                                                
    } // end Time constructor                                   
    
    // set new Time value using universal time, perform validity
    // checks on the data values and set invalid values to zero 
    void Time::setTime( int h, int m, int s )                   
    {                                                           
       hour = ( h >= 0 && h < 24 ) ? h : 0;                     
       minute = ( m >= 0 && m < 60 ) ? m : 0;                   
       second = ( s >= 0 && s < 60 ) ? s : 0;                   
                                                                
    } // end function setTime                                   
    



    // print Time in universal format
    void Time::printUniversal()
    {
       cout << setfill( '0' ) << setw( 2 ) << hour << ":"
            << setw( 2 ) << minute << ":"
            << setw( 2 ) << second;
    
    } // end function printUniversal
    
    // print Time in standard format
    void Time::printStandard()
    {
       cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 )
            << ":" << setfill( '0' ) << setw( 2 ) << minute
            << ":" << setw( 2 ) << second 
            << ( hour < 12 ? " AM" : " PM" );
    
    } // end function printStandard
    
    int main()
    {
       Time t;  // instantiate object t of class Time
    


// output Time object t's initial values
       cout << "The initial universal time is ";
       t.printUniversal();   // 00:00:00
    
       cout << "\nThe initial standard time is ";
       t.printStandard();    // 12:00:00 AM
    
       t.setTime( 13, 27, 6 );   // change time
    
       // output Time object t's new values
       cout << "\n\nUniversal time after setTime is ";
       t.printUniversal();   // 13:27:06
    
       cout << "\nStandard time after setTime is ";
       t.printStandard();    // 1:27:06 PM
    
       t.setTime( 99, 99, 99 );  // attempt invalid settings
    
       // output t's values after specifying invalid values
       cout << "\n\nAfter attempting invalid settings:"
            << "\nUniversal time: ";
       t.printUniversal();   // 00:00:00


cout << "\nStandard time: ";
       t.printStandard();    // 12:00:00 AM
       cout << endl;
    
       return 0; 
    
    } // end main
