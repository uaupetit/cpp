/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:32:21 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/03 10:18:24 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include ".././includes/Character.hpp"

Character::Character() : _name("Default")
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    std::cout << YELLOW << "Character constructor called" << std::endl;
}

Character::Character(const std::string & name) : _name(name)
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    std::cout << YELLOW << "Character string constructor called" << std::endl;
    return;
}

Character::Character(Character const & copy)
{
    std::cout << YELLOW << "Character copy constructor called" << std::endl;
    *this = copy;
    return;
}

Character &Character::operator=(const Character &rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
        for (int i = 0; i < 4; i++)
        {
            if (this->_inventory[i] != NULL)
                delete this->_inventory[i];
            if (rhs._inventory[i])
                this->_inventory[i] = rhs._inventory[i]->clone();
            else
                this->_inventory[i] = NULL;
        }
    }
    return *this;
}

std::string const& Character::getName() const
{
    return _name;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        if (this->_inventory[i])
        {
            delete this->_inventory[i];
            this->_inventory[i] = NULL;
        }
    std::cout << YELLOW << "Character destructor called" << std::endl;
    return;
}

void    Character::equip(AMateria* m)
{
    if (m != NULL)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->_inventory[i] == NULL)
            {
                this->_inventory[i] = m;
                std::cout << BLUE << "Character " << _name << " equipped with " << m->getType() << std::endl;
                return;
            }
        }
    }
    std::cout << RED << "Character " << this->_name << " can't equip " << std::endl;
}

void    Character::unequip( int idx )
{
    if (idx >= 0 && idx < 4 && this->_inventory[idx])
    {
      //  delete this->_inventory[idx];
        this->_inventory[idx] = NULL;
        std::cout << BLUE << "Character " << this->_name << " unequipped" << std::endl;
    }
    else
        std::cout << RED << "Character " << this->_name << " can't unequip" << std::endl;
}

void    Character::use(int idx, ICharacter& target)
{
    if (this->_inventory[idx])
    {
        this->_inventory[idx]->use(target);
        std::cout << BLUE << "Character " << this->_name << " uses " << this->_inventory[idx]->getType() << std::endl;
    }
    else
        std::cout << RED << "Character " << this->_name << " can't use" << std::endl;
}