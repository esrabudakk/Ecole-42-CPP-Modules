//
// Created by ebudak on 1/10/23.
//

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat john("John", 2);
        Bureaucrat jim("Jim", 149);
        std::cout << john << std::endl;
        std::cout << jim << std::endl;
        john.incrementGrade();
        jim.decrementGrade();
        std::cout << john << std::endl;
        std::cout << jim << std::endl;
        john.incrementGrade();
        jim.decrementGrade();
        std::cout << john << std::endl;
        std::cout << jim << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << endl;
    }
}
