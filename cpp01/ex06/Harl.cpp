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
	int i = 0;
	while (i < 4)
	{
		if (_level[i] == level)
			break;
		i++;
	}

	switch (i)
	{
	case 0:
		(this->*(pf[0]))();
	case 1:
		(this->*(pf[1]))();
	case 2:
		(this->*(pf[2]))();
	case 3:
		(this->*(pf[3]))();
		break;
	default:
		cout << "[ Probably complaining about insignificant problems ]" << endl;
		break;
	}
}

void Harl::debug()
{
	cout << "[ DEBUG ]" << endl;
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << endl
		 << endl;
}
void Harl::error()
{
	cout << "[ ERROR ]" << endl;
	cout << "This is unacceptable! I want to speak to the manager now." << endl;
}
void Harl::info()
{
	cout << "[ INFO ]" << endl;
	cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn't be asking for more! " << endl
		 << endl;
}
void Harl::warning()
{
	cout << "[ WARNING ]" << endl;
	cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << endl
		 << endl;
}