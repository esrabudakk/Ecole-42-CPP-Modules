#include "Animal.hpp"

Animal::Animal()
{
    this->x = 0;
    this->y = 0;
}

Animal::~Animal()
{
}

Animal::Animal(const Animal &src)
{
	*this = src;
}

Animal &Animal::operator=(const Animal &src)
{
    this->x = src.x;
    this->y = src.y;
	return *this;
}

void Animal::setX(int x)
{
    this->x = x;

}
int Animal::getX() {
    return  this->x;
}
void Animal::setY(int y)
{
    this->y = y;

}
int Animal::getY() {
    return  this->y;
}