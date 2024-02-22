/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:26:20 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/04 10:24:56 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        _ideas[i] = "idea";
    return;
}

Brain::Brain(const Brain& other)
{
    std::cout << BLUE << "Copy constructor called" << std::endl;
    *this = other;
    return;
}

Brain& Brain::operator=(const Brain& rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < 100; i++)
            _ideas[i] = rhs._ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
    return;
}