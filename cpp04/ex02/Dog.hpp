#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal
{
private:
	Brain *brain;
public:
	Dog();
	~Dog();
	Dog(string type);
	Dog(const Dog &src);
	Dog &operator=(const Dog &src);
	void makeSound() ;
	void setIdea(int index, string message);
	string getIdea(int index);

};

#endif