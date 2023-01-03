#include "Animal.hpp"

Animal::Animal()
{
	cout << "Animal default constructor called " << endl;
}

Animal::~Animal()
{
	cout << "Animal destructor  called " << endl;
}
Animal::Animal(string name)
{
	this->type = name;
}

Animal::Animal(const Animal &src)
{
	cout << "Animal copy constructor called " << endl;
	*this = src;
}

Animal &Animal::operator=(const Animal &src)
{
	cout << "Animal copy assignment called " << endl;
	this->type = src.type;
	return *this;
}

string Animal::getType() const
{
	return type;
}