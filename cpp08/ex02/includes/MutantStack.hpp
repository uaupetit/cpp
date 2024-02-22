/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:37:49 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/22 14:21:00 by uaupetit         ###   ########.fr       */
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
#include <stack>
#include <deque>
#include <list>

template <typename T>
class MutantStack: public std::stack<T>
{
    public:
        MutantStack();
        MutantStack(const MutantStack& rhs);
        MutantStack& operator=(const MutantStack& rhs);
        ~MutantStack();
        
        typedef typename std::deque<T>::iterator iterator;
		iterator	begin();
		iterator	end();
};

#include "../srcs/MutantStack.tpp"