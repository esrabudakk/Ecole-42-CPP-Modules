
#include "Fixed.hpp"

Fixed::Fixed() : fixed_point(0) {}

Fixed::Fixed(const Fixed &src)
{
	*this = src;
}

Fixed::Fixed(const int numInt)
{
	this->fixed_point = (int)(numInt) * (1 << bits);
}

Fixed::Fixed(const float numFloat)
{
	this->fixed_point = (int)roundf(numFloat * (1 << bits));
}

Fixed::~Fixed() {}

int Fixed::getRawBits(void) const
{
	return fixed_point;
}

void Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
}

int Fixed::toInt() const
{
	return ((int)fixed_point >> bits);
}

float Fixed::toFloat() const
{
	return ((float)fixed_point / (1 << bits));
}

Fixed &Fixed::operator=(const Fixed &src)
{
	this->fixed_point = src.getRawBits();
	return *this;
}

Fixed &Fixed::operator+(const Fixed &src)
{
	float ret = this->toFloat() + src.toFloat();
	this->setRawBits(std::roundf(ret * (1 << bits)));
	return *this;
}

Fixed &Fixed::operator-(const Fixed &src)
{
	float ret = this->toFloat() - src.toFloat();
	this->setRawBits(roundf(ret * (1 << bits)));
	return *this;
}

Fixed &Fixed::operator*(const Fixed &src)
{
	float ret = this->toFloat() * src.toFloat();
	this->setRawBits(roundf(ret * (1 << bits)));
	return *this;
}

Fixed &Fixed::operator/(const Fixed &src)
{
	float ret = this->toFloat() / src.toFloat();
	this->setRawBits(roundf(ret * (1 << bits)));
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++(*this);
	return tmp;
}

Fixed &Fixed::operator++()
{
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--(*this);
	return tmp;
}

Fixed &Fixed::operator--()
{
	this->setRawBits(this->getRawBits() - 1);

	return *this;
}

Fixed &Fixed::min(Fixed &src1, Fixed &src2)
{

	if (src1.toFloat() < src2.toFloat())
		return src1;
	else
		return src2;
}

Fixed &Fixed::max(Fixed &src1, Fixed &src2)
{
	if (src1.toFloat() > src2.toFloat())
		return src1;
	else
		return src2;
}

const Fixed &Fixed::min(const Fixed &src1, const Fixed &src2)
{

	if (src1.toFloat() < src2.toFloat())
		return src1;
	else
		return src2;
}

const Fixed &Fixed::max(const Fixed &src1, const Fixed &src2)
{
	if (src1.toFloat() > src2.toFloat())
		return src1;
	else
		return src2;
}

ostream &operator<<(ostream &out, const Fixed &value)
{
	out << value.toFloat();
	return out;
}

bool Fixed::operator==(const Fixed &src1) const
{
	return (this->getRawBits() == src1.getRawBits());
}

bool Fixed::operator<(const Fixed &src1) const
{
	return (this->getRawBits() < src1.getRawBits());
}

bool Fixed::operator>(const Fixed &src1) const
{
	return (this->getRawBits() > src1.getRawBits());
}

bool Fixed::operator>=(const Fixed &src1) const
{
	return (this->getRawBits() >= src1.getRawBits());
}

bool Fixed::operator<=(const Fixed &src1) const
{
	return (this->getRawBits() <= src1.getRawBits());
}
bool Fixed::operator!=(const Fixed &src1) const
{
	return (this->getRawBits() != src1.getRawBits());
}