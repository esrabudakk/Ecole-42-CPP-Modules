#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "contact.hpp"

class PhoneBook
{
private:
	Contact contact[8];
	int index;
	int control;
	int size;
	int control_if;
	std::string fname, lastname, nickName, phonumber, darksecret;

public:
	PhoneBook();
	void addContact();
	void searchContact();
	void indexControl();
	std::string get_line(std::string message, std::string input);
	std::string writePerson(std::string str);
};
#endif