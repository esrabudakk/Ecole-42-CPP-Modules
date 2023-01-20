//
// Created by ebudak on 1/11/23.
//

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
using std::cout;
using std::endl;
using std::string;

class Bureaucrat;

class Form{
private:
    string const name;
    int const gradeToExec;
    int const gradeToSign;
    bool sign;
public:
    Form();
    ~Form();
    Form(const Form &src);
    Form(const string _name, const int _gradeToSign, const int _gradeToExec);
    Form &operator=(const Form &src);
    string getName() const;
    int getGradeToSign() const;
    int getGradeToExec() const;
    bool getSign() const;
    void beSigned(Bureaucrat &bureaucrat);

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
