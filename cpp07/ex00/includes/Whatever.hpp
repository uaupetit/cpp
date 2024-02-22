/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:02:24 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/16 16:02:29 by uaupetit         ###   ########.fr       */
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

template <typename t>
void    swap(t& a, t&b)
{
    t   tmp = a;
    a = b;
    b = tmp;
    return;
}

template <typename T>
const T& min(const T& a, const T& b)
{
    return (b < a) ? b : a;
}

template <typename T>
const T& max(const T& a, const T& b)
{
    return (a < b) ? b : a;
}