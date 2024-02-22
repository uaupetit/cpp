/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:41:01 by uaupetit          #+#    #+#             */
/*   Updated: 2023/12/15 12:41:38 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << BLUE << "WrongAnimal constructor called" << std::endl;
    _type = "WrongAnimal";
    return;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << BLUE << "Copy constructor called" << std::endl;
    *this = other;
    return;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
    if (this != &rhs)
        _type = rhs._type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << BLUE << "WrongAnimal destructor called" << std::endl;    
}

std::string WrongAnimal::getType() const
{
    return _type;
}

void WrongAnimal::makeSound() const
{
    std::cout << YELLOW << _type << ": WrongAnimal sound" << std::endl;
}