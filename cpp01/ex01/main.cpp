/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 10:36:06 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/22 18:30:45 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Zombie.hpp"

int     main(int ac, char **av)
{
    Zombie *tab;
    int i = 0;
    int j = 0;

    if (ac != 3)
    {
        std::cout << "bad number of arguments" << std::endl;
        return (1);
    }
    for (j = 0; av[2][j]; j++)
    {
        if (!std::isdigit(av[2][j]))
        {
            std::cout << "second argument is not a number" << std::endl;
            return (1);
        }
    }
    i = atoi(av[2]);
    if (i <= 0)
    {
        std::cout << "not enought zombies to create" << std::endl;
        return(1);
    }
    tab = zombieHorde(i, av[1]);
    for (j = 0; j < i; j++)
        tab[j].announce();
    delete[] tab;
    return (0);
}