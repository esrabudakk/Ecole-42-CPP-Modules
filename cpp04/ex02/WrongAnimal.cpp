#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	cout << "WrongAnimal default constructor called " << endl;
}

WrongAnimal::~WrongAnimal()
{
	cout << "WrongAnimal destructor  called " << endl;
}
WrongAnimal::WrongAnimal(string name)
{
	this->type = name;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	cout << "WrongAnimal copy constructor called " << endl;
	*this = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
	cout << "WrongAnimal copy assignment called " << endl;
    this->type = src.type;
	return *this;
}
void WrongAnimal::makeSound() const
{
	cout << "WrongAnimals make sound" << endl;
}

string WrongAnimal::getType() const
{
	return type;
}