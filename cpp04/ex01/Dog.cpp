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
	cout << "Dog copy constructor called "<< endl;
	*this = src;
}

Dog &Dog::operator=(const Dog& src)
{
	cout << "Dog copy assignment called "<< endl;
	*this =src;
	return *this;
}
void Dog::makeSound() const
{
	cout << "Dog is barking" << endl;

}
void Dog::setIdea(int index, string message)
{
	this->brain->ideas[index] = message;
}

string Dog::getIdea(int index)
{
	return this->brain->ideas[index];

}