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

#include "./includes/Whatever.hpp"

int main()
{
    std::cout << GREEN "*******SWAP: int*******" << std::endl;
    int a = 1;
    int b = 2;
    std::cout << YELLOW "a =  '" << a << "'" << std::endl;
    std::cout << YELLOW "b =  '" << b << "'" << std::endl;
    swap(a, b);
    std::cout << MAGENTA "a =  '" << a << "'" << std::endl;
    std::cout << MAGENTA "b =  '" << b << "'" << std::endl;
    
    std::cout << GREEN "*******SWAP: char*******" << std::endl;
    char c = 'a';
    char d = 'b';
    std::cout << YELLOW "c =  '" << c << "'" << std::endl;
    std::cout << YELLOW "d =  '" << d << "'" << std::endl;
    swap(c, d);
    std::cout << MAGENTA "c =  '" << c << "'" << std::endl;
    std::cout << MAGENTA "d =  '" << d << "'" << std::endl;

    std::cout << GREEN "*******MIN: int*******" << std::endl;
    const int e = 1;
    const int f = 2;
    std::cout << YELLOW "e =  '" << e << "'" << std::endl;
    std::cout << YELLOW "f =  '" << f << "'" << std::endl;
    std::cout << MAGENTA "min = " << min(e, f)<< std::endl;

    std::cout << GREEN "*******MIN: char*******" << std::endl;
    const char g = 'g';
    const char h = 'h';
    std::cout << YELLOW "g =  '" << g << "'" << std::endl;
    std::cout << YELLOW "h =  '" << h << "'" << std::endl;
    std::cout << MAGENTA "min = " << min(g,h) << std::endl;

    std::cout << GREEN "*******MAX: int*******" << std::endl;
    const int i = 1;
    const int j = 2;
    std::cout << YELLOW "i =  '" << i << "'" << std::endl;
    std::cout << YELLOW "j =  '" << j << "'" << std::endl;
    std::cout << MAGENTA "max = " << max(i, j)<< std::endl;

    std::cout << GREEN "*******MAX: char*******" << std::endl;
    const char k = 'k';
    const char l = 'l';
    std::cout << YELLOW "k =  '" << k << "'" << std::endl;
    std::cout << YELLOW "l =  '" << l << "'" << std::endl;
    std::cout << MAGENTA "max = " << min(k,l) << std::endl;
}