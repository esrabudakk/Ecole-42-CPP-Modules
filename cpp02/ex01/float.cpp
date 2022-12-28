#include <iostream>
using std::cout;
using std::endl;
using std::ostream;
#include <cmath>

class Fixed
{
private:
	int fixed_point;
	static const int bits = 8;

public:
	Fixed();
	Fixed(const float numFloat);
	Fixed(const int numInt);
	Fixed &operator=(const Fixed &src);
	Fixed(const Fixed &src);
	float toFloat(void) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);
	int toInt(void) const;
};
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

Fixed::Fixed(const int numInt)
{
	fixed_point = (int)round((numInt)  * (1 >> bits));
}

Fixed::Fixed(const float numFloat)
{
	cout << "Float constructor called" << endl;
	std::cout << roundf(numFloat * (1 << bits)) << std::endl;
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
ostream &operator<<(ostream &out, const Fixed &value)
{
	out << value.toFloat(); // Convert the fixed-point value to a floating-point value and output it
	return out;
}

int main(void)
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);
	a = Fixed(1234.4321f);
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}