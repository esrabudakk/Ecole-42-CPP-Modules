#include "Point.hpp"

Point::Point( void ): _x(Fixed()), _y(Fixed()){}

Point::Point( const Point &point): _x(point._x), _y(point._y){}

Point::Point(const float x, const float y): _x(Fixed(x)), _y(Fixed(y)){}

Point::~Point( void ){}

Point &Point::operator=( Point &point)
{
	(void)point;
	return (*this);
}

Fixed	Point::getX( void ) const
{
	return (this->_x);
}

Fixed	Point::getY( void ) const
{
	return (this->_y);
}
