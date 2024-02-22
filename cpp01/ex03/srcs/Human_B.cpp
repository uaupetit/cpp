/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human_B.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:11:42 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/22 18:33:03 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Human_B.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    this->_weapon = NULL;
    return;
}

HumanB::~HumanB()
{
    return;
}

void    HumanB::attack(void) const
{
    if (!(this->_weapon))
        std::cout << this->_name << " attacks with no weapon " << std::endl;
    else
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    return;
}

void    HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
    return;
}