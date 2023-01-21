#include "Array.hpp"

int	main( void )
{

    try
    {
        Array<int>	a(5);

        a[0] = 2;
        a[1] = 3;
        Array<int> b(a);

        Array<std::string> f(3);
        f[0] = "sra";
        f[1] = "dsd";
        f[2] = "wee";


        std::cout << f[0] << std::endl;
        std::cout << f[1] << std::endl;
        std::cout << f[2] << std::endl;


        std::cout << b[0] << std::endl;
        std::cout << b[1] << std::endl;
        std::cout << b.size() << std::endl;
    }
    catch(std::exception& err)
    {
        std::cout << err.what() << std::endl;
    }

    return 0;
}
