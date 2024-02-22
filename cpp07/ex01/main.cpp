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

#include "./includes/Iter.hpp"

int main()
{
    int int_tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    iter(int_tab, 10, print_value<int>);
    std::cout << std::endl;
    char char_tab[5] = {'a', 'b', 'c', 'd', 'e'};
    iter(char_tab, 5, print_value<char>);
    std::cout << std::endl;
    std::string str[3] = {"riri", "fifi", "loulou"};
    iter(str, 3, print_value<std::string>);
    std::cout << std::endl;
}