#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
private:
public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat &src);
	WrongCat(string _type);
	WrongCat &operator=(const WrongCat &src);
	void makeSound() const;
};

#endif