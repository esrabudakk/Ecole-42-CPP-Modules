#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
using std::cout;
using std::endl;
using std::string;

class WrongAnimal
{
	protected:
	std::string type;
private:
public:
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(const WrongAnimal &src);
	WrongAnimal(string type);
	WrongAnimal &operator=(const WrongAnimal &src);
	void makeSound()const;
	string getType() const;

};

#endif