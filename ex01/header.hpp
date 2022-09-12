
#ifndef HEADER_HPP
# define HEADER_HPP


# include <iostream>
# include <string>
# include <sstream>

class Contact {
	public:
	std::string fname;
	std::string lname;
	std::string sname;
	std::string numero;
	std::string secret;
};

class PhoneBook {
	public:
	Contact contacts[8];
};

int	Add(PhoneBook &phone, int &i);
int	Search(PhoneBook &phone, int &i);
int	Error(int n);

#endif