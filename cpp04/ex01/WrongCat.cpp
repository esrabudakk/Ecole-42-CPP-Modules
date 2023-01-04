#include "WrongCat.hpp"
WrongCat::WrongCat()
{
    this->type = "WrongCat";
	cout << "WrongCat default constructor called "<< endl;
}

WrongCat::~WrongCat()
{
	cout << "WrongCat destructor called "<< endl;
}

WrongCat::WrongCat(string _type)
{
    this->type = _type;
	 cout << "WrongCat " << this->type << " constructor called" <<endl;
}
WrongCat::WrongCat(const WrongCat& src)
{
    *this = src;
	cout << "WrongCat copy constructor called "<< endl;
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