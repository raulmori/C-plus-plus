      // Initializing an array.
      #include <iostream>
      
      using std::cout;
      using std::endl;
      
      #include <iomanip>
      
    using std::setw;
    
    int main()
    {
       int n[ 10 ];  // n is an array of 10 integers
    
       // initialize elements of array n to 0            
       for ( int i = 0; i < 10; i++ )                    
          n[ i ] = 0;   // set element at location i to 0
    
       cout << "Element" << setw( 13 ) << "Value" << endl;
    
       // output contents of array n in tabular format           
       for ( int j = 0; j < 10; j++ )                            
          cout << setw( 7 ) << j << setw( 13 ) << n[ j ] << endl;
    

   return 0;  // indicates successful termination
    
    } // end main
