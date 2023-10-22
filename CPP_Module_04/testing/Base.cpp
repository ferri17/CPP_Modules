#include "Base.hpp"

Base::Base( void ) : _name("Default") {
  
  std::cout << "Default constructor called" << std::endl;
}

Base::Base( Base const & other ) {
  
  std::cout << "Copy constructor called" << std::endl;
  *this = other;
}

Base &  Base::operator=( Base const & other ) {

  std::cout << "Assginment operator called" << std::endl;
  if (this != &other)
  {
    std::cout << "in assigment" << std::endl;
    _name = other._name;
  }
  return (*this);
}

Base::~Base( void ) {
  
}


