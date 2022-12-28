#ifndef FIXED_HPP
#define FIXED_HPP

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
	Fixed &operator+(const Fixed &src);
	Fixed &operator-(const Fixed &src);
	Fixed &operator*(const Fixed &src);
	// Fixed &operator/(const Fixed &src);
	// Fixed &operator>(const Fixed &src);
	// Fixed &operator<(const Fixed &src);
	// Fixed &operator>=(const Fixed &src);
	// Fixed &operator<=(const Fixed &src);
	Fixed operator++(int i);
	Fixed &operator++();
	Fixed operator--(int i);
	Fixed &operator--();

	 Fixed &min(Fixed &src1, Fixed &src2);
	// static &Fixed min(Fixed &src1, Fixed &src2);
	static Fixed &max(Fixed &src1, Fixed &src2);
	// static &Fixed min(Fixed &src1, Fixed &src2);
};
ostream &operator<<(ostream &out, const Fixed &value);
#endif