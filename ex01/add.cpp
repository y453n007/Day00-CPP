
// ************************************************************************** //
//                                                                            //
//                      add.cpp for D00                                       //
//                      Created: 2022/09/13 14:12:37                          //
//                      Made by : yelgharo <yelgharo@student.42.fr>           //
//                                                                            //
// ************************************************************************** //

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

void PhoneBook::to_Add( int &i )
{
	int j = 1;
	while (j < i)
	{
		_contacts[j - 1].setFname(_contacts[j].getFname());
		_contacts[j - 1].setLname(_contacts[j].getLname());
		_contacts[j - 1].setLname(_contacts[j].getLname());
		_contacts[j - 1].setNumero(_contacts[j].getNumero());
		_contacts[j - 1].setSecret(_contacts[j].getSecret());
		j++;
	}
	i--;
}

int	PhoneBook::Add(int &i)
{
	std::string tmp;
	if (i == 8)
		to_Add( i );
	std::cout << "******* Create a new contact *******" << std::endl;
	std::cout << "First Name : ";
	std::getline(std::cin, tmp);
	if (!tmp[0])
		return (Error(3));
	_contacts[i].setFname(tmp);
	std::cout << "Last Name : ";
	std::getline(std::cin, tmp);
	if (!tmp[0])
		return (Error(3));
	_contacts[i].setLname(tmp);
	std::cout << "NickName : ";
	std::getline(std::cin, tmp);
	if (!tmp[0])
		return (Error(3));
	_contacts[i].setSname(tmp);
	std::cout << "Phone Number : ";
	std::getline(std::cin, tmp);
	if (!tmp[0])
		return (Error(3));
	if (checkNumber(tmp))
		return (1);
	_contacts[i].setNumero(tmp);
	std::cout << "Your deep secret : ";
	std::getline(std::cin, tmp);
	if (!tmp[0])
		return (Error(3));
	_contacts[i].setSecret(tmp);
	i++;
	std::cout << "******* Contact saved sucssesfuly *******" << std::endl;
	return (0);
}

// ************************************************************************** //