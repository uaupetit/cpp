/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:17:08 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/15 11:30:07 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

#include <iostream>
#include <cctype>
#include <cstdlib>
#include <string>

class ScalarConverter
{
    public:
        static void convert(const std::string& litreral);
        static bool isChar(std::string str);
        static bool isInt(std::string str);
        static bool isFloat(std::string str);
        static bool isDouble(std::string str);
        static void convertChar(const std::string& str);
        static void convertInt(const std::string& str);
        static void convertFloat(const std::string& str);
        static void convertDouble(const std::string& str);
        static void printChar(char c);
        static void printInt(int i);
        static void printFloat(float f);
        static void printDouble(double d);
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& rhs);
        ScalarConverter& operator=(const ScalarConverter& rhs);
        
        ~ScalarConverter();
        
};

#endif