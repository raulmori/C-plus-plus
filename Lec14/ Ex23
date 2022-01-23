      // Demonstrating that class objects can be assigned
      // to each other using default memberwise assignment.
      #include <iostream>
      
      using std::cout;
      using std::endl;
      
      // class Date definition
    class Date {
    
    public:
       Date( int = 1, int = 1, int = 1990 ); // default constructor
       void print();
    
    private:
       int month;
       int day;
       int year;
    
    }; // end class Date
    


// Date constructor with no range checking
    Date::Date( int m, int d, int y )
    {
       month = m;
       day = d;
       year = y;
    
    } // end Date constructor
    
    // print Date in the format mm-dd-yyyy
    void Date::print() 
    { 
       cout << month << '-' << day << '-' << year; 
    
    } // end function print
    
    int main()
    {
       Date date1( 7, 4, 2002 );
       Date date2;  // date2 defaults to 1/1/1990
    


cout << "date1 = ";
       date1.print();
       cout << "\ndate2 = ";
       date2.print();
    
       date2 = date1;   // default memberwise assignment
    
       cout << "\n\nAfter default memberwise assignment, date2 = ";
       date2.print();
       cout << endl;
    
       return 0;
    
    } // end main
