// Linear search of an array.
      #include <iostream>
      
      using std::cout;
      using std::cin;
      using std::endl;
      
      int linearSearch( const int [], int, int );  // prototype
    
    int main()
    {
       const int arraySize = 100;  // size of array a
       int a[ arraySize ];         // create array a
       int searchKey;              // value to locate in a
    
       for ( int i = 0; i < arraySize; i++ )  // create some data
          a[ i ] = 2 * i;
    
       cout << "Enter integer search key: ";
       cin >> searchKey;
    
       // attempt to locate searchKey in array a             
       int element = linearSearch( a, searchKey, arraySize );


// display results
       if ( element != -1 )
          cout << "Found value in element " << element << endl;
       else
          cout << "Value not found" << endl;
    
       return 0;  // indicates successful termination
    
    } // end main
    
    // compare key to every element of array until location is     
    // found or until end of array is reached; return subscript of 
    // element if key or -1 if key not found                       
    int linearSearch( const int array[], int key, int sizeOfArray )
    {                                                              
       for ( int j = 0; j < sizeOfArray; j++ )                     
                                                                   
          if ( array[ j ] == key )  // if found,                   
             return j;              // return location of key      
                                                                   
       return -1;  // key not found                                
                                                                   
    } // end function linearSearch                                 

