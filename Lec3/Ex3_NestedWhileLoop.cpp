#include <iostream>
      
      using std::cout;
      using std::cin;
      using std::endl;
      
      // SUPERBOWL 2008 -- function main begins program execution
    int main()
    {
       // initialize variables in declarations
       int giants = 0;           // number of votes for giants
       int patriots = 0;         // number of patriots
       int studentCounter = 1;   // student counter
       int result;               // one exam result
    
       // process 10 students using counter-controlled loop
       while (studentCounter <= 10 ) {
    
          // prompt user for input and obtain value from user
          cout << "Enter result (1 = giants, 2 = patriots): ";
          cin >> result;
          
 // if result 1, increment passes; if/else nested in while
          if ( result == 1 )        // if/else nested in while
             giants++; 
                                                              
          else  // if result not 1, increment failures        
             patriots++;                         
    
          // increment studentCounter so loop eventually terminates
          studentCounter = studentCounter + 1; 
          
       } // end while
    
       // termination phase; display number of votes
       cout << "Giants " << giants << endl;  
       cout << "Patriots "  << patriots << endl;
    
       // print team cheer
       if ( giants > patriots )
          cout << "GO GIANTS " << endl;
        else 
          cout <<"GO PATRIOTS " << endl;
       
       return 0;   // successful termination
    
    } // end function main
          
