/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:50:33 by uaupetit          #+#    #+#             */
/*   Updated: 2023/12/06 16:41:41 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#define BLUE "\033[34m"
#define YELLOW "\033[33m"
#define WHITE "\033[0m"
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"

#include <iostream>

class Fixed
{
    private:
    
        int _FixedPoint;
        const static int BitsNumber = 8;
    public:
        
        Fixed();
        Fixed(const Fixed& object);
        ~Fixed();

        Fixed& operator=(const Fixed& other);
        void setRawBits(int const raw);
        int getRawBits(void) const;
};

#endif