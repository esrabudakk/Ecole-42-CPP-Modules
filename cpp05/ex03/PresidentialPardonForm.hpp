
#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"


class PresidentialPardonForm: public AForm {
private:
    const string target;
public:
    PresidentialPardonForm();
    ~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &src);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &src);
    PresidentialPardonForm(const string _target);
    void execute(Bureaucrat const &bureaucrat) const;

};

#endif 
