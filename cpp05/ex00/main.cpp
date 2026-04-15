#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
    try {
        Bureaucrat a("Ali", 2);
        std::cout << a << std::endl;

        a.promote();
        std::cout << a << std::endl;

        a.promote();
    }
    catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "------------------" << std::endl;

    try {
        Bureaucrat b("Ahmed", 0);
    }
    catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "------------------" << std::endl;

    try {
        Bureaucrat c("Omar", 200);
    }
    catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "------------------" << std::endl;

    try {
        Bureaucrat d("Oussama", 150);
        std::cout << d << std::endl;

        d.demote();
    }
    catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}