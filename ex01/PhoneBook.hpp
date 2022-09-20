
// ************************************************************************** //
//                                                                            //
//                      PhoneBook.hpp for D00                                 //
//                      Created: 2022/09/13 18:20:28                          //
//                      Made by : yelgharo <yelgharo@student.42.fr>           //
//                                                                            //
// ************************************************************************** //

#ifndef PhoneBook_HPP
# define PhoneBook_HPP

#include <iostream>
#include <string>
#include <sstream>
#include "Contact.hpp"

class PhoneBook {

private:

	Contact _contacts[8];

public:

	int		Add( int &i );
	void	to_Add( int &i );
	int		Search( int &i );
	void	table( int &i );
	void	print( int index, int i );

};

int	Error( int n );

#endif // ******************************************************PhoneBook_HPP //
