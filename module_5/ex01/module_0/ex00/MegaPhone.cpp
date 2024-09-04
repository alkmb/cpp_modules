#include <iostream>

int main (int argc, char **argv)
{
	std::string str;

	if (argc == 1)
	{
		std::cout << "*LOUD AND UNREADABLE NOISE!*" << std::endl;
		return 1;
	}
	else
	{
		for (int i = 1; i < argc; i++)
		{
			str = argv[i];
			for (size_t j = 0; j < str.length(); j++)
			{
				std::cout << (char)std::toupper(str[j]);
			}
		}
		std::cout << std::endl;
	}
	return 0;
}