/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:11:01 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/22 18:52:29 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ClapTrap.hpp"
#include "./includes/ScavTrap.hpp"
#include "./includes/FragTrap.hpp"

int main()
{
    
    FragTrap    riri("Riri");
    FragTrap    fifi("Fifi");
    FragTrap    loulou("Loulou");

    std::cout << "<-_-^-_-^-_-^-_-^-_-^-_-^-_-^->\n" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        riri.attack("Fifi");
        fifi.TakeDamage(2);
        fifi.beRepaired(3);
        std::cout << "\n<-_-^-_-^-_-^-_-^-_-^-_-^-_-^->\n" << std::endl;
    }
    std::cout << std::endl;
    riri.highFivesGuys();
    fifi.highFivesGuys();
    loulou.highFivesGuys();
    std::cout << std::endl;
    return 0;
}
