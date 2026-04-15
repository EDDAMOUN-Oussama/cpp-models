#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form():name("non"), is_signed(false), gradeToSign(50), gradeToExecute(20){}

Form::Form(const std::string& str, int to_sign, int to_execute):name(str), is_signed(false), gradeToSign(to_sign), gradeToExecute(to_execute)
{
    if (gradeToExecute < 1 || gradeToSign < 1)
        throw GradeTooHighException();
    if (gradeToExecute > 150 || gradeToSign > 150)
        throw GradeTooLowException();
}

Form::Form(const Form& other):name(other.name), is_signed(other.is_signed), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute){}

Form& Form::operator=(const Form& other)
{
    if (this != &other)
        is_signed = other.is_signed;
    return (*this);
}

Form::~Form(){};

const std::string& Form::getName() const
{
    return (name);
}

bool Form::getSigned() const
{
    return (is_signed);
}

int Form::getGradeToSign() const
{
    return (gradeToSign);
}

int Form::getGradeToExecute() const
{
    return (gradeToExecute);
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > gradeToSign)
        throw GradeTooLowException();
    is_signed = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("the Grade is too High");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("the Grade is too Low");
}

std::ostream& operator<<(std::ostream& os, const Form& obj)
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