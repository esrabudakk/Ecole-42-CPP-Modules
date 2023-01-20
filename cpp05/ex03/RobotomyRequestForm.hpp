
#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"


class RobotomyRequestForm: public AForm {
private:
    const string target;
public:
    RobotomyRequestForm();
    ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &src);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &src);
    RobotomyRequestForm(const string _target);
    void execute(Bureaucrat const &bureaucrat) const;

};

#endif 
