#include "Animal.hpp"

int main()
{
    cout << "--------Deep Copy--------" << endl;
    Animal *a = new Animal();
    Animal *b = new Animal();

    *b = *a;

    b->setX(42);
    a->setX(21);
    a->setY(126);

    cout << "Adress of objects" << endl;
    cout << b << endl;
    cout << a << endl;

    cout << "x of b: " << b->getX() << endl;
    cout << "y of b: " << b->getY() << endl;

    cout << "--------Shallow Copy-------"<<endl;
    Animal *c = new Animal();
    Animal *d = new Animal();

    d = c;

    d->setX(21);
    c->setX(42);
    c->setY(84);

    cout << "Adress of objects" << endl;
    cout << d << endl;
    cout << c << endl;

    cout << "x of d: " << d->getX() << endl;
    cout << "y of d: " << d->getY() << endl;

}