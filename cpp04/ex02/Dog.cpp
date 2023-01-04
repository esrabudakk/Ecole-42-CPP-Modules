#include "Dog.hpp"
Dog::Dog()
{
	cout << "Dog default constructor called " << endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::~Dog()
{
	delete this->brain;
	cout << "Dog destructor called " << endl;
}
Dog::Dog(string _type)
{
	this->type = _type;
	this->brain = new Brain();
	cout << "Dog " << type << " constructor called" << endl;
}
Dog::Dog(const Dog &src)
{
	cout << "Dog copy constructor called " << endl;
	this->type = src.type;
	this->brain = new Brain(*src.brain);
}

Dog &Dog::operator=(const Dog &src)
{
	cout << "Dog copy assignment called " << endl;
	this->type = src.type;
	this->brain = new Brain(*src.brain);
	return *this;
}
void Dog::makeSound() const
{
	cout << "Dog is barking" << endl;
}
