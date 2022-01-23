// Employee class definition.
      // Member functions defined in employee1.cpp.
      #ifndef EMPLOYEE1_H
      #define EMPLOYEE1_H
      
      // include Date class definition from date1.h
      #include "date1.h"
      
    class Employee {
    
    public:
       Employee(                                                   
          const char *, const char *, const Date &, const Date & );
    
       void print() const;
       ~Employee();  // provided to confirm destruction order
    
    private:
       char firstName[ 25 ];
       char lastName[ 25 ];
       const Date birthDate;  // composition: member object
       const Date hireDate;   // composition: member object
    
    }; // end class Employee

    
    #endif

