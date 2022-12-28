
#include "Fixed.hpp"

Fixed::Fixed()
{
	cout << "default constructor" << endl;
}
Fixed::Fixed(const Fixed &src)
{
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


Fixed &Fixed::min(Fixed &src1, Fixed &src2)
{

	if(src1.toFloat() < src2.toFloat())
		return src1;
	else
		return src2;
}
// static Fixed &Fixed::max(Fixed &src1, Fixed &src2)
// {
// }
Fixed::Fixed(const int numInt)
{
	fixed_point = (int)round((numInt) * (1 >> bits));
}

Fixed::Fixed(const float numFloat)
{
	cout << "Float constructor called " << numFloat << endl;

	fixed_point = (int)roundf(numFloat * (1 << bits));
}

int Fixed::toInt() const
{
	return ((int)fixed_point >> bits);
}

float Fixed::toFloat() const
{
	return ((float)fixed_point / (1 << bits));
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
	cout << "src: " << src.toFloat() << endl;
	cout << "this: " << this->toFloat() << endl;
	this->setRawBits(roundf(ret * (1 << bits)));
	return *this;
}

// Fixed &Fixed::operator/(const Fixed &src)
// {
// }

// Fixed &Fixed::operator>(const Fixed &src)
// {
// }
// Fixed &Fixed::operator<(const Fixed &src)
// {
// }
// Fixed &Fixed::operator>=(const Fixed &src)
// {
// }
// Fixed &Fixed::operator<=(const Fixed &src)
// {
// }
Fixed Fixed::operator++(int i)
{
	Fixed tmp = *this;
	++*this;
	return tmp;
}
Fixed &Fixed::operator++()
{
	fixed_point++;
	return *this;
}
Fixed Fixed::operator--(int i)
{
	Fixed tmp = *this;
	--*this;
	return tmp;
}
Fixed &Fixed::operator--()
{
	fixed_point--;
	return *this;
}
ostream &operator<<(ostream &out, const Fixed &value)
{
	out << value.toFloat(); // Convert the fixed-point value to a floating-point value and output it
	return out;
}
int main(void)
{
	Fixed a;
	Fixed h(4.5f);
	Fixed v(1.1f);
	Fixed const b(Fixed(5.05f) * Fixed(2.5f));
	cout << "min : " << a.min(h, v).toFloat() << endl;
	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
