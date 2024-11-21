#include "../includes/Span.hpp"

Span::Span()
{
  std::cout << "Default constructor has been called" << std::endl;
}

Span::Span(unsigned int integer)
{
  //this->_integer = integer; // Correctly implement the vector assigment.
  std::cout << "Constructor with parameter: " << integer << " has been called." << std::endl;
}

Span::Span(const Span &src)
{
  *this = src;
  std::cout << "Copy constructor has been called" << endl;
}

Span &Span::operator=(const Span &rhs)
{
  if (this != &rhs)
  {
      //Assign all vector parameters properly.
  }

  std::cout << "Copy assigment operator has been called" << std::endl;
  return *this;
}

~Span::Span()
{
  std::cout << "Destructor has been called." << std::endl;
}
