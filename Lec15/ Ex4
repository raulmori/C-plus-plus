// Using a member initializer to initialize a
      // constant of a built-in data type.
      #include <iostream>
      
      using std::cout;
      using std::endl;
      
      class Increment {
    
    public:
       Increment( int c = 0, int i = 1 );  // default constructor
    
       void addIncrement() 
       { 
          count += increment; 
    
       } // end function addIncrement
    
       void print() const;     // prints count and increment

private:
       int count;
       const int increment;    // const data member
    
    }; // end class Increment
    
    // constructor 
    Increment::Increment( int c, int i )
       : count( c ),     // initializer for non-const member     
         increment( i )  // required initializer for const member
    { 
       // empty body
    
    } // end Increment constructor
    
    // print count and increment values
    void Increment::print() const
    {
       cout << "count = " << count
            << ", increment = " << increment << endl;
    
    } // end function print
    


int main()
    {
       Increment value( 10, 5 );
    
       cout << "Before incrementing: ";
       value.print();
    
       for ( int j = 0; j < 3; j++ ) {
          value.addIncrement();
          cout << "After increment " << j + 1 << ": ";
          value.print();
       }
    
       return 0;
    
    } // end main


