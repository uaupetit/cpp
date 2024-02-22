/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:50:33 by uaupetit          #+#    #+#             */
/*   Updated: 2023/12/12 12:29:50 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
    
        int _FixedPoint;
        const static int _BitNumber = 8;
    
    public:
    
        Fixed();
        Fixed(const int nb);
        Fixed(const float nb);
        Fixed(const Fixed& object);
        ~Fixed();

        Fixed& operator=(const Fixed& rhs);
        float toFloat(void) const;
        int toInt(void) const;
        
        void setRawBits(int const raw);
        int getRawBits(void) const;

        bool    operator>(const Fixed &rhs) const;
        bool    operator<(const Fixed &rhs) const;
        bool    operator>=(const Fixed &rhs) const;
        bool    operator<=(const Fixed&rhs) const;
        bool    operator==(const Fixed &rhs) const;
        bool    operator!=(const Fixed &rhs) const;

        Fixed   operator+(const Fixed &rhs) const;
        Fixed   operator-(const Fixed &rhs) const;
        Fixed   operator*(const Fixed &rhs) const;
        Fixed   operator/(const Fixed &rhs) const;

        Fixed&  operator++(void);
        Fixed   operator++(int);
        Fixed&  operator--(void);
        Fixed   operator--(int);
        
        int    getValue(void) const;

        static Fixed&   min(Fixed &a, Fixed &b);
        static Fixed&   max(Fixed &a, Fixed &b);
        static Fixed const&   min(Fixed const &a, Fixed const &b);
        static Fixed const&   max(Fixed const &a, Fixed const &b);
};

std::ostream&   operator<<(std::ostream &o, Fixed const &rhs);

#endif