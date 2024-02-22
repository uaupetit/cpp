/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:53:56 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/22 18:45:37 by uaupetit         ###   ########.fr       */
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
    std::cout << "Float constructor called" << std::endl;
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
        _FixedPoint = rhs.getRawBits();
    return *this;
}

int    Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_FixedPoint);
}

int    Fixed::getValue(void) const
{
    return (_FixedPoint);
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

bool    Fixed::operator>(const Fixed &rhs) const
{
    return (_FixedPoint > rhs.getRawBits());
}

bool    Fixed::operator<(const Fixed &rhs) const
{
    return (_FixedPoint < rhs.getRawBits());
}

bool    Fixed::operator>=(const Fixed &rhs) const
{
    return (_FixedPoint >= rhs.getRawBits());
}

bool    Fixed::operator<=(const Fixed &rhs) const
{
    return (_FixedPoint <= rhs.getRawBits());
}

bool    Fixed::operator==(const Fixed &rhs) const
{
    return (_FixedPoint == rhs.getRawBits());
}

bool    Fixed::operator!=(const Fixed &rhs) const
{
    return (_FixedPoint != rhs.getRawBits());
}

Fixed   Fixed::operator+(const Fixed &rhs) const
{
    return (Fixed(toFloat() + rhs.toFloat()));
}

Fixed   Fixed::operator-(const Fixed &rhs) const
{
    return (Fixed(toFloat() - rhs.toFloat()));
}

Fixed   Fixed::operator*(const Fixed &rhs) const
{
    return (Fixed(toFloat() * rhs.toFloat()));
}

Fixed   Fixed::operator/(const Fixed &rhs) const
{
    return (Fixed(toFloat() / rhs.toFloat()));
}

Fixed&  Fixed::operator++(void)
{
    _FixedPoint++;
    return *this;
}

Fixed   Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed&  Fixed::operator--(void)
{
    _FixedPoint--;
    return *this;
}

Fixed   Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return tmp;
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return a;
    else
        return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return a;
    else
        return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return a;
    else
        return b;
}