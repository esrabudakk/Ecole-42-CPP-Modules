#include "Cat.hpp"
Cat::Cat()
{
    this->type = "Cat";
	cout << "Cat default constructor called "<< endl;
}

Cat::~Cat()
{
	cout << "Cat destructor called "<< endl;
}

Cat::Cat(string _type)
{
    this->type = _type;
    cout << "Cat " << this->type << " constructor called" << endl;
}

Cat::Cat(const Cat& src)
{
	cout << "Cat copy constructor called "<< endl;
    *this = src;
}

Cat &Cat::operator=(const Cat& src)
{
	cout << "Cat copy assignment operator called "<< endl;
    this->type = src.type;
    return *this;
}

void Cat::makeSound() const
{
	cout << "Cat is meowing" << endl; 
}