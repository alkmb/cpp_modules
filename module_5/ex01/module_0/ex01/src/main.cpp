#include "../includes/Phonebook.hpp"

int main()
{
    Phonebook Phonebook;
    std::string command;

    while (1)
    {
        std::cout << "Enter command: ";
        getline(std::cin, command);
        if (command == "ADD")
            Phonebook.add();
        else if (command == "SEARCH")
			Phonebook.search();
        else if (command == "EXIT")
			break;
        else
            std::cout << "Invalid Command" << std::endl;
    }
}