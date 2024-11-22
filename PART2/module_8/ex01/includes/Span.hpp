#ifndef SPAN_HPP
#define SPAN_HPP

#include <list>
#include <iostream>
#include <algorithm>
#include <exception>

class Span {

  private:
    std::list <int> _list;
    unsigned int    _n;

    Span();

  public:
    Span( unsigned int n );
    Span( const Span &src );
    Span& operator=( const Span &rhs );
    ~Span();

    void addNumber(unsigned int n);
    unsigned int shortestSpan() const;
    unsigned int longestSpan() const;

};

#endif
