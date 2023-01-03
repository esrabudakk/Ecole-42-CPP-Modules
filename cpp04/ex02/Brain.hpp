#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
using std::cout;
using std::endl;
using std::string;

class Brain
{
private:
	
public:
	
	Brain();
	~Brain();
	Brain(const Brain& src);
	Brain &operator=(const Brain &src);
	string ideas[100];
};

#endif