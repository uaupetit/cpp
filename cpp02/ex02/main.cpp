/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:25:33 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/22 18:46:32 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Fixed.hpp"

int main( void )
{
    Fixed a(1);
    Fixed b(3);
    std::cout << "a = 1; b = 3" << std::endl;
    if (a > b)
         std::cout << "a > b" << std::endl;
    else
        std::cout << "b < a" << std::endl;
    std::cout << std::endl;
    Fixed c(4);
    Fixed d(3);
    std::cout << "c = 3; d = 3" << std::endl;
    if (c >= d)
        std::cout << "c >= d" << std::endl;
    else
        std::cout << "c < d" << std::endl;
    std::cout << std::endl;
    Fixed e(5);
    Fixed f(5);
    std::cout << "e = 5; f = 5" << std::endl;
    std::cout << e + f << std::endl;
    std::cout << std::endl;
    Fixed g(5);
    std::cout << "before --g : g = " << g << std::endl;
    --g;
    std::cout << "after --g : g = " << g << std::endl;
    std::cout << std::endl;
    Fixed h(5);
    std::cout << "Before post-decrement: h = " << h.getValue() << std::endl;
    Fixed res = h--;
    std::cout << "After post-decrement: h = " << h.getValue() << std::endl;
    std::cout << "Result of post-decrement: res = " << res.getValue() << std::endl;
    std::cout << std::endl;
    Fixed i(5);
    Fixed j(20);
    std::cout << "i = 5; j = 20" << std::endl;
    std::cout << "max value is " << Fixed::max(i, j) << std::endl;
    std::cout << std::endl;
}