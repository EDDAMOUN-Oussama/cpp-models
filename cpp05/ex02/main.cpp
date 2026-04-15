#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    std::srand(std::time(0));

    Bureaucrat low("Low", 150);
    Bureaucrat mid("Mid", 40);
    Bureaucrat high("High", 1);

    ShrubberyCreationForm shrub("home");
    RobotomyRequestForm robot("Bender");
    PresidentialPardonForm pardon("Arthur Dent");

    std::cout << "----- execute unsigned form -----" << std::endl;
    high.executeForm(shrub);

    std::cout << "\n----- sign fail -----" << std::endl;
    low.signForm(shrub);

    std::cout << "\n----- shrubbery success -----" << std::endl;
    mid.signForm(shrub);
    mid.executeForm(shrub);

    std::cout << "\n----- robotomy success -----" << std::endl;
    mid.signForm(robot);
    mid.executeForm(robot);

    std::cout << "\n----- pardon sign fail -----" << std::endl;
    mid.signForm(pardon);

    std::cout << "\n----- pardon success -----" << std::endl;
    high.signForm(pardon);
    high.executeForm(pardon);

    std::cout << "\n----- execute fail (grade too low) -----" << std::endl;
    mid.executeForm(pardon);

    std::cout << "\n----- sign already signed form -----" << std::endl;
    high.signForm(shrub);

    std::cout << "\n----- robotomy multiple tests -----" << std::endl;
    for (int i = 0; i < 3; i++)
        mid.executeForm(robot);

    return 0;
}