#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
using std::cout;
using std::endl;
using std::string;

class Animal
{
protected:
	std::string type;

private:
public:
	Animal();
	virtual ~Animal();
	Animal(string name);
	Animal(const Animal &src);
	Animal &operator=(const Animal &src);
	virtual void makeSound() = 0;
	string getType() const;
};

#endif