//
// Created by Esra Budak on 1/20/23.
//

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <sys/time.h>

Base *generate(void)
{

    struct timeval tp;
    gettimeofday(&tp, NULL);
    long int ms = tp.tv_sec * 1000 + tp.tv_usec / 1000;

    Base *rands;

    switch (ms % 3)
    {
        case (0):
            rands = new A();
            break;
        case (1):
            rands = new B();
            break;
        case (2):
            rands = new C();
            break;
    }
    return rands;
}

void identify(Base* p)
{

    if(dynamic_cast<A*>(p) != NULL)
        cout << "This is A" << endl;
    else if(dynamic_cast<B*>(p) != NULL)
        cout << "This is B" << endl;
    else if(dynamic_cast<C*>(p) != NULL)
        cout << "This is C" << endl;
    else
        cout << "This is nothing" << endl;
}

void	identify(Base& p)
{
    try {
        static_cast<void>(dynamic_cast<A&>(p));
        cout << "Reference A" << endl;
    } catch (std::exception &e) {}

    try {
        static_cast<void>(dynamic_cast<B&>(p));
        cout << "Reference B" << endl;
    } catch (std::exception &e) {}

    try {
        static_cast<void>(dynamic_cast<C&>(p));
        cout << "Reference C" << endl;
    } catch (std::exception &e) {}

}

int main()
{

    Base *point = generate();

    identify(point);
    identify(*point);
}