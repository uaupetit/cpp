/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:28:06 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/02 16:37:13 by uaupetit         ###   ########.fr       */
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
#define RESET   "\033[0m"

#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <climits>
#include <algorithm>
#include <sys/time.h>

class PmergeMe
{
    public:
        PmergeMe(char **av);
        PmergeMe(const PmergeMe& rhs);
        PmergeMe &operator=(const PmergeMe& rhs);
        void process();
        template<typename T>
        void sort(T& to_sort);
        unsigned int _jacobsthal(unsigned int n);
        template<typename T>
        void _binarySearchInsert(T& container, int value);
        long long int _getTime();
        bool isInt(const std::string& str);
        class wrongNumberException : public std::exception
        {
	        public:
		        virtual const char* what() const throw();
	    };
        class notIntegerException : public std::exception
        {
	        public:
		        virtual const char* what() const throw();
	    };
        ~PmergeMe();
        
    private:
        std::deque<int> _deque;
	    std::vector<int> _vector;
};