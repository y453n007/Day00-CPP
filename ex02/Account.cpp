
// ************************************************************************** //
//                                                                            //
//                      Account.cpp for D00                                   //
//                      Created: 2022/09/13 14:36:13                          //
//                      Made by : yelgharo <yelgharo@student.42.fr>           //
//                                                                            //
// ************************************************************************** //

#include <iostream>
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

void	Account::_displayTimestamp( void )
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
	std::cout << "[" <<  y << mo << d << '_' << h << mi << s << "]";
}

Account::Account( int initial_deposit )
{
	_displayTimestamp();
    std::cout << " index:" << _nbAccounts << ";" \
	<< "amount:" << initial_deposit << ";created" << std::endl;
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbWithdrawals = 0;
	_nbDeposits = 0;
}

Account::~Account()
{
	_displayTimestamp();
    std::cout << " index:" << _accountIndex  << ";" \
	<< "amount:" << _amount << ";closed" << std::endl;
    return ;
}

void    Account::displayAccountsInfos( void )
{
	_displayTimestamp();
    std::cout << " accounts:" << getNbAccounts() \
	<< ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() \
	<< ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout <<" index:" << _accountIndex \
	<< ";amount:" << _amount << ";deposits:" << _nbDeposits \
	<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout <<" index:" << _accountIndex \
	<< ";p_amount:" << _amount << ";deposits:" << deposit;
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout << ";amount:" << _amount << ";nb_deposits:" \
	<< _nbDeposits <<std::endl;
}

int		Account::checkAmount( void ) const
{
	if( _amount < 0 )
		return ( 1 ) ;
	return ( 0 ) ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	_amount -= withdrawal;
	if( checkAmount() )
	{
		_amount += withdrawal;
		std::cout <<" index:" << _accountIndex \
		<< ";p_amount:" << _amount << ";withdrawal:refused" <<std::endl;;
		return( 1 ) ;
	}
	std::cout <<" index:" << _accountIndex \
	<< ";p_amount:" << _amount << ";withdrawal:" << withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	std::cout << ";amount:" << _amount << ";nb_withdrawal:" \
	<< _nbWithdrawals <<std::endl;
	return( 0 ) ;
}

// ************************************************************************** //