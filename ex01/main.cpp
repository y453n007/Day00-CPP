#include <iostream>
#include <string>
#include <sstream>
#include "PhoneBook.hpp"

int main (int ac, char *av[])
{
	int static i;
	PhoneBook phone;
	std::string cmd; 
	(void)av;

	if (ac == 1)
	{
		while (true)
		{
			std::cout << "******* My Awesome PhoneBook *******" << std::endl;
			std::cout << "Enter Your Command : ";
			std::getline(std::cin, cmd);
			if (cmd == "ADD"){
				if (Add(phone, i))
					return (1);}
			else if (cmd == "SEARCH"){
				if (Search(phone, i))
					return (1);}
			else if (cmd == "EXIT")
				return (0);
			else 
			{
				std::cout << std::endl;
				return (0);
			}
		}
	}
	return (0);
}
