/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:21:15 by uaupetit          #+#    #+#             */
/*   Updated: 2023/12/19 16:35:35 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include ".././includes/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << YELLOW << "Cure constructor is called" << std::endl;
}

Cure::Cure(Cure const & copy) : AMateria("cure")
{
    *this = copy;
    std::cout << YELLOW << "Cure copy constructor is called" << std::endl;
}

Cure&   Cure::operator=(const Cure& rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return *this;
}

Cure::~Cure()
{
    std::cout << YELLOW << "Cure destructor called" << std::endl;
}

AMateria* Cure::clone() const
{
    Cure* CureClone = new Cure(*this);
    return CureClone;
}

void    Cure::use(ICharacter& target)
{
    std::cout << MAGENTA << "* heals " << target.getName() << "'s wound *" << std::endl;
}