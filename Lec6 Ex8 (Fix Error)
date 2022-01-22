// Student poll program.
      #include <iostream>
      
      using std::cout;
      using std::endl;
      
      #include <iomanip>
      
    using std::setw;
    
    int main()
    {
       // define array sizes
       const int responseSize = 1000;   int vote[responseSize]; // size of array responses
       const int frequencySize = 11;  // size of array frequency
    
// place survey responses in the array votes 
       for (int i = 0; i < 1000; i++)
         {
         cout <<"Please enter the next vote" << endl;
         std::cin >> vote[i];
         }
    
       // initialize frequency counters to 0
       int frequency[ frequencySize ] = { 0 };

       // for each answer, select value of an element of array
       // responses and use that value as subscript in array
       // frequency to determine element to increment
       for (int answer = 0; answer < responseSize; answer++ )
          frequency[ vote[answer] ] ++;
    
       // display results
       cout << "Rating" << setw( 17 ) << "Frequency" << endl;
    
       // output frequencies in tabular format
       for ( int rating = 1; rating < frequencySize; rating++ )
          cout << setw( 6 ) << rating
               << setw( 17 ) << frequency[ rating ] << endl;
    
       return 0;  // indicates successful termination
    printmax(frequency);
    } // end main
