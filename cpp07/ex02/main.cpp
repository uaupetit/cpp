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

#include "./includes/Array.hpp"

int main()
{
    int* a = new int();
    std::cout << *a << std::endl;
    delete a;
    std::cout << BLUE "*****EMPTY ARRAY*****" << std::endl;
    try
    {
        Array<int> EmptyArray;
        std::cout << EmptyArray[0] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << BLUE "*****INT*****" << std::endl;
    try
    {
        Array<int> MyArray(10);
            for (unsigned int i = 0; i < 10; ++i)
        MyArray[i] = i + 1;
            for (unsigned int i = 0; i < 10; ++i)
        std::cout << MAGENTA << MyArray[i] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << e.what() << '\n';
    }
    std::cout << BLUE "*****STRING*****" << std::endl;
    try
    {
        Array<std::string> MyStringArray(3);
        MyStringArray[0] = "bonjour";
        MyStringArray[1] = "hello";
        MyStringArray[2] = "hola";
        for (unsigned int i = 0; i < 3; ++i)
            std::cout << MAGENTA << MyStringArray[i] << std::endl;
        std::cout << RED "*****INDEX TO HIGH*****" << std::endl;
        std::cout << RED << MyStringArray[30] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << RED << "***********************" << std::endl;
    std::cout << std::endl;
}