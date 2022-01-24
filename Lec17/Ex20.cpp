// Point4 class definition represents an x-y coordinate pair.
      #ifndef POINT4_H
      #define POINT4_H
      
      class Point4 {
      
      public:
         Point4( int = 0, int = 0 ); // default constructor
       ~Point4();           // destructor                
    
       void setX( int );    // set x in coordinate pair
       int getX() const;    // return x from coordinate pair
       
       void setY( int );    // set y in coordinate pair
       int getY() const;    // return y from coordinate pair
       
       void print() const;  // output Point3 object
    
    private: 
       int x;  // x part of coordinate pair
       int y;  // y part of coordinate pair
    
    }; // end class Point4
    
    #endif


    } // end Point4 destructor       
    
    // set x in coordinate pair
    void Point4::setX( int xValue )
    {
       x = xValue; // no need for validation
    
    } // end function setX
    
    // return x from coordinate pair
    int Point4::getX() const
    {
       return x;
    
    } // end function getX
    
    // set y in coordinate pair
    void Point4::setY( int yValue )
    {
       y = yValue; // no need for validation
    
    } // end function setY


// return y from coordinate pair
    int Point4::getY() const
    {
       return y;
    
    } // end function getY
       
    // output Point4 object
    void Point4::print() const
    {
       cout << '[' << getX() << ", " << getY() << ']';
    
    } // end function print


