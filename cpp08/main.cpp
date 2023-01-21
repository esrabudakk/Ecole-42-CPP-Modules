//
// Created by Esra Budak on 1/21/23.
//
#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int	main( void ) {

    std::cout << " easy find in a vector of int " << std::endl;
    std::vector<int> tab_int ;
    for (int i = 0; i < 9;i++)
        tab_int.push_back(i * 11);

    std::cout <<	std::boolalpha << "44: " << easyfind(tab_int, 44) << std::endl;
    std::cout <<	std::boolalpha << "45: " << easyfind(tab_int, 45) << std::endl;
    std::cout <<	std::boolalpha << "40: " << easyfind(tab_int, 40) << std::endl;

    std::cout << " easy find in a list of int "<< std::endl;
    std::list<int> list_int ;
    for (int i = 0; i < 6;i++)
        list_int.push_back(i * 50);

    std::cout <<	std::boolalpha << "100: " << easyfind(list_int, 100) << std::endl;
    std::cout <<	std::boolalpha << "143: " << easyfind(list_int, 143) << std::endl;
    std::cout <<	std::boolalpha << "250: " << easyfind(list_int, 250) << std::endl;

    return 0;
}