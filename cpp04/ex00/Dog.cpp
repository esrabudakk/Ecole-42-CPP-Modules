#include"Dog.hpp"
Dog::Dog(): Animal("Dog")
{
	cout << "Dog default constructor called "<< endl;
}

Dog::~Dog()
{
	cout << "Dog destructor called "<< endl;
}
Dog::Dog(string type): Animal(type)
{
	 std::cout << "Dog " << type << " constructor called" << std::endl;
}
Dog::Dog(const Dog& src): Animal(src)
{
	cout << "Dog copy constructor called "<< endl;
}

Dog &Dog::operator=(const Dog& src)
{
    (void ) src;
	cout << "Dog copy assignment called "<< endl;
	return *this;
}
void Dog::makeSound() const
{
	cout << "Dog is barking" << endl;

}
