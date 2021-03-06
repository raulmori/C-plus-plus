// Using strcpy and strncpy.
      #include <iostream>
      
      using std::cout;
      using std::endl;
      
      #include <cstring>   // prototypes for strcpy and strncpy
      
    int main()
    {
       char x[] = "Happy Birthday to You";
       char y[ 25 ];
       char z[ 15 ];
    
       strcpy( y, x );  // copy contents of x into y
    
       cout << "The string in array x is: " << x
            << "\nThe string in array y is: " << y << '\n';
       
       // copy first 14 characters of x into z              
       strncpy( z, x, 14 );  // does not copy null character
       z[ 14 ] = '\0';       // append '\0' to z's contents 
    
       cout << "The string in array z is: " << z << endl;


       return 0;  // indicates successful termination
    
    } // end main
