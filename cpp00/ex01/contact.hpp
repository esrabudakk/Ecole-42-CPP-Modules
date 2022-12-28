#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
private:
	std::string name;
	std::string lname;
	std::string nickname;
	std::string darkSecret;
	std::string number;
public:
	Contact();
	void setName(std::string sName);
	std::string getName();
	void setLname(std::string slName);
	std::string getLname();
	void setNickname(std::string sNickname);
	std::string getNickname();
	void setDarksecret(std::string sDsecret);
	std::string getDarksecret();
	void setNumber(std::string sNumber);
	std::string getNumber();
};



#endif