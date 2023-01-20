//
// Created by ebudak on 1/11/23.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("temp", 150, 150) {}

PresidentialPardonForm::PresidentialPardonForm(const string _target): AForm("PresidentialPardonForm", 25, 5), target(_target)
{
    cout << "PresidentialPardonForm parameter constructor called for: " << target << endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src): AForm(src), target(src.target)
{
    cout << "PresidentialPardonForm copy constructor called " << endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
    this->AForm::operator=(src);
    const_cast<std::string &>(target) = src.target;
    cout << "PresidentialPardonForm assignment operator called" << endl;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    cout << "PresidentialPardonForm destructor called" << endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &bureaucrat) const
{
    try
    {
        checkExecute(bureaucrat);
        cout << target << " has been pardoned by Zaphod Beeblebrox" << endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Fail on executing, for: "<< target << " because " << e.what() << endl;
    }
}