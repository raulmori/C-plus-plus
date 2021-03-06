// Counting letter grades.
      #include <iostream>
      
      using std::cout;
      using std::cin;
      using std::endl;
      
      // function main begins program execution
    int main()
    {
       int grade;       // one grade
       int aCount = 0;  // number of As
       int bCount = 0;  // number of Bs
       int cCount = 0;  // number of Cs
       int dCount = 0;  // number of Ds
       int fCount = 0;  // number of Fs
    
       cout << "Enter the letter grades." << endl
            << "Enter the EOF character to end input." << endl;


// loop until user types end-of-file key sequence
       while ( ( grade = cin.get() ) != EOF ) {
    
          // determine which grade was input
          switch ( grade ) {  // switch structure nested in while
    
             case 'A':        // grade was uppercase A
             case 'a':        // or lowercase a
                ++aCount;     // increment aCount
                break;        // necessary to exit switch
    
             case 'B':        // grade was uppercase B
             case 'b':        // or lowercase b
                ++bCount;     // increment bCount    
                break;        // exit switch
    
             case 'C':        // grade was uppercase C
             case 'c':        // or lowercase c
                ++cCount;     // increment cCount    
                break;        // exit switch
    



             case 'D':        // grade was uppercase D
             case 'd':        // or lowercase d
                ++dCount;     // increment dCount    
                break;        // exit switch
    
             case 'F':        // grade was uppercase F
             case 'f':        // or lowercase f
                ++fCount;     // increment fCount    
                break;        // exit switch
    
             case '\n':       // ignore newlines,  
             case '\t':       // tabs, 
             case ' ':        // and spaces in input
                break;        // exit switch
    
             default:         // catch all other characters
                cout << "Incorrect letter grade entered."
                     << " Enter a new grade." << endl;
                break;        // optional; will exit switch anyway
    
          } // end switch
    
       } // end while
    

// output summary of results
       cout << "\n\nTotals for each letter grade are:" 
            << "\nA: " << aCount   // display number of A grades
            << "\nB: " << bCount   // display number of B grades
            << "\nC: " << cCount   // display number of C grades 
            << "\nD: " << dCount   // display number of D grades
            << "\nF: " << fCount   // display number of F grades
            << endl;
    
       return 0;  // indicate successful termination
    
    } // end function main

