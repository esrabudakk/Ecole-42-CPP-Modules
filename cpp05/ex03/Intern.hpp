//
// Created by Esra Budak on 1/13/23.
//

#ifndef INTERN_HPP
#define INTERN_HPP


#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public:
    Intern();
    Intern(const Intern &intern);
    virtual ~Intern();
    Intern &operator=(const Intern &intern);

    AForm *makeForm(const std::string &name, const std::string &target) const;
    class IllegalInputException : public std::exception
    {
        const char *what() const throw(){
            return "Form name is Illegal Input.";
        }
    };
};

#endif
