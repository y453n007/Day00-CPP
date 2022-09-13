#include <iostream>
#include <string>
#include <sstream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	Error(int n)
{
	if (n == 0)
		std::cout << "******* Wrong Number Format !! *******" << std::endl;
	else if (n == 1)
		std::cout << "******* Character Not Valid !! *******" << std::endl;
	else if (n == 3)
		std::cout << "******* Nothing !! *******" << std::endl;
	else if (n == 4)
		std::cout << "Can't Found Contact" << std::endl;
	return (1);
}

int checkNumber(std::string num)
{
	int i = 0;

	while (num[i] != '\0')
		if (!(isdigit(num[i++])))
			return (Error(1));
	return (0);
}

void to_Add(PhoneBook &phone, int &i)
{
	int j = 1;
	while (j < i)
	{
		phone.contacts[j - 1].fname = phone.contacts[j].fname;
		phone.contacts[j - 1].lname = phone.contacts[j].lname;
		phone.contacts[j - 1].sname = phone.contacts[j].sname;
		phone.contacts[j - 1].numero = phone.contacts[j].numero;
		phone.contacts[j - 1].secret = phone.contacts[j].secret;
		j++;
	}
	i--;
}

int	Add(PhoneBook &phone, int &i)
{
	if (i == 8)
		to_Add(phone, i);
	std::cout << "******* Create a new contact *******" << std::endl;
	std::cout << "First Name : ";
	std::getline(std::cin, phone.contacts[i].fname);
	if (!phone.contacts[i].fname[0])
		return (Error(3));
	std::cout << "Last Name : ";
	std::getline(std::cin, phone.contacts[i].lname);
	if (!phone.contacts[i].lname[0])
		return (Error(3));
	std::cout << "NickName : ";
	std::getline(std::cin, phone.contacts[i].sname);
	if (!phone.contacts[i].sname[0])
		return (Error(3));
	std::cout << "Phone Number : ";
	std::getline(std::cin, phone.contacts[i].numero);
	if (!phone.contacts[i].numero[0])
		return (Error(3));
	if (checkNumber(phone.contacts[i].numero))
		return (1);
	std::cout << "Your deep secret : ";
	std::getline(std::cin, phone.contacts[i].secret);
	if (!phone.contacts[i].secret[0])
		return (Error(3));
	i++;
	std::cout << "******* Contact saved sucssesfuly *******" << std::endl;
	return (0);
}