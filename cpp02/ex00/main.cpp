/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:25:33 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/22 18:43:36 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Fixed.hpp"

int main()
{
    std::cout << GREEN << "Fixed a: " << std::endl; 
    Fixed a;
    std::cout << std::endl << GREEN << "Fixed b(a): " << std::endl; 
    Fixed b(a);
    std::cout << std::endl << GREEN << "Fixed c: c = b: " << std::endl; 
    Fixed c;
    c = b;
    std::cout << std::endl << GREEN <<  "Fonction: " << std::endl; 
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    c.setRawBits(1);
    std::cout << c.getRawBits() << std::endl;
    std::cout << std::endl;
    return 0;
}