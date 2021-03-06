      // Non-friend/non-member functions cannot access
      // private data of a class.
      #include <iostream>
      
      using std::cout;
      using std::endl;
      
      // Count class definition
    // (note that there is no friendship declaration)
    class Count {
    
    public:
      
       // constructor
       Count()
          : x( 0 )  // initialize x to 0
       { 
          // empty body
       
       } // end Count constructor
    


// output x 
       void print() const       
       { 
          cout << x << endl; 
    
       } // end function print
    
    private:
       int x;  // data member
    
    }; // end class Count
    
    // function tries to modify private data of Count,            
    // but cannot because function is not a friend of Count       
    void cannotSetX( Count &c, int val )                          
    {                                                             
       c.x = val;  // ERROR: cannot access private member in Count
                                                                  
    } // end function cannotSetX                                  
    


    int main()
    {
       Count counter;            // create Count object
    
       cannotSetX( counter, 3 ); // cannotSetX is not a friend
    
       return 0;
    
    } // end main
