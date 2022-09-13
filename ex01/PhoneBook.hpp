#ifndef PhoneBook_HPP
# define PhoneBook_HPP

#include <iostream>
#include <string>
#include <sstream>
#include "Contact.hpp"

class PhoneBook {
	private:
	Contact contacts[8];
};

int	Add(PhoneBook &phone, int &i);
int	Search(PhoneBook &phone, int &i);
int	Error(int n);

#endif