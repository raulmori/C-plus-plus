// Class average program with sentinel-controlled repetition.
//Similar to Example#1, this code will calculate the Grade average and the list will stop when "-1" is pressed
      #include <iostream>
      
      using std::cout;
      using std::cin;
      using std::endl;
      using std::fixed;
                                                                    
    #include <iomanip>        // parameterized stream manipulators
                                                                  
    using std::setprecision;  // sets numeric output precision    
    
    // function main begins program execution
    int main()
    {
       int total;         // sum of grades
       int gradeCounter;  // number of grades entered
       int grade;         // grade value
    
       double average;    // number with decimal point for average
    
       // initialization phase
       total = 0;         // initialize total
       gradeCounter = 0;  // initialize loop counter

// processing phase
       // get first grade from user
       cout << "Enter grade, -1 to end: ";  // prompt for input
       cin >> grade;                        // read grade from user
    
       // loop until sentinel value read from user
       while ( grade != -1 ) {                  
          total = total + grade;            // add grade to total
          gradeCounter = gradeCounter + 1;  // increment counter
          
          cout << "Enter grade, -1 to end: ";  // prompt for input
          cin >> grade;                        // read next grade
    
       } // end while
    
       // termination phase
       // if user entered at least one grade ...
       if ( gradeCounter != 0 ) {
          
          // calculate average of all grades entered
          average = static_cast< double >( total ) / gradeCounter;
          

          // display average with two digits of precision
          cout << "Class average is " << setprecision( 2 )
               << fixed << average << endl;
    
       } // end if part of if/else
    
       else // if no grades were entered, output appropriate message
          cout << "No grades were entered" << endl;
    
       return 0;   // indicate program ended successfully
    
    } // end function main
