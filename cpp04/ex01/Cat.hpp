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
	Cat (string type);
	Cat &operator=(const Cat &src);
	void makeSound()const;
	void setIdea(int index, string message);
	string getIdea(int index);

};


#endif