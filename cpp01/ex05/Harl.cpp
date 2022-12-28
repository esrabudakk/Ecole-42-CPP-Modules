
#include "Harl.hpp"

Harl::Harl()
{
	void (Harl::*tmp[4])(void);
	tmp[0] = &Harl::debug;
	tmp[1] = &Harl::info;
	tmp[2] = &Harl::warning;
	tmp[3] = &Harl::error;
	const char *key[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		_level[i] = key[i];
		this->pf[i] = tmp[i];
	}
}

void Harl::complain(string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (_level[i] == level)
			(this->*pf[i])();
	}
}

void Harl::debug()
{
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << endl;
}
void Harl::error()
{
	cout << "This is unacceptable! I want to speak to the manager now." << endl;
}
void Harl::info()
{
	cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn't be asking for more! " << endl;
}
void Harl::warning()
{
	cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << endl;
}