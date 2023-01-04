#include "Cat.hpp"
Cat::Cat()
{
    cout << "Cat default constructor called " << endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::~Cat()
{
    delete this->brain;
    cout << "Cat destructor called " << endl;
}

Cat::Cat(string _type)
{
    this->type = _type;
    this->brain = new Brain();
    cout << "Cat " << this->type << " constructor called" << endl;
}

Cat::Cat(const Cat &src)
{
    cout << "Cat copy constructor called " << endl;
    this->type = src.type;
    this->brain = new Brain(*src.brain);
}

Cat &Cat::operator=(const Cat &src)
{
    cout << "Cat copy assignment called " << endl;
    this->type = src.type;
    this->brain = new Brain(*src.brain);
    return *this;
}

void Cat::makeSound() const
{
    cout << "Cat is meowing" << endl;
}
