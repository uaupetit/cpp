/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 09:50:53 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/06 19:08:00 by uaupetit         ###   ########.fr       */
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
#include <map>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <sstream>

class BitcoinExchange
{
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& rhs);
        BitcoinExchange &operator=(const BitcoinExchange& rhs);
        void    checkInputFile(char* str);
        void    checkDate(std::string date);
        void    checkDateValidity(std::string y, std::string m, std::string d, std::string str);
        void    checkValue(float value);
        void    CalculAndPrint(std::string date, float value);
        bool    checkDatebis(std::string str);
        class BadFileException : public std::exception
        {
	        public:
		        virtual const char* what() const throw();
	    };
        class NegativeNumberException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class TooLargeNumberException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class DateException
        {
	        private:
		        std::string _errorMessage;
	        public:
	            DateException(const std::string& message) : _errorMessage(RED "Error: bad input => " + message + GREEN) {}
		        virtual const char* what() const throw();
	    };
        ~BitcoinExchange();
    private:
        std::map<std::string, float> _data;
};   