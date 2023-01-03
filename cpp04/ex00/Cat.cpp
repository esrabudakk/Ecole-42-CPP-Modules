#include "Cat.hpp"
Cat::Cat(): Animal("Cat")
{
	cout << "Cat default constructor called "<< endl;
}

Cat::~Cat()
{
	cout << "Cat destructor called "<< endl;
}

Cat::Cat(string type): Animal(type)
{
    std::cout << "Cat " << type << " constructor called" << std::endl;
}
Cat::Cat(const Cat& src) : Animal(src)
{
	cout << "Cat copy constructor called "<< endl;
}

Cat &Cat::operator=(const Cat& src)
{
    (void )src;
	cout << "Cat copy assignment called "<< endl;
	return *this;
}

void Cat::makeSound() const
{
	cout << "Cat is meowing" << endl; 
}