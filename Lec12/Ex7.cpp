      // Using strlen.
      #include <iostream>
      
      using std::cout;
      using std::endl;
      
      #include <cstring>  // prototype for strlen
      
    int main()
    {
       char *string1 = "abcdefghijklmnopqrstuvwxyz";
       char *string2 = "four";
       char *string3 = "Boston";
    
       cout << "The length of \"" << string1
            << "\" is " << strlen( string1 )
            << "\nThe length of \"" << string2
            << "\" is " << strlen( string2 )
            << "\nThe length of \"" << string3
            << "\" is " << strlen( string3 ) << endl;
    
       return 0;  // indicates successful termination
    
    } // end main
