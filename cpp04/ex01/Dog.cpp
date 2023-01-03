#include"Dog.hpp"
Dog::Dog(): Animal("Dog")
{
	cout << "Dog default constructor called "<< endl;
	this->brain = new Brain();
}

Dog::~Dog()
{
	cout << "Dog destructor called "<< endl;
	delete this->brain;
}
Dog::Dog(string type): Animal(type)
{
	 std::cout << "Dog (\"" << type << "\") constructor called" << std::endl;
}
Dog::Dog(const Dog& src): Animal(src)
{
    brain = new Brain();
	cout << "Dog copy constructor called "<< endl;
	*this = src;
}

Dog &Dog::operator=(const Dog& src)
{
	cout << "Dog copy assignment called "<< endl;
	Animal::operator=(src);
	return *this;
}
void Dog::makeSound() const
{
	cout << "Dog is barking" << endl;

}
