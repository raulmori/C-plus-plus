// Cube a variable using pass-by-value.
      #include <iostream>
      
      using std::cout;
      using std::endl;
      
      int cubeByValue( int );   // prototype
      
    int main()
    {
       int number = 5;
    
       cout << "The original value of number is " << number;
    
       // pass number by value to cubeByValue
       number = cubeByValue( number );
    
       cout << "\nThe new value of number is " << number << endl;
    
       return 0;  // indicates successful termination
    
    } // end main
    

// calculate and return cube of integer argument               
    int cubeByValue( int n )                                       
    {                                                              
       return n * n * n; // cube local variable n and return result
                                                                   
    } // end function cubeByValue                                  



