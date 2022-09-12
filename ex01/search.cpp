#include "header.hpp"


void	print(PhoneBook &phone, int index, int i)
{
	if (i != 0)
	{
		std::cout << "First Name : " << phone.contacts[index - 1].fname << std::endl;
		std::cout << "Last Name : " << phone.contacts[index - 1].lname << std::endl;
		std::cout << "NickName : " << phone.contacts[index - 1].sname << std::endl;
		std::cout << "Phone Number : " << phone.contacts[index - 1].numero << std::endl;
		std::cout << "Deep secret : " << phone.contacts[index - 1].secret << std::endl;
	}
}

void	CondiPrint(std::string s)
{
	for (int i = 0; i < 10; i++)
	{
		while(s[i] && i < 9)
			std::cout << s[i++];
		if (s[i] && i == 9)
			std::cout << '.';
		else
			std::cout << ' ';
	}
}

void	table(PhoneBook &phone, int &i)
{
	std::cout << " ____________________________________________" << std::endl;
	std::cout << "|  Index  | First Name| Last Name | NickName |" << std::endl;
	std::cout << " ____________________________________________" << std::endl;
	if (i != 0)
		for (int j = 1; j <= i; j++)
		{
			std::cout << "|    " << j << "   " << " |";
			CondiPrint(phone.contacts[j - 1].fname);
			std::cout << " |";
			CondiPrint(phone.contacts[j - 1].lname);
			std::cout << " |";
			CondiPrint(phone.contacts[j - 1].sname);
			std::cout << "|";
			std::cout << std::endl;
		}
		std::cout << " ____________________________________________" << std::endl;

}

int	Search(PhoneBook &phone, int &i)
{
	int index;
	std::stringstream ss;

	std::cout << "******* Contacts Search *******" << std::endl;
	std::string cmd;
	table(phone, i);
	std::cout << "Enter The Contact Index  : ";
	std::getline(std::cin, cmd);
	ss << cmd;
	if (!cmd[0])
		return(Error(3));
	if (cmd[0] && cmd[1])
		return(Error(1));
	if (!(isdigit(cmd[0])))
		return(Error(1));
	ss >> index;
	if (index < 1 || index > 8)
		return(Error(1));
	if (i == 0)
		return(Error(4));
	print(phone, index, i);
	return (0);
}

