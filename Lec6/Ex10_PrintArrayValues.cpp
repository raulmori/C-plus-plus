      // Static arrays are initialized to zero.
      #include <iostream>
      
      using std::cout;
      using std::endl;
      
      void staticArrayInit( void );      // function prototype
      void automaticArrayInit( void );   // function prototype
    
    int main()
    {
       cout << "First call to each function:\n";
       staticArrayInit();
       automaticArrayInit();
    
       cout << "\n\nSecond call to each function:\n";
       staticArrayInit();
       automaticArrayInit();
       cout << endl;
    
       return 0;  // indicates successful termination
    
    } // end main
    

    // function to demonstrate a static local array
    void staticArrayInit( void )
    {
       // initializes elements to 0 first time function is called
       static int array1[ 3 ];  
    
       cout << "\nValues on entering staticArrayInit:\n";
    
       // output contents of array1
       for ( int i = 0; i < 3; i++ )
          cout << "array1[" << i << "] = " << array1[ i ] << "  ";
    
       cout << "\nValues on exiting staticArrayInit:\n";
    
       // modify and output contents of array1
       for ( int j = 0; j < 3; j++ )
          cout << "array1[" << j << "] = " 
               << ( array1[ j ] += 5 ) << "  ";
    
    } // end function staticArrayInit
    


// function to demonstrate an automatic local array
    void automaticArrayInit( void )
    {
       // initializes elements each time function is called
       int array2[ 3 ] = { 1, 2, 3 };
    
       cout << "\n\nValues on entering automaticArrayInit:\n";
    
       // output contents of array2
       for ( int i = 0; i < 3; i++ )
          cout << "array2[" << i << "] = " << array2[ i ] << "  ";
    
       cout << "\nValues on exiting automaticArrayInit:\n";
    
       // modify and output contents of array2
       for ( int j = 0; j < 3; j++ )
          cout << "array2[" << j << "] = " 
               << ( array2[ j ] += 5 ) << "  ";
    
    } // end function automaticArrayInit




