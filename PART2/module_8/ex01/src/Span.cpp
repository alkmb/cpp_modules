#include "../includes/Span.hpp"

Span::Span()
{
  std::cout << "Default constructor has been called" << std::endl;
}

Span::Span(unsigned int n)
{
  this->_n = n;
  std::cout << "Constructor with parameter: " << n << " has been called." << std::endl;
}

Span::Span(const Span &src)
{
  *this = src;
  std::cout << "Copy constructor has been called" << std::endl;
}

Span &Span::operator=(const Span &rhs)
{
  if (this != &rhs)
  {
    this->_n = rhs._n;
    
  }

  std::cout << "Copy assigment operator has been called" << std::endl;
  return *this;
}

Span::~Span()
{
  std::cout << "Destructor has been called." << std::endl;
}

void  Span::addNumber(unsigned int num)
{
  
  if (_list.size() > _n)
    throw std::out_of_range("empty list");
  _list.push_back(num);
}

unsigned int Span::shortestSpan() const
{

  if (_list.size() > _n)
    throw std::out_of_range("empty list");
  unsigned int min = Span::longestSpan();
  for (std::list<int>::const_iterator it = _list.begin(); it != _list.end(); ++it)
  {
    for (std::list<int>::const_iterator iter = _list.begin(); iter != _list.end(); ++iter)
    {
      if (it == iter)
        continue;
      if (std::abs( *iter - *it) < static_cast< int >(min))
        min = std::abs(*iter - *it);
    }
  }
  return min;
}

unsigned int Span::longestSpan() const
{
  if (_list.size() > _n)
    throw std::out_of_range("empty list");
    return ( *std::max_element( _list.begin(), _list.end() ) - *std::min_element( _list.begin(), _list.end() ) );

}


