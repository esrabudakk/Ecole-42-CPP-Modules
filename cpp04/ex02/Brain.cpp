
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
	*this = src;
}

Brain &Brain::operator=(const Brain &src)
{
	cout << "Brain copy assignment  called" << endl;
    for (unsigned  long int i = 0; i <src.ideas->length() ; ++i) {
        this->ideas[i] = src.ideas[i];
    }
	return *this;
}

