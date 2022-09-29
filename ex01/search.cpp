
// ************************************************************************** //
//                                                                            //
//                      search.cpp for D00                                    //
//                      Created: 2022/09/13 14:19:01                          //
//                      Made by : yelgharo <yelgharo@student.42.fr>           //
//                                                                            //
// ************************************************************************** //

#include "PhoneBook.hpp"


void	PhoneBook::print( int index, int i )
{
	if (i != 0){
	std::cout<<"First Name : "<< _contacts[index - 1].getFname()<< std::endl;
	std::cout<<"Last Name : "<< _contacts[index - 1].getLname()<< std::endl;
	std::cout<< "NickName : "<< _contacts[index - 1].getSname()<< std::endl;
	std::cout<<"Phone Number : "<< _contacts[index - 1].getNumero()<< std::endl;
	std::cout<<"Deep secret : "<< _contacts[index - 1].getSecret()<< std::endl;}
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

void	PhoneBook::table( int &i )
{
	std::cout << " ____________________________________________" << std::endl;
	std::cout << "|  Index  | First Name| Last Name | NickName |" << std::endl;
	std::cout << " ____________________________________________" << std::endl;
	if (i != 0)
		for (int j = 1; j <= i; j++)
		{
			std::cout << "|    " << j << "   " << " |";
			CondiPrint(_contacts[j - 1].getFname());
			std::cout << " |";
			CondiPrint(_contacts[j - 1].getLname());
			std::cout << " |";
			CondiPrint(_contacts[j - 1].getSname());
			std::cout << "|";
			std::cout << std::endl;
		}
		std::cout <<" ____________________________________________"<< std::endl;

}

int	PhoneBook::Search( int &i )
{
	int index;
	std::stringstream ss;

	std::cout << "******* Contacts Search *******" << std::endl;
	std::string cmd;
	table( i );
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
		return( Error( 4 ) );
	if (index > i)
		return( Error( 5 ) );
	print( index, i );
	return (0);
}

// ************************************************************************** //