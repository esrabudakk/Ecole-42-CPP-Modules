#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

void ff()
{
    Animal *a[10];
    for (int i = 0; i <5 ; ++i) {
        a[i] = new Cat();
    }

    for (int i = 5; i < 10; ++i) {
        a[i] = new Dog();
    }

    for (int i = 0; i < 10; ++i) {
        a[i]->makeSound();
    }
    for (int i = 0; i < 10; ++i) {
        delete a[i];
    }

}

int main(void)
{
    ff();

    system("leaks abstract");
}