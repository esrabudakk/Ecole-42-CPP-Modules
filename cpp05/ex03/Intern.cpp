//
// Created by Esra Budak on 1/13/23.
//
#include "Intern.hpp"

Intern::Intern()
{
    cout << "Intern default constructor called" << endl;
}

Intern::Intern(const Intern &intern)
{
    cout << "Intern copy constructor called" << endl;
    (void)intern;
}

Intern::~Intern()
{
    cout << "Intern destructor called" << endl;
}

Intern &Intern::operator=(const Intern &intern)
{
    cout << "Intern assignment operator called" << endl;
    (void)intern;
    return *this;
}

static int getFormType(const string &name)
{
     string formNames[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    for (int i = 0; i < 3; i++)
    {
        if (!name.compare(formNames[i]))
        {
            return i;
        }
    }
    throw Intern::IllegalInputException();
}

AForm *Intern::makeForm(const string &name, const string &target) const
{
    string formNames[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    try
    {
        int formType = getFormType(name);
        AForm *form;
        switch (formType)
        {
            case 0:
                form = new PresidentialPardonForm(target);
                break;
            case 1:
                form = new RobotomyRequestForm(target);
                break;
            case 2:
                form = new ShrubberyCreationForm(target);
                break;
            default:
                form = NULL;
                break;
        }
        cout << "Intern creates " << *form << endl;
        return form;
    }
    catch (std::exception &e)
    {
        cout << e.what() << endl;
        return NULL;
    }
}
