/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:12:29 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/03 13:51:39 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << BLUE << "Dog constructor called" << std::endl;
    _type = "Dog";
    return;
}

Dog::Dog(const Dog& other) : Animal()
{
    std::cout << BLUE << "Copy constructor called" << std::endl;
    *this = other;
    return;
}

Dog& Dog::operator=(const Dog& rhs)
{
    if (this != &rhs)
        _type = rhs._type;
    return *this;
}

Dog::~Dog()
{
    std::cout << BLUE << "Dog destructor called" << std::endl;    
}

void Dog::makeSound() const
{
    std::cout << YELLOW << _type << ": wouaf" << std::endl;
}