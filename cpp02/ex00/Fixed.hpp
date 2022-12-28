#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

using std::cout;
using std::endl;

class Fixed
{
private:
	int fixed_point;
	static const int bits;
public:
	Fixed();
	Fixed(const Fixed& src);
	~Fixed();
	// Fixed& operator= (const Fixed& src);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};


#endif