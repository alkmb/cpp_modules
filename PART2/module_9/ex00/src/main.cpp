#include "../includes/BitcoinExchange.hpp"
#include <map>
#include <vector>
#include <sstream>
#include <limits>

bool isValidDate(const std::string &date)
{
    std::istringstream ss(date);
    int year, month, day;
    char delim1, delim2;
    if (ss >> year >> delim1 >> month >> delim2 >> day && delim1 == '-' && delim2 == '-')
    {
        if (year >= 2009 && year <= 2022 && month >= 1 && month <= 12 && day >= 1 && day <= 31)
        {
            return true;
        }
    }
    return false;
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << " <input_file>" << std::endl;
        return 1;
    }

    std::ifstream csvFile("files/data.csv");
    if (!csvFile.is_open())
    {
        std::cerr << "Error: could not open CSV file." << std::endl;
        return 1;
    }

    BitcoinExchange exchange;
    std::string csvLine;
    std::getline(csvFile, csvLine);
    while (std::getline(csvFile, csvLine))
    {
        exchange.append(csvLine);
    }
    csvFile.close();

    std::ifstream inputFile(argv[1]);
    if (!inputFile.is_open())
    {
        std::cerr << "Error: could not open input file." << std::endl;
        return 1;
    }

    std::string line;
    std::getline(inputFile, line);

    while (std::getline(inputFile, line))
    {
        size_t delimPos = line.find('|');
        if (delimPos == std::string::npos)
        {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }

        std::string date = line.substr(0, delimPos);
        std::string valueStr = line.substr(delimPos + 1);

        date = BitcoinExchange::trim(date);
        valueStr = BitcoinExchange::trim(valueStr);

        if (!isValidDate(date))
        {
            std::cerr << "Error: Bad input on key " << date << std::endl;
            continue;
        }

        try
        {
            float value = BitcoinExchange::stringToFloat(valueStr);
            if (value < 0)
            {
                std::cerr << "Error: not a positive number." << std::endl;
                continue;
            }
            if (value >= 1000)
            {
                std::cerr << "Error: value is too large." << std::endl;
                continue;
            }

            float exchangeRate = exchange.getRate(date);
            float result = value * exchangeRate;
            std::cout << date << " => " << value << " = " << result << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << "Error: invalid value => " << valueStr << std::endl;
        }
    }
    inputFile.close();

    return 0;
}
