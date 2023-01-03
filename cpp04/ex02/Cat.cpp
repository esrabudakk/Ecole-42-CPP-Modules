#include "Cat.hpp"
Cat::Cat(): Animal("Cat")
{
	cout << "Cat default constructor called "<< endl;
	this->brain = new Brain();
}

Cat::~Cat()
{
	cout << "Cat destructor called "<< endl;
	delete this->brain;
}

Cat::Cat(string _type): Animal(_type)
{
	 std::cout << "Cat (\"" << type << "\") constructor called" << std::endl;
	 this->brain = new Brain();
}
Cat::Cat(const Cat& src): Animal(src)
{
	cout << "Cat copy constructor called "<< endl;
    this->brain = src.brain;
	*this = src;
}

Cat &Cat::operator=(const Cat& src)
{
	cout << "Cat copy assignment called "<< endl;
	this->type = src.type;
	return *this;
}

void Cat::makeSound()
{
	cout << "Cat is meowing" << endl; 
}

void Cat::setIdea(int index, string message)
{
    this->brain->ideas[index] = message;
}

string Cat::getIdea(int index)
{
	return this->brain->ideas[index];
}