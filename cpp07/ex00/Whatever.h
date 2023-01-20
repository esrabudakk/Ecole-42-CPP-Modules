//
// Created by Kerim Sancakoglu on 1/20/23.
//

#ifndef _WHATEVER_H_
#define _WHATEVER_H_

template <typename T>
void	swap(T& val1, T& val2)
{
    T	temp = val1;
    val1 = val2;
    val2 = temp;
}

template <typename T>
T	max(T val1, T val2)
{
    return (val1 > val2 ? val1 : val2);
}

template <typename T>
T	min(T val1, T val2)
{
    return (val1 < val2 ? val1 : val2);
}


#endif
