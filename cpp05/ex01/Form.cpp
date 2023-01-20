#include "Form.hpp"
Form::Form():name("Form"), gradeToExec(1), gradeToSign(1), sign(false){
    cout << "Form default constructor called" << endl;
}

Form::~Form() {
    cout << "Form destructor called" << endl;
}

Form::Form(const string _name, const int _gradeToSign, const int _gradeToExec):name(_name),gradeToExec(_gradeToExec), gradeToSign(_gradeToSign)
{
    if (gradeToSign > 150 || gradeToExec > 150)
        throw Form::GradeTooLowException();
    else if (gradeToSign < 1 || gradeToExec < 1)
        throw Form::GradeTooHighException();
    cout << "Form parameters constructor called "<< endl;
    this->sign = false;
}

Form::Form(const Form &src):name(src.name),gradeToExec(src.gradeToExec),gradeToSign(src.gradeToSign){
    cout << "Form copy constructor called" << endl;
    this->sign = false;
}

Form &Form::operator=(const Form &src) {
    cout << "Form assignment operator called" << endl;
    const_cast<string &>(this->name) = src.name;
    const_cast<int &>(this->gradeToSign) = src.gradeToSign;
    const_cast<int &>(this->gradeToExec) = src.gradeToExec;
    this->sign = src.sign;
    return *this;

}
bool Form::getSign() const {
    return this->sign;
}
void Form::beSigned(Bureaucrat &bureaucrat) {

if(getGradeToSign() > bureaucrat.getGrade())
{
    this->sign = true;
}
else
    throw Form::GradeTooLowException();
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
              << ", form require grade to execute <" << value.getGradeToExec() << ">";
}