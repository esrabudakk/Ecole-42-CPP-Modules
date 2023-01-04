#include"Dog.hpp"
Dog::Dog()
{
    this->type = "Dog";
	cout << "Dog default constructor called "<< endl;
}

Dog::~Dog()
{
	cout << "Dog destructor called "<< endl;
}
Dog::Dog(string _type)
{
    this->type = _type;
	 cout << "Dog " << this->type << " constructor called" << endl;
}
Dog::Dog(const Dog& src)
{
	cout << "Dog copy constructor called "<< endl;
    *this = src;
}

Dog &Dog::operator=(const Dog& src)
{
	cout << "Dog copy assignment called "<< endl;
    this->type = src.type;
    return *this;
}
void Dog::makeSound() const
{
	cout << "Dog is barking" << endl;
}
