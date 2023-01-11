//
// Created by ebudak on 1/11/23.
//

#ifndef ECOLE_42_CPP_MODULES_FORM_HPP
#define ECOLE_42_CPP_MODULES_FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
using std::cout;
using std::endl;
using std::string;

class Form : public Bureaucrat{
private:
    string name;
    bool sign;
    int gradeToSign;
    int gradeToExec;
public:
    Form();
    ~Form();
    Form(const Form &src);
    Form &operator=(const Form &src);
    int getGradeToSign() const;
    int getGradeToExec() const;
    void beSigned(Bureaucrat bureaucrat);
    class GradeTooHighException : public std::exception {
        const char *what() const throw() {
            return "Grade too high";
        }
    };
    class GradeTooLowException : public std::exception {
        const char *what() const throw() {
            return "Grade too low";
        }
    };
};
    std::ostream &operator<<(std::ostream &out, const Form &value);

#endif //ECOLE_42_CPP_MODULES_FORM_HPP
