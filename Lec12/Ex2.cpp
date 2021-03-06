// Demonstrating an array of pointers to functions.
      #include <iostream>
      
      using std::cout;
      using std::cin;
      using std::endl;
      
      // function prototypes
    void function1( int );
    void function2( int );
    void function3( int );
    
    int main()
    {
       // initialize array of 3 pointers to functions that each    
       // take an int argument and return void                     
       void (*f[ 3 ])( int ) = { function1, function2, function3 };
    
       int choice;
    
       cout << "Enter a number between 0 and 2, 3 to end: ";
       cin >> choice;


// process user's choice
       while ( choice >= 0 && choice < 3 ) {
    
          // invoke function at location choice in array f
          // and pass choice as an argument               
          (*f[ choice ])( choice );                       
    
          cout << "Enter a number between 0 and 2, 3 to end: ";
          cin >> choice;
       }
    
       cout << "Program execution completed." << endl;
    
       return 0;  // indicates successful termination
    
    } // end main
    
    void function1( int a )
    {
       cout << "You entered " << a 
            << " so function1 was called\n\n";
    
    } // end function1



void function2( int b )
    {
       cout << "You entered " << b 
            << " so function2 was called\n\n";
    
    } // end function2
    
    void function3( int c )
    {
       cout << "You entered " << c 
            << " so function3 was called\n\n";
    
    } // end function3
