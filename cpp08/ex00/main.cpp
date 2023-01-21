#include "iostream"
#include "vector"
#include "easyfind.h"

void print(int i)
{
    std::cout << i << " ";
}

int main()
{
    std::vector<int> vInt;

    for (int i = 0; i <= 42; i++)
        vInt.push_back(i);

    try
    {
        std::vector<int>::iterator it_collect = easyfind(vInt, 14);
        (void)it_collect;
        for_each(it_collect, vInt.end(), print);
        std::cout << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    /*     for (int i = 0; i < vInt.size(); i++)
            std::cout << vInt[i] << " ";
     */
}