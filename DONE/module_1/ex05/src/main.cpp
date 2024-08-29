#include "../includes/Harl.hpp"

int main( void )
{
	std::string	str;
	Harl		harl;

	while(1)
	{
		std::cout << "Enter a level: ";
		std::cin >> str;
		harl.complain(str);
		if (str.compare("exit") == 0)
			break;
	}
	return 0;
}
