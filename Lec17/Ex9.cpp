// Point2 class definition represents an x-y coordinate pair.
      #ifndef POINT2_H
      #define POINT2_H
      
      class Point2 {
      
      public:
         Point2( int = 0, int = 0 ); // default constructor
    
       void setX( int );    // set x in coordinate pair
       int getX() const;    // return x from coordinate pair
       
       void setY( int );    // set y in coordinate pair
       int getY() const;    // return y from coordinate pair
       
       void print() const;  // output Point2 object
    
    protected:                             
       int x;  // x part of coordinate pair
       int y;  // y part of coordinate pair
    
    }; // end class Point2
    
    #endif

// return x from coordinate pair
    int Point2::getX() const
    {
       return x;
    
    } // end function getX
    
    // set y in coordinate pair
    void Point2::setY( int yValue )
    {
       y = yValue; // no need for validation
    
    } // end function setY
    
    // return y from coordinate pair
    int Point2::getY() const
    {
       return y;
    
    } // end function getY
       

// output Point2 object
    void Point2::print() const
    {
       cout << '[' << x << ", " << y << ']';
    
    } // end function print


