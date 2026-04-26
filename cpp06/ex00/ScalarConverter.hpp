#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib> // strtod
#include <cctype>  // isdigit, isprint
#include <iomanip> // fixed , setprecision
#include <limits> //numeric_limits
#include <cmath>
#include <cerrno>

class ScalarConverter {
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& other);
        ScalarConverter& operator=(const ScalarConverter& other);
        ~ScalarConverter();
    public:
        static void convert(const std::string& str);
};

#endif