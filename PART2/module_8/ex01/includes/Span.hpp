#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>

class Span {

  private:
    const int std::vector<unsigned int> _integer;
  
  public:
    Span();
    Span(unsigned int integer);
    Span(const Span &src);
    Span& operator=(const Span &rhs);
    ~Span();

    addNumber(unsigned int sum);
    shortestSpan();
    longestSpan();

};

#endif
