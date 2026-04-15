#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm():name("non"), is_signed(false), gradeToSign(50), gradeToExecute(20){}

AForm::AForm(const std::string& str, int to_sign, int to_execute):name(str), is_signed(false), gradeToSign(to_sign), gradeToExecute(to_execute)
{
    if (gradeToExecute < 1 || gradeToSign < 1)
        throw GradeTooHighException();
    if (gradeToExecute > 150 || gradeToSign > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm& other):name(other.name), is_signed(other.is_signed), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute){}

AForm& AForm::operator=(const AForm& other)
{
    if (this != &other)
        is_signed = other.is_signed;
    return (*this);
}

AForm::~AForm(){};

const std::string& AForm::getName() const
{
    return (name);
}

bool AForm::getSigned() const
{
    return (is_signed);
}

int AForm::getGradeToSign() const
{
    return (gradeToSign);
}

int AForm::getGradeToExecute() const
{
    return (gradeToExecute);
}

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > gradeToSign)
        throw GradeTooLowException();
    is_signed = true;
}

void AForm::execute(Bureaucrat const& executor) const
{
    if (!is_signed)
        throw FormNotSignedException();
    if (executor.getGrade() > gradeToExecute)
        throw GradeTooLowException();
    executeAction();
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return ("the Grade is too High");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("the Grade is too Low");
}

const char* AForm::FormNotSignedException::what() const throw()
{
    return "form not signed";
}

std::ostream& operator<<(std::ostream& os, const AForm& obj)
{
    std::string b;
    if (obj.getSigned())
        b = "signed";
    else
        b = "not signed";
    os << obj.getName() << ", its status: " << b
        << ", grade required to sign it: " << obj.getGradeToSign()
        << ", grade required to execute it: " << obj.getGradeToExecute() << ".";
    return (os);
}