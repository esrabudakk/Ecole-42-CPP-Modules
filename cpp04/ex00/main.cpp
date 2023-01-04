#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


int main() {
    Animal *a = new Cat();
    Animal *b = new Dog();
    Animal *c = new Animal();



    WrongAnimal *w_a = new WrongCat();
    WrongAnimal *w_c = new WrongAnimal();

    a->makeSound();
    b->makeSound();
    c->makeSound();

    std::cout << "---Wrong---" << endl;

    w_a->makeSound();
    w_c->makeSound();

    delete a;
    delete b;
    delete c;

    delete w_a;
    delete w_c;
}