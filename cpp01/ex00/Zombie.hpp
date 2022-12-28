#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
using std::cout;
using std::string;

class Zombie
{
private:
	string name;

public:
	Zombie();
	~Zombie();
	Zombie(string name);
	void setName(string sName);
	string getName();
	void announce(void);
};

void randomChump(std::string name);
Zombie *newZombie(string name);

#endif