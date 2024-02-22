/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:11:01 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/22 18:48:48 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ClapTrap.hpp"

int main()
{
    
    ClapTrap    riri("Riri");
    ClapTrap    fifi("Fifi");
    ClapTrap    loulou("Loulou");
    
    std::cout << "<-_-^-_-^-_-^-_-^-_-^-_-^-_-^->\n" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        riri.attack("Fifi");
        fifi.TakeDamage(4);
        fifi.beRepaired(3);
        std::cout << "\n<-_-^-_-^-_-^-_-^-_-^-_-^-_-^->\n" << std::endl;
    }
    return 0;
}
