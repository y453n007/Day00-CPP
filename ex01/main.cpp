
// ************************************************************************** //
//                                                                            //
//                      main.cpp for D00                                      //
//                      Created: 2022/09/13 14:07:51                          //
//                      Made by : yelgharo <yelgharo@student.42.fr>           //
//                                                                            //
// ************************************************************************** //


#include "PhoneBook.hpp"

std::string	Contact::getFname(void) const {
	return this->_fname;
}

void	Contact::setFname(std::string str){
	this->_fname = str;
	return;
}

std::string	Contact::getLname(void) const {
	return this->_lname;
}

void	Contact::setLname(std::string str){
	this->_lname = str;
	return;
}

std::string	Contact::getSname(void) const {
	return this->_sname;
}

void	Contact::setSname(std::string str){
	this->_sname = str;
	return;
}

std::string	Contact::getNumero(void) const {
	return this->_numero;
}

void	Contact::setNumero(std::string str){
	this->_numero = str;
	return;
}

std::string	Contact::getSecret(void) const {
	return this->_secret;
}

void	Contact::setSecret(std::string str){
	this->_secret = str;
	return;
}

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