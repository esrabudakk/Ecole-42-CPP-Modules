
#include "RobotomyRequestForm.hpp"
#include <sys/time.h>

RobotomyRequestForm::RobotomyRequestForm() : AForm("temp", 150, 150) {
    cout << "RobotomyRequestForm default constructor called" << endl;
}

RobotomyRequestForm::RobotomyRequestForm(const string _target): AForm("RobotomyRequestForm",72, 45), target(_target){
    cout << "RobotomyRequestForm parameter constructor called for: " << target << endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src): AForm(src), target(src.target){
    cout << "RobotomyRequestForm copy constructor called" << endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
    this->AForm::operator=(src);
    const_cast<std::string &>(target) = src.target;
    cout << "RobotomyRequestForm assignment operator called" << endl;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called " << endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &bureaucrat) const
{
    try
    {
        checkExecute(bureaucrat);
        cout << target << " make some drilling noises " << endl;
        int random = rand();
        if (random % 2 == 0)
        {
            cout << target << " has been robotomized" << endl;
        }
        else
        {
            cout << target << " has been failed to robotomized." << endl;
        }
    }
    catch (std::exception &e)
    {
        std::cerr << "Fail on executing, for: "<< target << " because " << e.what() << endl;

    }
}