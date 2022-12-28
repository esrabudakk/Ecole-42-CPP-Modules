#include "contact.hpp"

Contact::Contact()
{
}

void Contact::setName(std::string sName)
{
	name = sName;
}
std::string Contact::getName()
{
	return name;
}
void Contact::setLname(std::string slName)
{
	lname = slName;
}
std::string Contact::getLname()
{
	return lname;
}
void Contact::setNickname(std::string sNickname)
{
	nickname = sNickname;
}
std::string Contact::getNickname()
{
	return nickname;
}
void Contact::setDarksecret(std::string sDsecret)
{
	darkSecret = sDsecret;
}
std::string Contact::getDarksecret()
{
	return darkSecret;
}
void Contact::setNumber(std::string sNumber)
{
	number = sNumber;
}
std::string Contact::getNumber()
{
	return number;
}