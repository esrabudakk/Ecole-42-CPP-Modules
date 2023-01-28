
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include "iostream"
#include "exception"
#include "vector"

class OutofRange : public std::exception
{
public:
    const char *what() const throw()
    {
        return ("Out of range.");
    }
};

template <class T>
typename T::iterator easyfind(T &a_vector, int toFind)
{
    typename T::iterator it = find(a_vector.begin(), a_vector.end(), toFind);

    if (it != a_vector.end())
        return it;
    else
        throw OutofRange();
};

#endif