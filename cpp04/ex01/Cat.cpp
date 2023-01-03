#include "Cat.hpp"
Cat::Cat()
{
    this->type = "Cat";
    this->brain = new Brain();
    cout << "Cat default constructor called "<< endl;
}

Cat::~Cat()
{
	delete brain;
	cout << "Cat destructor called "<< endl;
}

Cat::Cat(string _type)
{
    this->type = _type;
	 this->brain = new Brain();
	 std::cout << "Cat " << type << " constructor called" << std::endl;
}

Cat::Cat(const Cat& src)
{
    this->type = src.type;
    this->brain = new Brain(*src.brain);
	cout << "Cat copy constructor called "<< endl;
}

Cat &Cat::operator=(const Cat& src)
{
	cout << "Cat copy assignment called "<< endl;
	this->type = src.type;
	return *this;
}

void Cat::makeSound() const
{
	cout << "Cat is meowing" << endl; 
}

