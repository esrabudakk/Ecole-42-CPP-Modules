#include "AForm.hpp"

AForm::AForm():name("AForm"), gradeToExec(1), gradeToSign(1), sign(false){
    cout << "AForm default constructor called" << endl;
}

AForm::~AForm() {
    cout << "AForm destructor called" << endl;
}

AForm::AForm(const string _name, const int _gradeToSign, const int _gradeToExec):name(_name),gradeToExec(_gradeToExec), gradeToSign(_gradeToSign)
{
    cout << "AForm parameters constructor called "<< endl;
    this->sign = false;
}

AForm::AForm(const AForm &src):name(src.name),gradeToExec(src.gradeToExec),gradeToSign(src.gradeToSign){

    this->sign = false;
}

AForm &AForm::operator=(const AForm &src) {
    *this = src;
    return *this;

}
bool AForm::getSign() const {
    return this->sign;
}
void AForm::beSigned(Bureaucrat &bureaucrat) {

//if(getGradeToSign() < bureaucrat.getGrade())
//{
//    this->sign = true;
//}
//else if(bureaucrat.getGrade() < 1)
//    throw AForm::GradeTooHighException();
//else if(bureaucrat.getGrade() > 150)
//    throw AForm::GradeTooLowException();
}

void AForm::execute(Bureaucrat const & executor) const{

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
std::ostream &operator<<(std::ostream &out, const AForm &value)
{
    return out << value.getName()
              << ", AForm require grade to sign <" << value.getGradeToSign() << ">"
              << ", AForm require grade to execute <" << value.getGradeToExec() << ">" << std::endl;
}