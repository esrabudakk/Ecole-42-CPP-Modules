//
// Created by ebudak on 1/10/23.
//

#include "Bureaucrat.hpp"
Bureaucrat::Bureaucrat():name("Bureaucrat"), grade(150){
    Form form;
    cout << "Bureaucrat default constructor called";
}
Bureaucrat::~Bureaucrat(){
    cout << "Bureaucrat destructor called "<< endl;
}
Bureaucrat::Bureaucrat( string const _name, int _grade):name(_name){
    cout << "Bureaucrat parameter constructor called" << endl;
    if(_grade>150)
        throw Bureaucrat::GradeTooLowException();
    else if(_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->grade = _grade;
}
Bureaucrat::Bureaucrat(const Bureaucrat &src):name(src.name){
   this->grade = src.grade;
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src){
    const_cast<string &>(this->name) = src.name;
    this->grade = src.grade;
    return *this;
}

string Bureaucrat::getName() const {
    return this->name;
}

int Bureaucrat::getGrade() const {
    return this->grade;
}
void Bureaucrat::incrementGrade(){
    if(this->grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    else
       this->grade--;
}
void Bureaucrat::decrementGrade(){
    if(this->grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->grade++;
}

void Bureaucrat::signForm(Form &form) {

    try
    {
        form.beSigned(*this);
        std::cout << *this << " signed " << form << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << *this << " couldn’t sign " << form << " because "
                  << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &value)
{
    out << value.getName() << ", bureaucrat grade " << value.getGrade();
    return out;
}