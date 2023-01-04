
#include "Brain.hpp"

Brain::Brain()
{
	cout << "Brain default constructor called" << endl;
}

Brain::~Brain()
{
	cout << "Brain destructor called" << endl;
}

Brain::Brain(const Brain& src)
{
	cout << "Brain copy constructor called" << endl;
    for (size_t i = 0; i <100; ++i) {
        this->ideas[i] = src.ideas[i];
    }
}

Brain &Brain::operator=(const Brain &src)
{
	cout << "Brain copy assignment  called" << endl;
    for (size_t i = 0; i <100; ++i) {
        this->ideas[i] = src.ideas[i];
    }
	return *this;
}

