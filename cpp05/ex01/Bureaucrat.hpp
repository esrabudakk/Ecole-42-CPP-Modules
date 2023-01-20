//
// Created by ebudak on 1/10/23.
//

#ifndef ECOLE_42_CPP_MODULES_BUREAUCRAT_HPP
#define ECOLE_42_CPP_MODULES_BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"
using std::cout;
using std::endl;
using std::string;

class Form;

class Bureaucrat {

private:
    const string name;
    int grade;
public:
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(const string _name, int _grade);
    Bureaucrat(const Bureaucrat &src);
    Bureaucrat &operator=(const Bureaucrat &src);

    string getName()const;
    int getGrade()const;

    void incrementGrade();
    void decrementGrade();
    void signForm(Form &form);
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
std::ostream &operator<<(std::ostream &out, const Bureaucrat &value);


#endif //ECOLE_42_CPP_MODULES_BUREAUCRAT_HPP
