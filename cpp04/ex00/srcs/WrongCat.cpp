/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:44:43 by uaupetit          #+#    #+#             */
/*   Updated: 2023/12/15 12:45:09 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << BLUE << "WrongCat constructor called" << std::endl;
    _type = "WrongCat";
    return;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal()
{
    std::cout << BLUE << "Copy constructor called" << std::endl;
    *this = other;
    return;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
    if (this != &rhs)
        _type = rhs._type;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << BLUE << "WrongCat destructor called" << std::endl;    
}

void WrongCat::makeSound() const
{
    std::cout << YELLOW << _type << ": Wrong miaou" << std::endl;
}