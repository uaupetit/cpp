/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:09:34 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/15 13:39:23 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Serializer.hpp"

int main()
{
    Data* ptr;
	uintptr_t raw;
	Data* ptrData;
	ptr = new Data;
	std::cout << "Data: " << ptr << std::endl;
	raw = Serializer::serializer(ptr);
	std::cout << "Raw data: " << raw << std::endl;
	ptrData = Serializer::deserializer(raw);
	std::cout << "Deserialized data: " << ptrData << std::endl;
	delete ptr;
	return 0;
}