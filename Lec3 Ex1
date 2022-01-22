// Class average program with counter-controlled repetition.
//This program will print the Grades of many students

      #include <iostream>
      
      using std::cout;
      using std::cin;
      using std::endl;
      
      // function main begins program execution
    int main()
    {
       int total;        // sum of grades input by user
       int gradeCounter; // number of grade to be entered next
       int grade;        // grade value
       int average;      // average of grades
    
       // initialization phase
       total = 0;          // initialize total
       gradeCounter = 1;   // initialize loop counter
    

// processing phase
       while ( gradeCounter <= 10 ) {       // loop 10 times
          cout << "Enter grade: ";          // prompt for input
          cin >> grade;                     // read grade from user
          total = total + grade;            // add grade to total
          gradeCounter = gradeCounter + 1;  // increment counter
       }
    
       // termination phase
       average = total / 10;                // integer division
    
       // display result
       cout << "Class average is " << average << endl;  
    
       return 0;   // indicate program ended successfully
    
    } // end function main
