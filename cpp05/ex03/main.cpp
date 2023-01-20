
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(){
    Intern someRandomIntern;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Esra");
    AForm *pr;
    pr = someRandomIntern.makeForm("presidential pardon" , "Elif");
    AForm *sb;
    sb = someRandomIntern.makeForm("shrubbery creation", "Ahmet");
   AForm *ill;
    ill = someRandomIntern.makeForm("illegal input form", "Momo");

    cout << endl << "-------- destructor -------" << endl;
   delete rrf;
   delete pr;
   delete sb;
   delete ill;
}