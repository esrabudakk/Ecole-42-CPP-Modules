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
	Animal(string _type);
	Animal(const Animal &src);
	Animal &operator= (const Animal &src);
    virtual void makeSound() const;
	string getType() const;
};

#endif