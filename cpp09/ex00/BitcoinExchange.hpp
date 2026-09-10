#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>

class BitcoinExchange
{
    private:
        std::map<std::string, float> dataBase;

        bool loadDatabase(const std::string& filename);
        bool isValidDate(const std::string& date) const;
        bool isLeapYear(int year) const;
        float getRateForDate(std::string date) const;

    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &other);
        BitcoinExchange& operator=(const BitcoinExchange &other);
        ~BitcoinExchange();
        bool processInputFile(const std::string& filename);

};
#endif