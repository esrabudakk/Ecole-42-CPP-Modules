#include "phonebook.hpp"
#include <iomanip>

PhoneBook::PhoneBook()
{
	index = 0;
	size = 0;
	control = 0;
	control_if = 1;
}

std::string PhoneBook::get_line(std::string message, std::string input)
{
	std::cout << message;
	getline(std::cin, input);
	while (1)
	{
		if (input.empty())
		{
			std::cout << message;
			getline(std::cin, input);
		}
		else
		{
			break;
		}
	}
	return input;
}

void PhoneBook::addContact()
{

	index = index % 8;
	contact[index].setName(get_line("Name: ", fname));
	contact[index].setLname(get_line("Last Name:", lastname));
	contact[index].setNickname(get_line("Nickname: ", nickName));
	contact[index].setNumber(get_line("Phone Number: ", phonumber));
	contact[index].setDarksecret(get_line("Darkest Secret: ", darksecret));
	if (index == 7)
	{
		size = 8;
		control = 1;
	}
	if (control == 0)
		size = index + 1;
	index++;
}

std::string PhoneBook::writePerson(std::string str)
{
	if (str.length() < 10)
		return str;
	else
		return str.substr(0, 9).append(".");
}

void PhoneBook::indexControl()
{
	std::string inputIndex;
	std::cout << std::endl
			  << "Enter index: ";
	getline(std::cin, inputIndex);
	int num;
	while (1)
	{
		if (!inputIndex.empty())
		{
			for (size_t i = 0; i < inputIndex.length(); i++)
			{
				if (!isdigit(inputIndex[i]))
				{
					std::cout << "Invalid input!";
					control_if = 0;
					break;
				}
				control_if = 1;
			}
			if (control_if)
			{
				num = std::stoi(inputIndex);
				num--;
				if (num >= 0 && num <= size - 1)
				{
					std::cout << std::endl;
					std::cout << "Index: " << num + 1 << std::endl
							  << "First Name: " << contact[num].getName() << std::endl
							  << "Last Name: " << contact[num].getLname() << std::endl
							  << "Nickname: " << contact[num].getNickname() << std::endl
							  << "Phone Number: " << contact[num].getNumber() << std::endl
							  << "Darkest Secret: " << contact[num].getDarksecret();
					std::cout << std::endl;
				}
				else
					std::cout << "No Person!";
				break;
			}
			break;
		}
		else
		{
			std::cout << "Enter an index! " << std::endl
					  << "Enter index: ";
			getline(std::cin, inputIndex);
		}
	}
}

void PhoneBook::searchContact()
{
	std::cout << std::setw(10) << "Index"
			  << "|" << std::setw(10) << "First Name"
			  << "|" << std::setw(10) << "Last Name"
			  << "|" << std::setw(10) << "Nickname" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|" << std::setw(10)
				  << writePerson(contact[i].getName()) << "|" << std::setw(10)
				  << writePerson(contact[i].getLname()) << "|" << std::setw(10)
				  << writePerson(contact[i].getNickname());
		std::cout << std::endl;
	}
	indexControl();
}
