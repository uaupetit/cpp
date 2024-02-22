/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 10:36:06 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/22 18:27:55 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Zombie.hpp"

int     main(int ac, char **av)
{
    if (ac != 3)
    {
        std::cout << "bad arguments number" << std::endl; 
        return (1);
    }
    Zombie *heap_instance;
    std::string zombie_name;
    
    heap_instance = newZombie(av[1]);
    heap_instance->announce();
    delete heap_instance;

    randomChump(av[2]);
}