/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 09:50:29 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/22 19:06:09 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    std::ifstream file("data.csv");
    if (!file.is_open())
    {
        throw BadFileException();
    }
    std::string line;
    while(getline(file, line))
    {
        size_t   pos = line.find(',');
        if (pos != std::string::npos)
        {
            std::string date = line.substr(0, pos);
            float value = strtof((line.substr(pos + 1)).c_str(), NULL);
            _data.insert(std::make_pair(date, value));
        }
    }
    std::cout << GREEN "BitcoinExchange constructor called" << std::endl;
    return;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& rhs)
{
    std::cout << GREEN "BitcoinExchange constructor called" << std::endl;
    _data = rhs._data;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& rhs)
{
    std::cout << GREEN "BitcoinExchange copy assignement called" << std::endl;
    if (this != &rhs)
    {
        _data = rhs._data;
    }
    return *this;
}

int check_str(const std::string& str)
{
    bool hasDot = false;
    bool hasF = false;
    
    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it)
    {
        if (!isdigit(*it))
        {
            if (*it == '.')
            {
                if (hasDot || it == str.begin() || it + 1 == str.end() || hasF)
                    return 1;
                hasDot = true;
            }
            else if (*it == 'f' && std::isdigit(*(it - 1)))
            {
                if (it + 1 != str.end())
                    return 1;
                hasF = true;
            }
            else
            {
                return 1;
            }
        }
    }
    return 0;
}

void    BitcoinExchange::checkInputFile(char* str)
{
    std::ifstream input(str);
    if (!input.is_open())
    {
        throw BadFileException();
    }
    bool firstLine = true;
    std::string line;
    while(getline(input, line))
    {
        int i = 0;
        try
        {
            if (firstLine)
            {
                if (!isdigit(line[0]))
                {
                    firstLine = false;
                    continue;
                }
                firstLine = false;
            }
            if (line.empty())
            {
                line = "    ";
            }
            int j = 0;
            size_t  pos = line.find('|');
            std::string input_date = line.substr(0, pos - 1);
            if (!(line[pos + 1] == ' ' && line[pos - 1] == ' '))
            {
                j = 1;
            }
            if (input_date.size() == 9)
            {
                input_date = line.substr(0, pos);
            }
            if (line[pos + 1] == '\0')
            {
                throw NegativeNumberException();
            }
            if (line[pos + 1] == ' ' && (line[pos + 2] == '\n' || line[pos + 2] == '\0'))
            {
                throw NegativeNumberException();
            }
            if (line.size() < 13)
            {
                i++;
            }
            try
            {
                checkDate(input_date);
            }            
            catch (const DateException& dateException)
            {
                i = 6;
                std::cerr << dateException.what() << std::endl;
            }
            if (pos != std::string::npos && i != 6)
            {
                float input_value = -1;
                if (check_str(line.substr(pos + 2).c_str()) == 1)
                {
                    if (j == 1)
                    {
                        throw DateException(input_date);
                    }
                    throw NegativeNumberException();
                }
                if (i != 1)
                {
                    if (isdigit(pos + 1))
                    {
                        input_value = atof(line.substr(pos + 2).c_str());
                    }
                    else
                    {
                        input_value = atof(line.substr(pos + 1).c_str());
                    }
                }
                if (input_date.size() == 10)
                {
                    try
                    {
                        if (i == 1)
                        {
                            checkDate(input_date);
                        }
                        if (j == 1)
                            throw DateException(input_date);
                        if (i == 1)
                        {
                            throw NegativeNumberException();
                        }
                        if (input_value != -1)
                        {
                            checkValue(input_value);
                            CalculAndPrint(input_date, input_value);
                        }
                        else
                        {
                           throw NegativeNumberException();
                        }
                    }
                    catch(const DateException& dateException)
                    {
                        std::cerr << dateException.what() << std::endl;
                    }
                    catch(const std::exception& e)
                    {
                            std::cerr << e.what() << std::endl;
                    }
                }
            }
            else if (i != 6)
            {
                throw NegativeNumberException();
            }
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
}

void BitcoinExchange::CalculAndPrint(std::string date, float value)
{
    std::map<std::string, float>::const_iterator it = _data.lower_bound(date);
    if (it != _data.end() && it->first == date)
    {
        float result = value * it->second;
        std::cout << GREEN << date << " => " << value << " = " << result << std::endl;
    }
    else
    {
        if (it != _data.begin())
        {
            --it;
            float result = value * it->second;
            std::cout << date << " => " << value << " = " << result << std::endl;
        }
    }
}


void    BitcoinExchange::checkDateValidity(std::string y, std::string m, std::string d, std::string str)
{
    int year = atoi(y.c_str());
    int month = atoi(m.c_str());
    int day = atoi(d.c_str());

    if (year > 2022 || year < 2009)
    {
        throw DateException(str);
    }
    if (month < 1 || month > 12 || day < 1 || day > 31)
    {
        throw DateException(str);
    }
    if ((day > 30 && (month == 4 || month == 6 || month == 9 || month == 11)) || (day > 29 && month == 2))
    {
        throw DateException(str);
    }
    if (month == 2 && day == 29 && (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0)))
    {
        throw DateException(str);
    }
}

void    BitcoinExchange::checkDate(std::string str)
{
    int i = 0;
    if (str.size() == 10)
    {
        for (std::string::const_iterator it = str.begin(); it != str.end(); ++it)
        {
            char c = *it;
            if (isdigit(c) || c == '-')
            {
                if (c == '-')
                    i++;
            }
            else
                throw DateException(str);
        }
        if (!(i == 2 && str[4] == '-' && str[7] == '-'))
        {
            throw DateException(str);
        }
        checkDateValidity(str.substr(0, 4), str.substr(5, 2), str.substr(8, 2), str);        
    }
    else
    {      
        throw DateException(str);
    }
}


void    BitcoinExchange::checkValue(float value)
{
    if (value < 0)
        throw NegativeNumberException();
    else if (value > 1000)
        throw TooLargeNumberException();
}

const char *BitcoinExchange::BadFileException::what() const throw() {
	return (RED "Error: could not open file." RESET);
}

const char *BitcoinExchange::NegativeNumberException::what() const throw()
{
    return (RED "Error: not a positive number." RESET);
}

const char *BitcoinExchange::TooLargeNumberException::what() const throw()
{
    return (RED "Error: too large a number." RESET);
}

const char *BitcoinExchange::DateException::what() const throw()
{
	return (_errorMessage.c_str());
}

BitcoinExchange::~BitcoinExchange()
{
    std::cout << GREEN "BitcoinExchange destructor called" << std::endl;
}
