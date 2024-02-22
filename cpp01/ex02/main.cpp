/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:33:28 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/22 18:25:13 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *strPTR = &str;
    std::string &strREF = str;

    std::cout << "adresse de str = " << &str << std::endl
    << "adresse du pointeur sur str = " << strPTR << std::endl
    << "adresse de la reference sur str = " << &strREF << std::endl
    << "valeur de str = " << str << std::endl
    << "valeur de strPTR = " << *strPTR << std::endl
    << "valeur de strREF = " << strREF << std::endl;
}