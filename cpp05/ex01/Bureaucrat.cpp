//
// Created by ebudak on 1/10/23.
//

#include "Bureaucrat.hpp"
Bureaucrat::Bureaucrat():name("Bureaucrat"), grade(150){
    cout << "Bureaucrat default constructor called";
}
Bureaucrat::~Bureaucrat(){
    cout << "Bureaucrat destructor called "<< endl;
}
Bureaucrat::Bureaucrat(const string _name, int _grade){
    this->name=_name;
    if(_grade>150)
        throw Bureaucrat::GradeTooLowException();
    else if(_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->grade = _grade;
}
Bureaucrat::Bureaucrat(const Bureaucrat &src){
    this->name = src.name;
    this->grade = src.grade;
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src){
    this->name = src.name;
    this->grade = src.grade;
    return *this;
}

void Bureaucrat::signForm() {
    if(getGrade() >= 1 && getGrade() <= 150)
}

string Bureaucrat::getName() const {
    return this->name;
}

int Bureaucrat::getGrade() const {
    return this->grade;
}
void Bureaucrat::incrementGrade(){
    if(this->grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else
       this->grade++;
}
void Bureaucrat::decrementGrade(){
    if(this->grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->grade--;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &value)
{
    out << value.getName() << ", bureaucrat grade " << value.getGrade();
    return out;
}