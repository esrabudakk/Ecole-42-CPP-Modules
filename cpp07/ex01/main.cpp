#include "Iter.hpp"

template <typename T>
void	f(T const& data)
{
	std::cout << data << std::endl;
}

int	main( void )
{
	std::string	str_arr[] = {"hello", "world"};
    int int_arr[] = {1, 2, 3, 4, 5, 6, 7};
    iter(str_arr, 2, &f);
    iter(int_arr, 7, &f);

    return 0;
}
