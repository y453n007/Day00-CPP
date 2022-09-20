// ************************************************************************** //
//                  	                                                      //
//                      Contact.hpp for D00                                   //
//	                    Created: 2022/09/13 18:18:28                          //
//                      Made by : yelgharo <yelgharo@student.42.fr>           //
//                  	                                                      //
// ************************************************************************** //

#ifndef Contact_HPP
# define Contact_HPP

class Contact {

private:

	std::string _fname;
	std::string _lname;
	std::string _sname;
	std::string _numero;
	std::string _secret;	

public:

	std::string	getFname(void) const;
	void		setFname(std::string str);
	std::string	getLname(void) const;
	void		setLname(std::string str);
	std::string	getSname(void) const;
	void		setSname(std::string str);
	std::string	getNumero(void) const;
	void		setNumero(std::string str);
	std::string	getSecret(void) const;
	void		setSecret(std::string str);

};

#endif // **********************************************************Contact_HPP //