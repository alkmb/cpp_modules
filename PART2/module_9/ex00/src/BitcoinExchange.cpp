#include "../includes/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src) : data(src.data) {}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &src)
{
    if (this != &src)
    {
        data = src.data;
    }
    return *this;
}

void BitcoinExchange::append(const std::string &key, float value)
{
    data[key] = value;
}

void BitcoinExchange::append(const std::map<std::string, float> &src)
{
    data.insert(src.begin(), src.end());
}

void BitcoinExchange::append(const std::string &line)
{
    std::stringstream ss(line);
    std::string key;
    float value;

    if (line.find(',') != std::string::npos)
    {
        std::getline(ss, key, ',');
        if (key == "date")
            return;
        ss >> value;
        append(key, value);
    }
    else
    {
        std::cerr << "Error: Bad input" << std::endl;
    }
}

float BitcoinExchange::getRate(const std::string &key) const
{
    std::map<std::string, float>::const_iterator it = data.find(key);
    if (it != data.end())
    {
        return it->second;
    }

    struct Date
    {
        int year, month, day;
    };

    Date date;
    std::stringstream ss(key);
    char delim;
    ss >> date.year >> delim >> date.month >> delim >> date.day;

    while (it == data.end())
    {
        date.day--;
        if (date.day == 0)
        {
            static const int daysInMonths[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            date.month--;
            if (date.month == 0)
            {
                date.year--;
                date.month = 12;
            }
            date.day = daysInMonths[date.month - 1];
            if ((date.year % 4 == 0 && (date.year % 100 != 0 || date.year % 400 == 0)) && date.month == 2)
            {
                date.day = 29;
            }
        }

        if (date.year < 2009)
        {
            std::cerr << "Error: wrong data in database" << std::endl;
            return 0;
        }

        std::stringstream newKey;
        newKey << date.year << "-" << std::setw(2) << std::setfill('0') << date.month << "-" << std::setw(2) << std::setfill('0') << date.day;
        it = data.find(newKey.str());
    }

    return it->second;
}

std::string BitcoinExchange::trim(const std::string &str)
{
    size_t first = str.find_first_not_of(' ');
    if (first == std::string::npos)
        return str;
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, (last - first + 1));
}

float BitcoinExchange::stringToFloat(const std::string &str)
{
    std::stringstream ss(str);
    float value;
    ss >> value;
    return value;
}
