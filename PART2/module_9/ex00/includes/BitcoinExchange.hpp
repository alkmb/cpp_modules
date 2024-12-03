#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>

class BitcoinExchange
{
public:
    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &src);
    BitcoinExchange &operator=(const BitcoinExchange &src);

    void append(const std::string &key, float value);
    void append(const std::map<std::string, float> &src);
    void append(const std::string &line);

    float getRate(const std::string &key) const;

    static std::string trim(const std::string &str);
    static float stringToFloat(const std::string &str);

private:
    std::map<std::string, float> data;
};

#endif