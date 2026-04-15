#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name("non"), grade(150){}

Bureaucrat::Bureaucrat(const std::string& name, int grade): name(name)
{
    if (grade > 150)
        throw GradeTooLowException();
    if (grade < 1)
        throw GradeTooHighException();
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other): name(other.getName()), grade(other.getGrade()){}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    if (this != &other)
        grade = other.getGrade();
    return(*this);
}

Bureaucrat::~Bureaucrat(){}

const std::string& Bureaucrat::getName() const
{
    return (name);
}

int Bureaucrat::getGrade() const
{
    return (grade);
}

void Bureaucrat::promote()
{
    int now;

    now = grade - 1;
    if (now < 1)
        throw GradeTooHighException();
    grade--;
}

void Bureaucrat::demote()
{
    int now;

    now = grade + 1;
    if (now > 150)
        throw GradeTooLowException();
    grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("the Grade is too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("the Grade is too Low");
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
    return (os);
}