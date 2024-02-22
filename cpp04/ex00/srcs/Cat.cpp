/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:07:15 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/03 13:51:44 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << BLUE << "Cat constructor called" << std::endl;
    _type = "Cat";
    return;
}

Cat::Cat(const Cat& other) : Animal()
{
    std::cout << BLUE << "Copy constructor called" << std::endl;
    *this = other;
    return;
}

Cat& Cat::operator=(const Cat& rhs)
{
    if (this != &rhs)
        _type = rhs._type;
    return *this;
}

Cat::~Cat()
{
    std::cout << BLUE << "Cat destructor called" << std::endl;    
}

void Cat::makeSound() const
{
    std::cout << YELLOW << _type << ": miaou" << std::endl;
}