// This program sorts an array's values into ascending order.
//The first 22 lines are the same as Lec9 Ex1

      #include <iostream>
      
      using std::cout;
      using std::endl;
      
      #include <iomanip>
      
    using std::setw;
    
    int main()
    {
       const int arraySize = 10;  // size of array a
       int a[ arraySize ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
       int hold;  // temporary location used to swap array elements
    
       cout << "Data items in original order\n";
    
       // output original array
       for ( int i = 0; i < arraySize; i++ )
          cout << setw( 4 ) << a[ i ];


// bubble sort                                         
       int flag = 1;                    
       for ( int pass = 0; (pass < arraySize – 1) && flag; pass++ )     
             flag = 0;                                                 
          // loop to control number of comparisons per pass   
          for ( int j = 0; j < arraySize - 1; j++ )           
                                                              
             // compare side-by-side elements and swap them if
             // first element is greater than second element  
             if ( a[ j ] > a[ j + 1 ] ) {                     
                hold = a[ j ];                                
                a[ j ] = a[ j + 1 ];                          
              a[ j + 1 ] = hold;  
             flag = 1; //set flag since swap occurred                           
                                                              
             } // end if  


// bubble sort                                         
       // loop to control number of passes                    
       for ( int pass = 0; pass < arraySize - 1; pass++ )     
                                                              
          // loop to control number of comparisons per pass   
          for ( int j = 0; j < arraySize - 1; j++ )           
                                                              
             // compare side-by-side elements and swap them if
             // first element is greater than second element  
             if ( a[ j ] > a[ j + 1 ] ) {                     
                hold = a[ j ];                                
                a[ j ] = a[ j + 1 ];                          
                a[ j + 1 ] = hold;                            
                                                              
             } // end if                                      
