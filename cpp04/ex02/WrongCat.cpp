#include "WrongCat.hpp"
WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	cout << "WrongCat default constructor called "<< endl;
}

WrongCat::~WrongCat()
{
	cout << "WrongCat destructor called "<< endl;
}

WrongCat::WrongCat(string type): WrongAnimal(type)
{
	 std::cout << "WrongCat (\"" << type << "\") constructor called" << std::endl;
}
WrongCat::WrongCat(const WrongCat& src): WrongAnimal(src)
{
	cout << "WrongCat copy constructor called "<< endl;
	*this = src;
}

WrongCat &WrongCat::operator=(const WrongCat& src)
{
	cout << "WrongCat copy assignment called "<< endl;
	this->type = src.type;
	return *this;
}
void WrongCat::makeSound() const
{
	cout << "WrongCat is meowing" << endl; 
}