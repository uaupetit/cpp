/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:59:11 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/02 15:57:28 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal()
{
    std::cout << BLUE << "Animal constructor called" << std::endl;
    _type = "Animal";
    return;
}

Animal::Animal(const Animal& other)
{
    std::cout << BLUE << "Copy constructor called" << std::endl;
    *this = other;
    return;
}

Animal& Animal::operator=(const Animal& rhs)
{
    if (this != &rhs)
        _type = rhs._type;
    return *this;
}

Animal::~Animal()
{
    std::cout << BLUE << "Animal destructor called" << std::endl;    
}

std::string Animal::getType() const
{
    return _type;
}

// void Animal::makeSound() const
// {
//     std::cout << YELLOW << "Animal sound" << std::endl;
// }