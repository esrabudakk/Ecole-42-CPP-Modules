#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Zombie
{
private:
	string name;
public:
	Zombie();
	~Zombie();
	void setName(string sName);
	void announce();
	string getName();

};

Zombie* zombieHorde(int N, std::string name);

#endif