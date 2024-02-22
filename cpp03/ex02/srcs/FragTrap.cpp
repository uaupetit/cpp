/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:50:09 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/22 18:52:59 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << BLUE << "FragTrap default constructor called" << std::endl;
    std::cout << GREEN << "Name: " << _Name << ", hit points: " << _HitPoints << ", energy points: " << _EnergyPoint << ", attack damage: " << _AttackDamage << std::endl;
    return;
}

FragTrap::FragTrap(std::string str) : ClapTrap(str)
{
    _HitPoints = 100;
    _EnergyPoint = 100;
    _AttackDamage = 30;
    std::cout << BLUE << "FragTrap constructor called" << std::endl;
    std::cout << GREEN << "Name: " << _Name << ", hit points: " << _HitPoints << ", energy points: " << _EnergyPoint << ", attack damage: " << _AttackDamage << std::endl;
    return;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << BLUE << "FragTrap copy constructor called" << std::endl;
    *this = other;
    std::cout << GREEN << "Name: " << _Name << ", hit points: " << _HitPoints << ", energy points: " << _EnergyPoint << ", attack damage: " << _AttackDamage << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
    if (this != &rhs)
        ClapTrap::operator=(rhs);
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << BLUE << "FragTrap Destructor called" << std::endl;
    std::cout << GREEN << "Name: " << _Name << ", hit points: " << _HitPoints << ", energy points: " << _EnergyPoint << ", attack damage: " << _AttackDamage << std::endl;
    return;
}

void FragTrap::attack(const std::string& target)
{
    std::cout << "FragTrap attacks " << target << " in a unique way!" << std::endl;
}

void FragTrap::highFivesGuys()
{
        std::cout << "FragTrap " << this->_Name << " give you a high five" << std::endl;
}
