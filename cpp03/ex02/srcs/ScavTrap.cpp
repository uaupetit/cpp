/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:41:23 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/22 18:53:06 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << BLUE << "ScavTrap default constructor called" << std::endl;
    std::cout << GREEN << "Name: " << _Name << ", hit points: " << _HitPoints << ", energy points: " << _EnergyPoint << ", attack damage: " << _AttackDamage << std::endl;
    return;
}

ScavTrap::ScavTrap(std::string str) : ClapTrap(str)
{
    _HitPoints = 100;
    _EnergyPoint = 50;
    _AttackDamage = 20;
    std::cout << BLUE << "ScavTrap constructor called" << std::endl;
    std::cout << GREEN << "Name: " << _Name << ", hit points: " << _HitPoints << ", energy points: " << _EnergyPoint << ", attack damage: " << _AttackDamage << std::endl;
    return;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << BLUE << "ScavTrap copy constructor called" << std::endl;
    *this = other;
    std::cout << GREEN << "Name: " << _Name << ", hit points: " << _HitPoints << ", energy points: " << _EnergyPoint << ", attack damage: " << _AttackDamage << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
    if (this != &rhs)
        ClapTrap::operator=(rhs);
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << BLUE << "ScavTrap Destructor called" << std::endl;
    std::cout << GREEN << "Name: " << _Name << ", hit points: " << _HitPoints << ", energy points: " << _EnergyPoint << ", attack damage: " << _AttackDamage << std::endl;
    return;
}

void ScavTrap::attack(const std::string& target)
{
    std::cout << "ScavTrap attacks " << target << " in a unique way!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << YELLOW << "ScavTrap " << _Name << " has entered in Gate keeper mode" << std::endl;
}
