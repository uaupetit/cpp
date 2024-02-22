/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:01:51 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/22 18:27:49 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout << "Zombie constructor called" << std::endl;
    return;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie destructor called" << std::endl;
    return;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}

void Zombie::setzombieName(const std::string &Name)
{
    name = Name;
    return;
}

std::string Zombie::getzombieName() const
{
    return name;
}
