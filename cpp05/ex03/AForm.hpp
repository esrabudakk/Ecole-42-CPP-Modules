//
// Created by ebudak on 1/11/23.
//

#ifndef ECOLE_42_CPP_MODULES_AForm_HPP
#define ECOLE_42_CPP_MODULES_AForm_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
using std::cout;
using std::endl;
using std::string;

class Bureaucrat;

class AForm{
private:
    const string name;
    const int gradeToExec;
    const int gradeToSign;
    bool sign;
public:
    AForm();
    virtual  ~AForm();
    AForm(const AForm &src);
    AForm(const string _name, const int _gradeToSign, const int _gradeToExec);
    AForm &operator=(const AForm &src);
    string getName() const;
    int getGradeToSign() const;
    int getGradeToExec() const;
    bool getSign() const;
    void beSigned(Bureaucrat &bureaucrat);
    virtual void execute(Bureaucrat const & executor) const = 0;
    void  checkExecute(Bureaucrat const &bureaucrat) const;
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
    class NotSignedException : public std::exception {
        const char *what() const throw() {
            return "Form is not signed!";

        }
    };
};

std::ostream &operator<<(std::ostream &out, const AForm &value);

#endif //ECOLE_42_CPP_MODULES_AForm_HPP
