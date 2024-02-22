/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:19:08 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/22 18:33:11 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string s)
{
    std::cout << "Constructor called" << std::endl;
    setType(s);
    return;
}

Weapon::~Weapon()
{
    std::cout << "Destructor has been called" << std::endl;
    return; 
}

const std::string&  Weapon::getType()
{
    return (this->type);
}

void    Weapon::setType(std::string s)
{
    this->type = s;
    return;
}