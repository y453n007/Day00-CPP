
// ************************************************************************** //
//                                                                            //
//                      main.cpp for D00                                      //
//                      Created: 2022/09/13 14:07:51                          //
//                      Made by : yelgharo <yelgharo@student.42.fr>           //
//                                                                            //
// ************************************************************************** //


#include "PhoneBook.hpp"

int main (int ac, char *av[]){

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
			if ( std::cin.eof() )
				cmd = "EXIT";
			if (cmd == "ADD"){
				if (phone.Add( i ) )
					continue ;}
			else if (cmd == "SEARCH"){
				if (phone.Search( i ))
					continue ;}
			else if (cmd == "EXIT"){
				std::cout << "\n\t\tEXITED !!" <<std::endl;
				return (0);}
			else {
				std::cout << "\t\tWrong Command !!" <<std::endl;
				continue ;}
		}
	}
	return (0);
}

// ************************************************************************** //