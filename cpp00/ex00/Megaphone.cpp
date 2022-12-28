#include <iostream>
int main(int argc, char **argv)
{
	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			std::string argv_i = argv[i];
			int k = argv_i.length();
			for (int i = 0; i < k; i++)
			{
				char c = toupper(argv_i[i]);
				std::cout << c;
			}
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;

	return 0;
}
