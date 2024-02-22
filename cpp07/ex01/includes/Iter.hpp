/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:02:35 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/16 17:13:56 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

template <typename t>
void    iter(t *array, int length, void f(t&))
{
    if (!array || !length || !f)
    {
        std::cout << RED "missing argument" << std::endl;
        return;
    }
    for(int i = 0; i < length; i++)
    {
        f(array[i]);
    }
    return;
}

template <typename t>
void    print_value(t& value)
{
    std::cout << BLUE << value << std::endl;
    return;
}