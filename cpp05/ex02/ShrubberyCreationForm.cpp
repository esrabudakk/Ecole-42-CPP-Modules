
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():AForm("Temp", 150,150){

}
ShrubberyCreationForm::~ShrubberyCreationForm() {
    cout << "ShrubberyCreationForm destructor called" << endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src): AForm(src), target(src.target)
{
    cout << "ShrubberyCreationForm copy constructor called" << endl;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
    this->AForm::operator=(src);
    const_cast<std::string &>(target) = src.target;
    cout << "ShrubberyCreationForm assignment operator called " << endl;
    return *this;
}
ShrubberyCreationForm::ShrubberyCreationForm(const string _target):AForm("ShrubberyCreationForm", 145, 137), target(_target) {
    cout << "ShrubberyCreationForm parameter constructor called for: " << target << endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &bureaucrat) const
{
    try
    {
        checkExecute(bureaucrat);
        cout << "A tree has been planted on " << target << endl;
        string fileName = target + "_shrubbery";
        std::ofstream ofs(fileName, std::ios::out);
        ofs << ASCII_TREES << endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Fail on executing, for: "<< target << " because " << e.what() << endl;
    }
}

