#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Harl
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
public:
	Harl();
	void (Harl::*pf[4])();
	void complain(string level);	
	string _level[4];
};

#endif