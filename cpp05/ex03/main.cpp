#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

int main()
{
    std::srand(std::time(0));

    Intern someRandomIntern;
    Bureaucrat boss("Boss", 1);
    Bureaucrat worker("Worker", 140);

    AForm* form1 = someRandomIntern.makeForm("robotomy request", "Bender");
    AForm* form2 = someRandomIntern.makeForm("shrubbery creation", "home");
    AForm* form3 = someRandomIntern.makeForm("presidential pardon", "Arthur");
    AForm* form4 = someRandomIntern.makeForm("unknown form", "Nobody");

    std::cout << "------------------" << std::endl;

    if (form1)
    {
        std::cout << *form1 << std::endl;
        boss.signForm(*form1);
        boss.executeForm(*form1);
        delete form1;
    }

    std::cout << "------------------" << std::endl;

    if (form2)
    {
        std::cout << *form2 << std::endl;
        worker.signForm(*form2);
        worker.executeForm(*form2);
        boss.executeForm(*form2);
        delete form2;
    }

    std::cout << "------------------" << std::endl;

    if (form3)
    {
        std::cout << *form3 << std::endl;
        boss.signForm(*form3);
        boss.executeForm(*form3);
        delete form3;
    }

    std::cout << "------------------" << std::endl;

    if (form4)
        delete form4;

    return 0;
}