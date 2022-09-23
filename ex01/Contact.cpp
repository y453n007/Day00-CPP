
// ************************************************************************** //
//                                                                            //
//                      Contact.cpp for D00                                   //
//                      Created: 2022/09/23 15:15:34                          //
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

// ************************************************************************** //