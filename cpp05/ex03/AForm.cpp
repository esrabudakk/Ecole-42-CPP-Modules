#include "AForm.hpp"
AForm::AForm():name("AForm"), gradeToExec(1), gradeToSign(1), sign(false){
    cout << "AForm default constructor called" << endl;
}

AForm::~AForm() {
    cout << "AForm destructor called" << endl;
}

AForm::AForm(const string _name, const int _gradeToSign, const int _gradeToExec):name(_name),gradeToExec(_gradeToExec), gradeToSign(_gradeToSign)
{
    if (gradeToSign > 150)
        throw AForm::GradeTooLowException();
    else if (gradeToSign < 1)
        throw AForm::GradeTooHighException();
    cout << "AForm parameters constructor called "<< endl;
    this->sign = false;
}

AForm::AForm(const AForm &src):name(src.name),gradeToExec(src.gradeToExec),gradeToSign(src.gradeToSign){
    cout << "AForm copy constructor called" << endl;
    this->sign = false;
}

AForm &AForm::operator=(const AForm &src) {
    cout << "AForm assignment operator called" << endl;
    const_cast<string &>(this->name) = src.name;
    const_cast<int &>(this->gradeToSign) = src.gradeToSign;
    const_cast<int &>(this->gradeToExec) = src.gradeToExec;
    this->sign = src.sign;
    return *this;
}

bool AForm::getSign() const {
    return this->sign;
}
void AForm::beSigned(Bureaucrat &bureaucrat) {

    if(gradeToSign > bureaucrat.getGrade())
    {
        this->sign = true;
    }
    else
        throw AForm::GradeTooLowException();
}
string AForm::getName() const {
    return this->name;
}

int AForm::getGradeToSign() const
{
    return this->gradeToSign;
}
int AForm::getGradeToExec() const{
    return this->gradeToExec;
}

void AForm::checkExecute(Bureaucrat const &bureaucrat) const
{
    if (!sign)
    {
        throw AForm::NotSignedException();
    }
    if (gradeToSign < bureaucrat.getGrade())
    {
        throw AForm::GradeTooLowException();
    }
}
std::ostream &operator<<(std::ostream &out, const AForm &value)
{
    return out << value.getName()
               << ", AForm require grade to sign <" << value.getGradeToSign() << ">"
               << ", AForm require grade to execute <" << value.getGradeToExec() << ">" << endl;
}