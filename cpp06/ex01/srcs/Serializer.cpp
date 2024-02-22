/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:22:51 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/15 11:40:15 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

Serializer::Serializer()
{
    std::cout << BLUE "Serializer constructor called" << std::endl;
    return;
}

Serializer::Serializer(const Serializer& rhs)
{
    std::cout << BLUE "Serializer copy constructor called" << std::endl;
    *this = rhs;
    return;   
}

Serializer &Serializer::operator=( const Serializer &rhs)
{
	(void)rhs;
	std::cout << "Serializer Copy assignment operator called" << std::endl;
	return *this;
}

uintptr_t Serializer::serializer(Data* ptr)
{
	return  reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserializer(uintptr_t raw)
{
	return  reinterpret_cast<Data*>(raw);
}

Serializer::~Serializer()
{
    std::cout << BLUE "Serializer destructor called" << std::endl;
    return ;
}