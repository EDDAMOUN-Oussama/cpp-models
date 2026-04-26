#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    (void)other;
}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
    (void)other;
    return *this;
}
ScalarConverter::~ScalarConverter() {}

std::string trim(const std::string& str)
{
	size_t start = 0;
	size_t end = str.length();

	while (start < str.length() && std::isspace(static_cast<unsigned char>(str[start])))
		start++;

	while (end > start && std::isspace(static_cast<unsigned char>(str[end - 1])))
		end--;

	return str.substr(start, end - start);
}

bool isPseudoFloat(const std::string &str)
{
    return (str == "nanf" || str == "+inff" || str == "-inff");
}

bool isPseudoDouble(const std::string &str)
{
    return (str == "nan" || str == "+inf" || str == "-inf");
}

bool isChar(const std::string &str)
{
    return (str.length() == 1 && !std::isdigit(static_cast<unsigned char>(str[0])));
}

bool isInt(const std::string &str)
{
    char *end;

    if (str.empty())
        return false;

    errno = 0;
    std::strtol(str.c_str(), &end, 10);

    if (*end != '\0')
        return false;
    if (errno == ERANGE)
        return false;
    return true;
}

bool isFloat(const std::string &str)
{
    char *end;
    std::string core;

    if (str.length() < 2)
        return false;
    if (str[str.length() - 1] != 'f')
        return false;
    if (isPseudoFloat(str))
        return true;

    core = str.substr(0, str.length() - 1);
    if (core.empty())
        return false;

    errno = 0;
    std::strtod(core.c_str(), &end);
    if (*end != '\0')
        return false;
    if (errno == ERANGE)
        return false;
    return true;
}

bool isDouble(const std::string &str)
{
    char *end;

    if (str.empty())
        return false;
    if (isPseudoDouble(str))
        return true;

    errno = 0;
    std::strtod(str.c_str(), &end);
    if (*end != '\0')
        return false;
    if (errno == ERANGE)
        return false;
    return true;
}

void printCharFromChar(char c)
{
    if (!std::isprint(static_cast<unsigned char>(c)))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << c << "'" << std::endl;
}

void printIntFromChar(char c)
{
    int i = static_cast<int>(c);
    std::cout << "int: " << i << std::endl;
}

void printFloatFromChar(char c)
{
    float f = static_cast<float>(c);
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << f << "f" << std::endl;
}

void printDoubleFromChar(char c)
{
    double d = static_cast<double>(c);
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "double: " << d << std::endl;
}

void fromChar(char c)
{
    printCharFromChar(c);
    printIntFromChar(c);
    printFloatFromChar(c);
    printDoubleFromChar(c);
}

void printCharFromInt(int i)
{
    if (i < std::numeric_limits<char>::min() || i > std::numeric_limits<char>::max())
    {
        std::cout << "char: impossible" << std::endl;
        return;
    }

    char c = static_cast<char>(i);
    if (!std::isprint(static_cast<unsigned char>(c)))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << c << "'" << std::endl;
}

void printIntFromInt(int i)
{
    std::cout << "int: " << i << std::endl;
}

void printFloatFromInt(int i)
{
    float f = static_cast<float>(i);
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << f << "f" << std::endl;
}

void printDoubleFromInt(int i)
{
    double d = static_cast<double>(i);
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "double: " << d << std::endl;
}

void fromInt(int i)
{
    printCharFromInt(i);
    printIntFromInt(i);
    printFloatFromInt(i);
    printDoubleFromInt(i);
}

void printCharFromFloat(float f)
{
    if (std::isnan(f) || std::isinf(f) || f < std::numeric_limits<char>::min() || f > std::numeric_limits<char>::max())
    {
        std::cout << "char: impossible" << std::endl;
        return;
    }

    char c = static_cast<char>(f);
    if (!std::isprint(static_cast<unsigned char>(c)))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << c << "'" << std::endl;
}

void printIntFromFloat(float f)
{
    if (std::isnan(f) || std::isinf(f) || f < std::numeric_limits<int>::min() || f > std::numeric_limits<int>::max())
    {
        std::cout << "int: impossible" << std::endl;
        return;
    }

    int i = static_cast<int>(f);
    std::cout << "int: " << i << std::endl;
}

