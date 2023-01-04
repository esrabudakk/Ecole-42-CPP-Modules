#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
private:
	Brain *brain;
public:
	Cat();
	~Cat();
	Cat(const Cat &src);
	Cat(string _type);
	Cat &operator=(const Cat &src);
	void makeSound()const;
};


#endif