/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:12:43 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/26 15:21:54 by uaupetit         ###   ########.fr       */
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
#include <cctype>
#include <stack>

class RPN
{
    public:
        RPN();
        RPN(const RPN& rhs);
        RPN &operator=(const RPN& rhs);
        void Calculator(char **av);
        bool isOperator(char c);
        std::string removeSpaces(const std::string& input);
        class WrongInputException : public std::exception
        {
	        public:
		        virtual const char* what() const throw();
	    };
        ~RPN();
    private:
        std::stack<int> _stack;
};