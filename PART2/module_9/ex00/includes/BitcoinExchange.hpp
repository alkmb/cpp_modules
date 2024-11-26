#ifndef BITCONEXCHANGE_HPP
#define BITCONEXCHANGE_HPP

#include <iostream>

class BitcoinExchange
{
  private:

  public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &src);
    BitcoinExchange &operator=(const BitcoinExchange &rhs);
    ~BitcoinExchange();

};

#endif
