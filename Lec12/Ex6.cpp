// Using strtok.
      #include <iostream>
      
      using std::cout;
      using std::endl;
      
      #include <cstring>  // prototype for strtok
      
    int main()
    {
       char sentence[] = "This is a sentence with 7 tokens";
       char *tokenPtr;
    
       cout << "The string to be tokenized is:\n" << sentence
            << "\n\nThe tokens are:\n\n";
    
       // begin tokenization of sentence
       tokenPtr = strtok( sentence, " " );
    


// continue tokenizing sentence until tokenPtr becomes NULL
       while ( tokenPtr != NULL ) {
          cout << tokenPtr << '\n';
          tokenPtr = strtok( NULL, " " );  // get next token 
    
       } // end while
    
       cout << "\nAfter strtok, sentence = " << sentence << endl;
    
       return 0;  // indicates successful termination
    
    } // end main
