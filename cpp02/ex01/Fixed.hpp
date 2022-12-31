#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::ostream;
class Fixed
{
private:
	int fixed_point;
	static const int bits = 8;
public:
	Fixed();
	Fixed(const int numInt);
	Fixed(const float numFloat);
	Fixed(const Fixed& src);
	~Fixed();
	Fixed& operator= (const Fixed& src);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;

};
ostream &operator<<(ostream &out, const Fixed &value);


#endif