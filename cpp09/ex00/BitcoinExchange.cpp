#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    loadDatabase("data.csv");
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{
    *this = other;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
    if (this != &other)
        dataBase = other.dataBase;
    return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
}

bool BitcoinExchange::loadDatabase(const std::string& filename)
{
    std::ifstream file(filename.c_str());

    if (!file.is_open())
    {
        std::cerr << "Error: could not open database." << std::endl;
        return (false);
    }

    std::string line;
    std::getline(file, line);
    while (std::getline(file, line))
    {
        std::stringstream ss(line);
        std::string date;
        std::string rateString;
        if (!std::getline(ss, date, ','))
            continue;
        if (!std::getline(ss, rateString))
            continue;
        if (!isValidDate(date))
            continue;
        float rate;
        std::stringstream rateStream(rateString);
        rateStream >> rate;
        if (rateStream.fail())
            continue;
        dataBase[date] = rate;
    }
    file.close();
    return (true);
}

bool BitcoinExchange::isLeapYear(int year) const
{
    if (year % 400 == 0)
        return (true);
    if (year % 100 == 0)
        return (false);
    if (year % 4 == 0)
        return (true);
    return (false);
}

bool BitcoinExchange::isValidDate(const std::string& date) const
{
    if (date.length() != 10)
        return (false);

    if (date[4] != '-' || date[7] != '-')
        return (false);

    for (int i = 0; i < 10; i++)
    {
        if (i == 4 || i == 7)
            continue;
        if (!std::isdigit(date[i]))
            return (false);
    }

    int year;
    int month;
    int day;

    std::stringstream yearStream(date.substr(0, 4));
    std::stringstream monthStream(date.substr(5, 2));
    std::stringstream dayStream(date.substr(8, 2));

    yearStream >> year;
    monthStream >> month;
    dayStream >> day;

    if (yearStream.fail() || year < 0)
        return (false);

    if (monthStream.fail() || month < 1 || month > 12)
        return (false);

    int daysInMonth[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    if (isLeapYear(year))
        daysInMonth[1] = 29;

    if (dayStream.fail() || day < 1 || day > daysInMonth[month - 1])
        return (false);

    return (true);
}

bool BitcoinExchange::processInputFile(const std::string& filename)
{
    std::ifstream file(filename.c_str());

    if (!file.is_open())
    {
        std::cerr << "Error: could not open file." << std::endl;
        return (false);
    }

    if (dataBase.empty())
    {
        std::cerr << "Error: database is empty." << std::endl;
        return (false);
    }

    std::string line;
    std::getline(file, line);

    while (std::getline(file, line))
    {
        std::stringstream ss(line);
        std::string date;
        std::string tmp;
        float value;
        ss >> date;
        if (ss.fail() || !isValidDate(date))
        {
            std::cerr << "Error: bad input => " << line <<std::endl;
            continue;
        }
        ss >> tmp;
        if (tmp != "|" || ss.fail())
        {
            std::cerr << "Error: bad input => " << line <<std::endl;
            continue;
        }
        ss >> value;
        if (ss.fail() || !ss.eof())
        {
            std::cerr << "Error: bad input => " << line <<std::endl;
            continue;
        }
        if (value < 0)
        {
            std::cerr << "Error: not a positive number." << std::endl;
            continue;
        }

        if (value > 1000)
        {
            std::cerr << "Error: too large a number." << std::endl;
            continue;
        }

        float rate = getRateForDate(date);

        float result = value * rate;

        std::cout << date << " => " << value << " = " << result << std::endl;
    }
    file.close();
    return (true);
}


float BitcoinExchange::getRateForDate(std::string date) const
{
    std::map<std::string, float>::const_iterator it = dataBase.lower_bound(date);
	if (it != dataBase.end() && it->first == date)
		return (it->second);
	if (it == dataBase.begin())
		return (0.0);
	--it;
	return (it->second);
}
