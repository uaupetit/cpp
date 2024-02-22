/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:07:15 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/02 15:57:40 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << BLUE << "Cat constructor called" << std::endl;
    _type = "Cat";
    _CatBrain = new Brain;
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
    {
        _type = rhs._type;
        delete this->_CatBrain;
        this->_CatBrain = new Brain(*rhs._CatBrain);
    }
    return *this;
}

// Brain Cat::getBrain()
// {
//     return *_CatBrain;
// }

Cat::~Cat()
{
    std::cout << BLUE << "Cat destructor called" << std::endl;    
    delete _CatBrain;
}

void Cat::makeSound() const
{
    std::cout << YELLOW << "Cat sound" << std::endl;
}