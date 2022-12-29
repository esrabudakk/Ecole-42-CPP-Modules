#include "Fixed.hpp"

Fixed::Fixed() : fixed_point(0.0)
{
	cout << "Default constructor called" << endl;
}

Fixed::Fixed(const int numInt)
{
	cout << "Int constructor called" << endl;
	this->fixed_point = (numInt) * (1 << bits);
}

Fixed::Fixed(const float numFloat)
{
	cout << "Float constructor called" << endl;
	this->fixed_point = (int)roundf(numFloat * (1 << bits));
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
	return fixed_point;
}

void Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)fixed_point / (1 << bits));
}
int Fixed::toInt(void) const
{
	return ((int)fixed_point >> bits);
}
ostream &operator<<(ostream &out, const Fixed &value)
{
	out << value.toFloat(); // Convert the fixed-point value to a floating-point value and output it
	return out;
}