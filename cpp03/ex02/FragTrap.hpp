#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
private:

public:
    FragTrap(string _name);
    FragTrap();
    ~FragTrap();
    FragTrap &operator=(const FragTrap& src);
	FragTrap(const FragTrap& src);
    void attack(const std::string &target);
    void highFivesGuys(void);
};


#endif
