/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human_A.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:09:06 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/22 18:32:50 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Human_A.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(&weapon), _name(name) {}

HumanA::~HumanA() {}

void   HumanA::attack(void) const
{
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}