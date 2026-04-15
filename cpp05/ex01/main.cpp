#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try {
        Bureaucrat a("Ali", 50);
        Form f("TaxForm", 45, 30);

        std::cout << a << std::endl;
        std::cout << f << std::endl;

        a.signForm(f);
    }
    catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "------------------" << std::endl;

    try {
        Bureaucrat b("Ahmed", 40);
        Form f2("Contract", 45, 20);

        std::cout << b << std::endl;
        std::cout << f2 << std::endl;

        b.signForm(f2);
        std::cout << f2 << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "------------------" << std::endl;

    try {
        Form bad1("BadForm1", 0, 50);
    }
    catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "------------------" << std::endl;

    try {
        Form bad2("BadForm2", 50, 200);
    }
    catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}