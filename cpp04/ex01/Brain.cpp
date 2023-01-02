
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
	*this = src;
	return *this;
}

