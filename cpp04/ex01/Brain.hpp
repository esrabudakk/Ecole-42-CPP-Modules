#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
using std::cout;
using std::endl;
using std::string;

class Brain
{
private:
	string ideas[100];
public:

	Brain();
	~Brain();
	Brain(const Brain& src);
	Brain &operator=(const Brain &src);
};

#endif