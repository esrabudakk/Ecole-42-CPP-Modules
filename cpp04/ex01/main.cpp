#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


void ff()
{
    const Animal *a[10];
    for (int i = 0; i <10 ; ++i) {
        if(i <= 5)
            a[i] = new Cat();
        else
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
//    ff();
    Animal *a = new Cat;
    {
//		Dog tmp = basic;
        Animal *b = a;
        (void) b;
    }
    delete a;
   // system("leaks brain");
}