/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:12:29 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/04 10:21:27 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << BLUE << "Dog constructor called" << std::endl;
    _type = "Dog";
    _DogBrain = new Brain;
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
    {
        _type = rhs._type;
        delete this->_DogBrain;
        this->_DogBrain = new Brain(*rhs._DogBrain);
    }    
    return *this;
}

Dog::~Dog()
{
    std::cout << BLUE << "Dog destructor called" << std::endl;    
    delete _DogBrain;
}

Brain* Dog::getBrain()
{
    return _DogBrain;
}

void Dog::makeSound() const
{
    std::cout << YELLOW << "Dog sound" << std::endl;
}