// Overloading the stream-insertion and 
      // stream-extraction operators.
      #include <iostream>
      
      using std::cout;
      using std::cin;
      using std::endl;
      using std::ostream;
    using std::istream;
    
    #include <iomanip>
    
    using std::setw;
    
    // PhoneNumber class definition
    class PhoneNumber {
       friend ostream &operator<<( ostream&, const PhoneNumber & );
       friend istream &operator>>( istream&, PhoneNumber & );      
    
    private:
       char areaCode[ 4 ];  // 3-digit area code and null
       char exchange[ 4 ];  // 3-digit exchange and null
       char line[ 5 ];      // 4-digit line and null
    
    }; // end class PhoneNumber

// overloaded stream-insertion operator; cannot be            
    // a member function if we would like to invoke it with       
    // cout << somePhoneNumber;                                   
    ostream &operator<<( ostream &output, const PhoneNumber &num )
    {                                                             
       output << "(" << num.areaCode << ") "                      
              << num.exchange << "-" << num.line;                 
                                                                  
       return output;     // enables cout << a << b << c;         
                                                                  
    } // end function operator<<                                  
    
    // overloaded stream-extraction operator; cannot be       
    // a member function if we would like to invoke it with   
    // cin >> somePhoneNumber;                                
    istream &operator>>( istream &input, PhoneNumber &num )   
    {                                                         
       input.ignore();                     // skip (          
       input >> setw( 4 ) >> num.areaCode; // input area code 
       input.ignore( 2 );                  // skip ) and space
       input >> setw( 4 ) >> num.exchange; // input exchange  
       input.ignore();                     // skip dash (-)   
       input >> setw( 5 ) >> num.line;     // input line      
                                                              
       return input;      // enables cin >> a >> b >> c;      


    } // end function operator>>                              
    
    int main()
    {
       PhoneNumber phone; // create object phone
    
       cout << "Enter phone number in the form (123) 456-7890:\n";
    
       // cin >> phone invokes operator>> by implicitly issuing
       // the non-member function call operator>>( cin, phone )
       cin >> phone;                                           
    
       cout << "The phone number entered was: " ;
    
       // cout << phone invokes operator<< by implicitly issuing
       // the non-member function call operator<<( cout, phone )
       cout << phone << endl;                                   
    
       return 0;
    
    } // end main
