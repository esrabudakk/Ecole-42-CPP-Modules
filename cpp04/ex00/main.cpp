#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "stdlib.h"
#include <stdio.h>

void _func() {

	char *a = new char(100);
	(void)a;
}


int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	const WrongAnimal *k = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();
	k->makeSound();
	_func();
 	
	delete k;
	delete meta;
	delete j;
	delete i;

	system("leaks animal");
}