#include "phonebook.hpp"
#include <iostream>

int main()
{
	PhoneBook pbook;
	std::string command;
	std::cout << std::endl;
	std::cout << "****************************************************************************" << std::endl;
	std::cout << "---------------------> ~WELCOME TO PHONE BOOK APP~ <------------------------" << std::endl;
	std::cout << "-------------------------->  ENTER  COMMAND  <------------------------------" << std::endl;
	std::cout << "****************************************************************************" << std::endl;
	std::cout << std::endl;
	while (1)
	{
		std::cout << std::endl
				  << "COMMAND(ADD, SEARCH, EXIT) --> ";
		std::getline(std::cin, command);
		std::cout << std::endl;
		if (command == "ADD")
			pbook.addContact();
		else if (command == "SEARCH")
			pbook.searchContact();
		else if (command == "EXIT")
			break;
		else
			std::cout << std::endl
					  << "PLEASE ENTER VALID COMMAND (ADD, SEARCH,EXIT)" << std::endl;
	}
}