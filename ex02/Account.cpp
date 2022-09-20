
// ************************************************************************** //
//                                                                            //
//                      Account.cpp for D00                                   //
//                      Created: 2022/09/13 14:36:13                          //
//                      Made by : yelgharo <yelgharo@student.42.fr>           //
//                                                                            //
// ************************************************************************** //

#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
#include <time.h>
#include "Account.hpp"


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


int	Account::getNbAccounts( void ){
	return _nbAccounts;
}

int	Account::getTotalAmount( void ){
	return _totalAmount;
}

int	Account::getNbDeposits( void ){
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ){
	return _totalNbWithdrawals;
}

std::string timing(void)
{
	std::string	y,mo,d,h,mi,s;
    time_t now = time( 0 );
	tm *ltm = localtime( &now );
	y = std::to_string( 1900 + ltm->tm_year );
	mo = std::to_string( 1 + ltm->tm_mon );
	if ( 1 + ltm->tm_mon < 10 )
		mo = '0' + mo;
	d = std::to_string( ltm->tm_mday );
	if ( 1 + ltm->tm_mday < 10 )
		d = '0' + d;
	h = std::to_string( ltm->tm_hour );
	if ( 1 + ltm->tm_hour < 10 )
		h = '0' + h;
	mi = std::to_string( ltm->tm_min );
	if ( 1 + ltm->tm_min < 10 )
		mi = '0' + mi;
	s = std::to_string( ltm->tm_sec );
	if (1 + ltm->tm_sec < 10 )
		s = '0' + s;

	return y + mo + d + '_' + h + mi + s;
}

Account::Account( int initial_deposit )
{
    std::cout << "[" << timing() << "]" << " index:" << _nbAccounts << ";" \
	<< "amount:" << initial_deposit << ";created" << std::endl;
	_nbAccounts++;
	_totalAmount += initial_deposit;
}

Account::~Account()
{
	std::cout << "destructor called" << std::endl;
    return ;
}

void    Account::displayAccountsInfos( void )
{
    std::cout << "[" << timing() << "] accounts:" << getNbAccounts() \
	<< ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() \
	<< ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const
{
	std::cout << "[" << timing() << "] index:" << _accountIndex \
	<< ";amount:" << _amount << ";deposits:" << _nbDeposits \
	<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

// ************************************************************************** //