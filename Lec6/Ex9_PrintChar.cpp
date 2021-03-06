// Treating character arrays as strings.
      #include <iostream>
      
      using std::cout;
      using std::cin;
      using std::endl;
      
      int main()
    {
       char string1[ 20 ];                // reserves 20 characters
       char string2[] = "string literal"; // reserves 15 characters
    
       // read string from user into array string2
       cout << "Enter the string \"hello there\": ";
       cin >> string1;  // reads "hello" [space terminates input]
    
       // output strings
       cout << "string1 is: " << string1   
            << "\nstring2 is: " << string2;
    
       cout << "\nstring1 with spaces between characters is:\n";

// output characters until null character is reached
       for ( int i = 0; string1[ i ] != '\0'; i++ )
          cout << string1[ i ] << ' ';             
    
       cin >> string1;  // reads "there"
       cout << "\nstring1 is: " << string1 << endl;
    
       return 0;  // indicates successful termination
    
    } // end main
