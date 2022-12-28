#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
using std::cout;
using std::endl;

class Fixed
{
private:
	int fixed_point;
	static const int bits;
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


#endif