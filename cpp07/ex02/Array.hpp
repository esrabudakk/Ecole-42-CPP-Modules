#ifndef _ARRAY_HPP_
#define _ARRAY_HPP_

#include <iostream>
template <typename T>
class Array
{
private:
	T *arr;
public:
	unsigned int len;
	Array(void);
	Array(const unsigned int &n);
	Array(const Array<T> &to_copy);
	Array& operator=(const Array<T> &to_copy);
	T& operator[](int idx) const;
	unsigned int	size() const;
	~Array();
    class OutOfRange : public std::exception {
    public:
        const char *what() const throw() {
            return ("Out of range");
        }
    };
};

#include "Array.tpp"

#endif