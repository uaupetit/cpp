/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:12:58 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/22 18:50:40 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap() : _Name("Default"), _HitPoints(10), _EnergyPoint(10), _AttackDamage(0)
{
    std::cout << BLUE << "ClapTrap constructor called" << std::endl;
    std::cout << GREEN << "Name: " << _Name << ", hit points: " << _HitPoints << ", energy points: " << _EnergyPoint << ", attack damage: " << _AttackDamage << std::endl;
    return;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << BLUE << "ClapTrap copy constructor called" << std::endl;
    *this = other;
    std::cout << GREEN << "Name: " << _Name << ", hit points: " << _HitPoints << ", energy points: " << _EnergyPoint << ", attack damage: " << _AttackDamage << std::endl;

}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
    if (this != &rhs)
    {
        _Name = rhs._Name;
        _HitPoints = rhs._HitPoints;
        _EnergyPoint = rhs._EnergyPoint;
        _AttackDamage = rhs._AttackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << BLUE << "ClapTrap Destructor called" << std::endl;
    std::cout << GREEN << "Name: " << _Name << ", hit points: " << _HitPoints << ", energy points: " << _EnergyPoint << ", attack damage: " << _AttackDamage << std::endl;
    return;
}

ClapTrap::ClapTrap(std::string str) : _Name(str), _HitPoints(10), _EnergyPoint(10), _AttackDamage(0)
{
    std::cout << BLUE << "ClapTrap name constructor called" << std::endl;
    std::cout << GREEN << "Name: " << _Name << ", hit points: " << _HitPoints << ", energy points: " << _EnergyPoint << ", attack damage: " << _AttackDamage << std::endl;
    return;
}

void ClapTrap::attack(const std::string& target)
{
    if (_EnergyPoint > 0 || _HitPoints > 0)
    {
        _EnergyPoint--;
        std::cout << YELLOW << "ClapTrap " << _Name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl; 
    }
    else if (_EnergyPoint <= 0 || _HitPoints <= 0)
        std::cout << RED << "ClapTrap "<< _Name << " has not enought energy or hit points to attack!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_EnergyPoint > 0 && _HitPoints > 0)
    {
        _HitPoints += amount;
        if (_HitPoints > 10)
        {
            _HitPoints = 10;
            std::cout << "Max hitpoints amount reached!" << std::endl;
        }
        else
        {
            _EnergyPoint--;
            std::cout << YELLOW << "After repairing " << _Name << " has now " << _HitPoints << " hit points!" << std::endl;
        }
    }
    else
        std::cout << RED << _Name << " has not enought energy points or hitpoints to get repaired!" << std::endl;
}

void ClapTrap::TakeDamage(unsigned int amount)
{   
    if (amount >= (unsigned int)_HitPoints)
    {
        _HitPoints = 0;
        std::cout << "ClapTrap " << _Name << " has no hitpoints left!" << std::endl;
    }
    else
    {
        _HitPoints -= amount;
        if (_HitPoints < 0)
            _HitPoints = 0;
        std::cout << "ClapTrap " << _Name << " has now " << _HitPoints <<  " hitpoints left!" << std::endl;
    }
}
std::string ClapTrap::GetName(void) const
{
    return (_Name);
}
