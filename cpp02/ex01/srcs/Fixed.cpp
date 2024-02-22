/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:53:56 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/22 18:45:26 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed() : _FixedPoint(0)
{   
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(const int nb) : _FixedPoint(nb << _BitNumber)
{   
    std::cout << "Int constructor called" << std::endl;
    return;
}

Fixed::Fixed(const float n) : _FixedPoint(roundf(n * (1 << _BitNumber)))
{
    std::cout << "Float constructor called " << std::endl;
    return;
}

Fixed::Fixed(const Fixed& object)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = object;
    return;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return;
}


Fixed& Fixed::operator=(const Fixed& rhs)
{
    std::cout << "Copy assignement operator called" << std::endl;
    if (this != &rhs)
        _FixedPoint = rhs._FixedPoint;
    return *this;
}

void    Fixed::setRawBits(int const raw)
{
        _FixedPoint = raw;
}


float   Fixed::toFloat(void) const
{
    return ((float)_FixedPoint / (1 << _BitNumber));
}

int     Fixed::toInt(void) const
{
    return (_FixedPoint >> _BitNumber);
}

std::ostream&   operator<<(std::ostream &o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return o;
}