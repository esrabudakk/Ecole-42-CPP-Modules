
#include "Form.hpp"
#include "Bureaucrat.hpp"

int main() {

    try {
        Bureaucrat john("John", 140);
        std::cout << john << std::endl;
        john.incrementGrade();
        john.incrementGrade();
        std::cout << john << std::endl;
        Form a("a", 5, 4);
        Form b("b", 3, 3);
        Form c("c", 145, 20);
        std::cout << john << std::endl;
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        john.signForm(a);
        john.signForm(b);
        john.signForm(c);
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << c << std::endl;
        john.decrementGrade();
        std::cout << john << std::endl;
    }
    catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        std::cout <<"---------------------------------------\n";
        Form test("test", 151, 42);
    }
    catch (const std::exception &e) {
        std::cerr << "Cannot initialize test because " << e.what() << std::endl;
    }
}
