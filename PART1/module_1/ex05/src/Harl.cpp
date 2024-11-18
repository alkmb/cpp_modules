#include "../includes/Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
	std::cout <<  "I love having extra bacon for my 7XL-double \
-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. \
You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl;
}

void Harl::complain(std::string level)
{
	t_func funcs[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;

	while (i < 4 && levels[i] != level)
		i++;
	if (i < 4)
	(this->*funcs[i])();
}
