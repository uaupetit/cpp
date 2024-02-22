/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:09:34 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/22 19:04:25 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Base.hpp"

int main()
{
   	std::srand(time(0));
    Base	*base1 = generate();
	Base	*base2 = generate();
	Base	*base3 = generate();
	
    identify(base1);
	identify(base2);
	identify(base3);
	std::cout << GREEN "=================" << std::endl;
    identify(*base1);
	identify(*base2);
	identify(*base3);
    std::cout << GREEN "=================" << std::endl;
	std::cout << RED "WRONG" << std::endl;
	Base base;
	identify(base);
	std::cout << RED "WRONG" << std::endl;
	
    delete base1;
    delete base2;
    delete base3;
}