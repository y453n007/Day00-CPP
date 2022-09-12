#include <iostream>

int main (int ac, char *av[])
{
    int j;

    if (ac > 1)
    {
        for (int i = 1; i < ac; i++)
        {
            j = 0;
            while (av[i][j])
            {
                if (isalpha(av[i][j]))
                    std::cout << (char)toupper(av[i][j]);
                else
                    std::cout << av[i][j];
                j++;
            }
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}
