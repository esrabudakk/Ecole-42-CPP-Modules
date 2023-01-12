#include "Form.hpp"
Form::Form():name("Form"), gradeToExec(1), gradeToSign(1), sign(false){
    cout << "Form default constructor called" << endl;
}

Form::~Form() {
    cout << "Form destructor called" << endl;
}

Form::Form(const string _name, const int _gradeToSign, const int _gradeToExec):name(_name),gradeToExec(_gradeToExec), gradeToSign(_gradeToSign)
{
    cout << "Form parameters constructor called "<< endl;
    this->sign = false;
}

Form::Form(const Form &src):name(src.name),gradeToExec(src.gradeToExec),gradeToSign(src.gradeToSign){

    this->sign = false;
}

Form &Form::operator=(const Form &src) {
    *this = src;
    return *this;

}
bool Form::getSign() const {
    return this->sign;
}
void Form::beSigned(Bureaucrat &bureaucrat) {

//if(getGradeToSign() < bureaucrat.getGrade())
//{
//    this->sign = true;
//}
//else if(bureaucrat.getGrade() < 1)
//    throw Form::GradeTooHighException();
//else if(bureaucrat.getGrade() > 150)
//    throw Form::GradeTooLowException();
}
string Form::getName() const {
    return this->name;
}

int Form::getGradeToSign() const
{
    return this->gradeToSign;
}
int Form::getGradeToExec() const{
    return this->gradeToExec;
}
std::ostream &operator<<(std::ostream &out, const Form &value)
{
    return out << value.getName()
              << ", form require grade to sign <" << value.getGradeToSign() << ">"
              << ", form require grade to execute <" << value.getGradeToExec() << ">" << std::endl;
}