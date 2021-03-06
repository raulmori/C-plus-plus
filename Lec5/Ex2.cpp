      // Functions that take no arguments.
      #include <iostream>
      
      using std::cout;
      using std::endl;
      
      void function1();        // function prototype
      void function2( void );  // function prototype
    
    int main()
    {
       function1();  // call function1 with no arguments
       function2();  // call function2 with no arguments
    
       return 0;     // indicates successful termination
    
    } // end main


// function1 uses an empty parameter list to specify that 
    // the function receives no arguments 
    void function1()
    {
       cout << "function1 takes no arguments" << endl;
    
    } // end function1
    
    // function2 uses a void parameter list to specify that 
    // the function receives no arguments 
    void function2( void )
    {
       cout << "function2 also takes no arguments" << endl;
    
    } // end function2



