
// ************************************************************************** //
//                                                                            //
//                      megaphone.cpp for D00                                 //
//                      Created: 2022/09/08 10:52:10                          //
//                      Made by : yelgharo <yelgharo@student.42.fr>           //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int main (int ac, char *av[])
{
    std::string tmp;
    if (ac > 1)
    {
        for (int i = 1; i < ac; i++){
            tmp = (std::string)av[i];
            std::transform(tmp.begin(), tmp.end(), tmp.begin(), ::toupper);
            std::cout << tmp;
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}

// ************************************************************************** //