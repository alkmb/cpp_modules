#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
  std::cout << "Default constructor has been called." << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
  *this = src;
  std::cout << "Copy constructor has been called." << std::endl;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
  if (this != &rhs)
  {
    //implementation   
  }
  std::cout << "The copy assigment operator has been called." << std::endl;
  return *this;
}

BitcoinExchange::~BitcoinExchange()
{
  std::cout << "The destructor has been called." << std::endl;
}
