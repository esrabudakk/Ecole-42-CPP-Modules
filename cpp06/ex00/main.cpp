#include "Converter.hpp"

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        cout << "./converter <number>" << endl;
        return (0);
    }
    else
    {
        Converter  conversion(argv[1]);
        cout << conversion;
    }
    return (0);
}