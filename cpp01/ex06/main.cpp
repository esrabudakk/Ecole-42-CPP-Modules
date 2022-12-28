#include "Harl.hpp"

int main(int argc, char **argv)
{

	Harl harl;
	if (argc != 2)
	{
		cout << "Wrong number of arguments!" << endl;
		return (0);
	}
	harl.complain(argv[1]);
}