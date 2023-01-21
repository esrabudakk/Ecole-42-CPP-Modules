//
// Created by Esra Budak on 1/21/23.
//

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

template <typename T>
bool	easyfind( T & cont, int n) {

    typename T::iterator it;
    it = std::find( cont.begin(), cont.end(), n);
    if (it != cont.end())
        return true;
    else
        return false;
}
#endif
