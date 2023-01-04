#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
using std::cout;
using std::endl;
using std::string;

class Animal
{
protected:
    int x;
    int y;
private:
public:
	Animal();
	~Animal();
	Animal(const Animal &src);
	Animal &operator= (const Animal &src);
    void setX(int x);
    int getX();
    void setY(int y);
    int getY();
};

#endif