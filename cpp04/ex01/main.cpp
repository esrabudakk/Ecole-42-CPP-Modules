#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"



//void ff()
//{
//    Animal *a[10];
//    for (int i = 0; i <10 ; ++i) {
//        if(i < 5)
//            a[i] = new Cat();
//        else
//            a[i] = new Dog();
//    }
//
//    for (int i = 0; i < 10; ++i) {
//        a[i]->makeSound();
//    }
//    for (int i = 0; i < 10; ++i) {
//        delete a[i];
//    }
//
//}


int main(void)
{
   // ff();

//    Animal *a = new Cat;
//    {
//        Animal *b = a;
//        (void) b;
//    }
//    cout << "before" << endl;
 //   delete a;

   Dog basic;
    {
        Dog tmp = basic;
        (void) tmp;
    }
//    cout << "before" << endl;

}