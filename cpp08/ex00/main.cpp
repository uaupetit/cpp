/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:17:08 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/15 11:30:07 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Easyfind.hpp"

int main()
{
    std::vector<int> myVector;
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);
    myVector.push_back(40);
    myVector.push_back(50);
    std::vector<int>::iterator resok = easyfind(myVector, 40);
    std::cout << MAGENTA "****value = 40****" << std::endl;
    if (resok != myVector.end())
        std::cout << GREEN "Value is found" << std::endl;
    else
        std::cout << RED "Value is not found" << std::endl;
    std::vector<int>::iterator resko = easyfind(myVector, 60);
    std::cout << MAGENTA "****value = 60****" << std::endl;
    if (resko != myVector.end())
        std::cout << GREEN "Value is found" << std::endl;
    else
        std::cout << RED "Value is not found" << std::endl;
}