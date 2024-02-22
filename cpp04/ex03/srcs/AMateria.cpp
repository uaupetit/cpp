/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 13:51:24 by uaupetit          #+#    #+#             */
/*   Updated: 2023/12/19 16:53:09 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include ".././includes/AMateria.hpp"

AMateria::AMateria() : _type("Default")
{
    std::cout << YELLOW << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(const std::string & type) : _type(type)
{
    std::cout << YELLOW << "AMateria string constructor called" << std::endl;
    return;
}

AMateria::AMateria(AMateria& rhs)
{
    std::cout << YELLOW << "AMateria copy constructor called" << std::endl;
    _type = rhs._type;
    return;
}

AMateria& AMateria::operator=(const AMateria& rhs)
{
    if (this != &rhs)
        _type = rhs._type;
    return *this;
}

void    AMateria::use(ICharacter& target)
{
    std::cout << "AMateria " << this->_type << " used on " << target.getName() << std::endl;
}

std::string const& AMateria::getType() const
{
    return _type;
}

AMateria::~AMateria()
{
    std::cout << YELLOW << "AMateria destructor called" << std::endl;
    return;
}