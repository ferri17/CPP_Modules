#pragma once

#include <iostream>

class Base {
  
  private:
    std::string _name;
  public:
    Base( void );
    Base( Base const & other );
    Base &  operator=( Base const & other );
    ~Base( void );

};
