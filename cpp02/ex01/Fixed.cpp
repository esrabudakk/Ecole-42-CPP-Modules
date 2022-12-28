#include "Fixed.hpp"

Fixed::Fixed() : fixed_point(0.0)
{
	cout << "Default constructor called" << endl;
}
Fixed::Fixed(const int numInt)
{
	cout << "Int constructor called" << endl;
}
Fixed::Fixed(const float numFloat)
{
	cout << "Float constructor called" << endl;
}

Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
}

Fixed::Fixed(const Fixed &src)
{
	cout << "Copy constructor called" << endl;
	*this = src;
}
Fixed &Fixed::operator=(const Fixed &src)
{
	cout << "Copy assignment operator called " << endl;
	this->fixed_point = src.getRawBits();
	return *this;
}
int Fixed::getRawBits(void) const
{
	cout << "getRawBits member function called" << endl;
	return fixed_point;
}

void Fixed::setRawBits(int const raw)
{
	cout << "setRawBits member function called" << endl;
	this->fixed_point = raw;
}

float Fixed::toFloat(void) const
{
}
int Fixed::toInt( void ) const
{
	return round(fixed_point >> bits);
}