void printFloatFromFloat(float f)
{
    if (std::isnan(f))
    {
        std::cout << "float: nanf" << std::endl;
        return;
    }
    if (std::isinf(f))
    {
        if (f > 0)
            std::cout << "float: +inff" << std::endl;
        else
            std::cout << "float: -inff" << std::endl;
        return;
    }

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << f << "f" << std::endl;
}

void printDoubleFromFloat(float f)
{
    double d = static_cast<double>(f);

    if (std::isnan(d))
    {
        std::cout << "double: nan" << std::endl;
        return;
    }
    if (std::isinf(d))
    {
        if (d > 0)
            std::cout << "double: +inf" << std::endl;
        else
            std::cout << "double: -inf" << std::endl;
        return;
    }

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "double: " << d << std::endl;
}

void fromFloat(float f)
{
    printCharFromFloat(f);
    printIntFromFloat(f);
    printFloatFromFloat(f);
    printDoubleFromFloat(f);
}

void printCharFromDouble(double d)
{
    if (std::isnan(d) || std::isinf(d) || d < std::numeric_limits<char>::min() || d > std::numeric_limits<char>::max())
    {
        std::cout << "char: impossible" << std::endl;
        return;
    }

    char c = static_cast<char>(d);
    if (!std::isprint(static_cast<unsigned char>(c)))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << c << "'" << std::endl;
}

void printIntFromDouble(double d)
{
    if (std::isnan(d) || std::isinf(d) || d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max())
    {
        std::cout << "int: impossible" << std::endl;
        return;
    }

    int i = static_cast<int>(d);
    std::cout << "int: " << i << std::endl;
}

void printFloatFromDouble(double d)
{
    float f = static_cast<float>(d);

    if (std::isnan(d))
    {
        std::cout << "float: nanf" << std::endl;
        return;
    }
    if (std::isinf(d))
    {
        if (d > 0)
            std::cout << "float: +inff" << std::endl;
        else
            std::cout << "float: -inff" << std::endl;
        return;
    }

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << f << "f" << std::endl;
}

void printDoubleFromDouble(double d)
{
    if (std::isnan(d))
    {
        std::cout << "double: nan" << std::endl;
        return;
    }
    if (std::isinf(d))
    {
        if (d > 0)
            std::cout << "double: +inf" << std::endl;
        else
            std::cout << "double: -inf" << std::endl;
        return;
    }

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "double: " << d << std::endl;
}

void fromDouble(double d)
{
    printCharFromDouble(d);
    printIntFromDouble(d);
    printFloatFromDouble(d);
    printDoubleFromDouble(d);
}

void printImpossibleAll()
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: impossible" << std::endl;
    std::cout << "double: impossible" << std::endl;
}


void ScalarConverter::convert(const std::string &literal)
{
    std::string str = trim(literal);

    if (str.empty())
    {
        printImpossibleAll();
        return;
    }

    if (isChar(str))
    {
        char c = str[0];
        fromChar(c);
    }
    else if (isPseudoFloat(str))
    {
        float f;
        if (str == "nanf")
            f = std::numeric_limits<float>::quiet_NaN();
        else if (str == "+inff")
            f = std::numeric_limits<float>::infinity();
        else
            f = -std::numeric_limits<float>::infinity();
        fromFloat(f);
    }
    else if (isPseudoDouble(str))
    {
        double d;
        if (str == "nan")
            d = std::numeric_limits<double>::quiet_NaN();
        else if (str == "+inf")
            d = std::numeric_limits<double>::infinity();
        else
            d = -std::numeric_limits<double>::infinity();
        fromDouble(d);
    }
    else if (isInt(str))
    {
        long l = std::strtol(str.c_str(), NULL, 10);
        if (l < std::numeric_limits<int>::min() || l > std::numeric_limits<int>::max())
        {
            printImpossibleAll();
            return;
        }
        int n = static_cast<int>(l);
        fromInt(n);
    }
    else if (isFloat(str))
    {
        std::string core = str.substr(0, str.length() - 1);
        double parsed = std::strtod(core.c_str(), NULL);

        if (parsed < -std::numeric_limits<float>::max() || parsed > std::numeric_limits<float>::max())
        {
            printImpossibleAll();
            return;
        }
        float f = static_cast<float>(parsed);
        fromFloat(f);
    }
    else if (isDouble(str))
    {
        double d = std::strtod(str.c_str(), NULL);
        fromDouble(d);
    }
    else
        printImpossibleAll();
}