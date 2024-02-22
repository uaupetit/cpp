/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:52:20 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/19 16:20:39 by uaupetit         ###   ########.fr       */
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
#include <vector>
#include <algorithm>
#include <limits>

class Span
{
    public:
        Span(unsigned int N);
        Span(const Span& rhs);
        Span& operator=(const Span& rhs);
        void addNumber(int number);
        void addNumber(std::vector<int> toInsert);
        unsigned int getSpanSize();
        class SpanSizeException: public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        unsigned int shortestSpan();
        unsigned int longestSpan();
        class ShortSpanSizeException: public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        ~Span();
    private:
        unsigned int _size;
        std::vector<int> _span;
};