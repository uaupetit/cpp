/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:22:51 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/15 11:40:15 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << BLUE "ScalarConverter constructor called" << std::endl;
    return;
}

ScalarConverter::ScalarConverter(const ScalarConverter& rhs)
{
    std::cout << BLUE "ScalarConverter copy constructor called" << std::endl;
    *this = rhs;
    return;   
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& rhs)
{
    std::cout << BLUE "ScalarConverter copy assignement called" << std::endl;
    if (this != &rhs)
    {
        (void)rhs;
    }
    return (*this);
}

void    ScalarConverter::convert(const std::string& literal)
{
    int type = -1;
    bool (*findType[4])(std::string str) = {isChar, isInt, isFloat, isDouble};
    for (int i = 0; i < 4; i++)
    {
        if(findType[i](literal) == true)
        {
            type = i;
            break;
        }
    }
    switch(type)
    {
        case 0:
            convertChar(literal);
            break;
        case 1:
            convertInt(literal);
            break;
        case 2:
            convertFloat(literal);
            break;
        case 3:
            convertDouble(literal);
            break;
        default:
            std::cout << RED "Unreconized Type" << std::endl;
    }
}

void    ScalarConverter::convertChar(const std::string& str)
{
    printChar(str[0]);
    printInt(static_cast<int>(str[0]));
    printFloat(static_cast<float>(str[0]));
    printDouble(static_cast<double>(str[0]));
}

void    ScalarConverter::convertInt(const std::string& str)
{
    int i = atoi(str.c_str());
    if (i < 256 && isprint(i))
		printChar(static_cast<char>(i));
    else
        std::cout << RED "char: Non displayable" << std::endl;
    printInt((i));
    printFloat(static_cast<float>(i));
    printDouble(static_cast<double>(i));
}

void    ScalarConverter::convertFloat(const std::string& str)
{
    float f = std::strtof(str.c_str(), NULL);
    if (str == "-inff" || str == "+inff" || str == "nanf")
    {
        std::cout << RED "char: impossible" << std::endl;
        std::cout << RED "int: impossible" << std::endl;
		std::cout << MAGENTA "float : " << str << std::endl;
		std::string modified =  str;
        modified.erase(modified.length() - 1,1);
		std::cout << MAGENTA "double : " << modified << std::endl;
    }
    else
    {
        printChar(static_cast<char>(f));
        printInt(static_cast<int>(f));
        printFloat(f);
        printDouble(static_cast<double>(f));
    }
}

void    ScalarConverter::convertDouble(const std::string& str)
{
    double d = std::strtod(str.c_str(), NULL);
    if (str == "-inff" || str == "+inff" || str == "nan")
    {
        std::cout << RED "char: impossible" << std::endl;
        std::cout << RED "int: impossible" << std::endl;
		std::cout << MAGENTA "float : "<< str + 'f' << std::endl;
		std::cout << MAGENTA "double : " << str << std::endl;
    }
    else
    {
        printChar(static_cast<char>(d));
        printInt(static_cast<int>(d));
        printFloat(static_cast<float>(d));
        printDouble(d);
    }
}

bool    ScalarConverter::isChar(std::string str)
{
    if (str.length() == 1 && !std::isdigit(str[0]))
        return (true);
    return (false);
}

bool    ScalarConverter::isInt(std::string str)
{
    size_t i = 0;
    if (str[0] == '+' || str[0] == '-') 
        i++;
    while(std::isdigit(str[i]))
        i++;
    if (str.length() == i)
        return (true);
    return (false);
}

bool    ScalarConverter::isFloat(std::string str)
{
    size_t i = 0;
    if (str == "-inff" || str == "+inff" || str == "nanf")
		return true;
    if (str[0] == '+' || str[0] == '-') 
        i++;
    while(std::isdigit(str[i]))
        i++;
    if(str[i] != '.')
        return (false);
    else
    {
        i++;
        while(std::isdigit(str[i]))
            i++;
    }
    if (str[i] == 'f' && i == str.length() - 1)
        return (true);
    return (false);
}

bool    ScalarConverter::isDouble(std::string str)
{
    size_t i = 0;
    if (str == "-inff" || str == "+inff" || str == "nan")
		return true;
    if (str[0] == '+' || str[0] == '-') 
        i++;
    while(std::isdigit(str[i]))
        i++;
    if(str[i] != '.')
        return (false);
    else
    {
        i++;
        while(std::isdigit(str[i]))
            i++;
    }
    if (i == str.length())
        return (true);
    return (false);
}

void    ScalarConverter::printChar(char c)
{
    std::cout << MAGENTA "char: '" << c << "'" << std::endl;
    return;
}

void    ScalarConverter::printInt(int i)
{
    std::cout << MAGENTA "int: " << i << std::endl;
    return;
}

void    ScalarConverter::printFloat(float f)
{
    std::cout << MAGENTA "float: " << f << ".0f" << std::endl;
    return;
}

void    ScalarConverter::printDouble(double d)
{
    std::cout << MAGENTA "double: " << d << ".0" << std::endl;
    return;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << BLUE "ScalarConverter destructor called" << std::endl;
    return ;
}