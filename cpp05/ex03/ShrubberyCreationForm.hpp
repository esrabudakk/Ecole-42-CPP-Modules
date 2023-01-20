
#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"
#include "fstream"

#define ASCII_TREES "               ,@@@@@@@,\n"                  \
                    "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"      \
                    "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"    \
                    "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n" \
                    "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"  \
                    "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"   \
                    "   `&%\\ ` /%&'    |.|        \\ '|8'\n"     \
                    "       |o|        | |         | |\n"         \
                    "       |.|        | |         | |\n"         \
                    "jgs \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_"

class ShrubberyCreationForm: public AForm {
private:
    const string target;
public:
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &src);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);
    ShrubberyCreationForm(const string _target);
    void execute(Bureaucrat const &bureaucrat) const;
};

#endif 
