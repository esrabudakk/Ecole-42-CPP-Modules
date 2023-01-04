#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
class Dog : public Animal
{
private:
public:
	Dog();
	~Dog();
	Dog(string _type);
	Dog(const Dog &src);
	Dog &operator=(const Dog &src);
	void makeSound() const;

};

#endif