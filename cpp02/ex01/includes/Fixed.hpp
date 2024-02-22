/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:50:33 by uaupetit          #+#    #+#             */
/*   Updated: 2023/12/05 14:48:08 by uaupetit         ###   ########.fr       */
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
};

std::ostream&   operator<<(std::ostream &o, Fixed const &rhs);

#endif