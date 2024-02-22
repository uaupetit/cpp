/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:30:03 by uaupetit          #+#    #+#             */
/*   Updated: 2023/12/19 14:15:38 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include ".././includes/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << YELLOW << "Ice constructor is called" << std::endl;
}

Ice::Ice(Ice const & copy) : AMateria("ice")
{
    *this = copy;
    std::cout << YELLOW << "Ice copy constructor is called" << std::endl;
}

Ice&   Ice::operator=(const Ice& rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return *this;
}

Ice::~Ice()
{
    std::cout << YELLOW << "Ice destructor called" << std::endl;
}

AMateria* Ice::clone() const
{
    Ice* iceClone = new Ice(*this);
    return iceClone;
}

void    Ice::use(ICharacter& target)
{
    std::cout << MAGENTA << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}