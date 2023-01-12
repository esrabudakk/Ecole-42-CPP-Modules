//
// Created by ebudak on 1/10/23.
//

#ifndef ECOLE_42_CPP_MODULES_BUREAUCRAT_HPP
#define ECOLE_42_CPP_MODULES_BUREAUCRAT_HPP

#include <iostream>
#include <exception>
using std::cout;
using std::endl;
using std::string;

class Bureaucrat {

private:
     string const name;
    int grade;
public:
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(const string _name, int _grade);
    Bureaucrat(const Bureaucrat &src);
    Bureaucrat &operator=(const Bureaucrat &src);
    void setName(string _name);
    string getName()const;
    void setGrade(int _grade);
    int getGrade()const;

    void incrementGrade();
    void decrementGrade();

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
