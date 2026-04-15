#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class AForm {
    private:
        const std::string name;
        bool is_signed;
        const int gradeToSign;
        const int gradeToExecute;

    public:
        AForm();
        AForm(const std::string& str, int to_sign, int to_execute);
        AForm(const AForm& other);
        AForm& operator=(const AForm& other);
        virtual ~AForm();
        const std::string& getName() const;
        bool getSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        void beSigned(const Bureaucrat& bureaucrat);
        void execute(Bureaucrat const& executor) const;
        virtual void executeAction() const = 0;
        class GradeTooHighException: public std::exception {
            public:
                const char* what() const throw();
        };
        class GradeTooLowException: public std::exception {
            public:
                const char* what() const throw();
        };
        class FormNotSignedException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& os, const AForm& obj);


#endif