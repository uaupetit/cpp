/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:09:06 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/17 14:58:32 by uaupetit         ###   ########.fr       */
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

template <typename T>
class Array
{
    public:
        Array();
        Array(unsigned int i);
        Array(const Array& rhs);
        Array &operator=(const Array& rhs);
        const T &operator[](unsigned int index) const;
        T &operator[](unsigned int index);
        unsigned int size();
        class OutOfRangeException: public std::exception
        {
            public:
                virtual const char* what() const throw();       
        };
        ~Array();
    private:
        T* _array;
        unsigned int _size;
};

#include "../srcs/Array.tpp"