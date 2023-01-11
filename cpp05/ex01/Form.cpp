//
// Created by ebudak on 1/11/23.
//


#include "Form.hpp"
//
// Created by ebudak on 1/10/23.
//

#include "Form.hpp"
Form::Form():name("Form"), grade(150){
    cout << "Form default constructor called";
}
Form::~Form(){
    cout << "Form destructor called "<< endl;
}
Form::Form(const string _name, int _grade){
    this->name=_name;
    if(_grade>150)
        throw Form::GradeTooLowException();
    else if(_grade < 1)
        throw Form::GradeTooHighException();
    else
        this->grade = _grade;
}
Form::Form(const Form &src){
    this->name = src.name;
    this->grade = src.grade;
}
Form &Form::operator=(const Form &src){
    this->name = src.name;
    this->grade = src.grade;
    return *this;
}


string Form::getName() const {
    return this->name;
}

int Form::getGrade() const {
    return this->grade;
}
void Form::beSigned(Bureaucrat bureaucrat) {
    if(bureaucrat.getGrade() >= 1 && bureaucrat.getGrade() <= 150)
        cout << "Form is signed for " << bureaucrat.getName() << endl;
    else
        throw Form::GradeTooLowException();
}

void Form::incrementGrade(){
    if(this->grade < 1)
        throw Form::GradeTooHighException();
    else
        this->grade++;
}
void Form::decrementGrade(){
    if(this->grade < 1)
        throw Form::GradeTooHighException();
    else
        this->grade--;
}

std::ostream &operator<<(std::ostream &out, const Form &value)
{
    out << value.getName() << ", Form grade " << value.getGrade();
    return out;
}