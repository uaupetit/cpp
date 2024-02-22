/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:02:31 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/22 09:51:33 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

Span::Span(unsigned int N): _size(N)
{
    std::cout << YELLOW "Span Constructor called" << std::endl;
}

Span::Span(const Span& rhs)
{
    _size = rhs._size;
    _span = rhs._span;
    std::cout << YELLOW "Span Copy constructor called" << std::endl;
}

Span& Span::operator=(const Span& rhs)
{
    std::cout << YELLOW "Span assignement operator called" << std::endl;
    if (this != &rhs)
    {
        _size = rhs._size;
        _span = rhs._span;
    }
    return *this;
}

void Span::addNumber(int number)
{
    if (_span.size() < _size)
        _span.push_back(number);
    else
        throw SpanSizeException();
}

unsigned int Span::getSpanSize()
{
    return _span.size();
}

void Span::addNumber(std::vector<int> toInsert)
{
    if (_span.size() + toInsert.size() > _size)
        throw SpanSizeException();
    _span.insert(_span.end(), toInsert.begin(), toInsert.end());
}

const char* Span::SpanSizeException::what() const throw()
{
    return (RED "Couldn't add number in Span: max size reached");
}

unsigned int Span::shortestSpan()
{
    if (_span.size() < 2)
        throw ShortSpanSizeException();
    std::vector<int> copy = _span;
    std::sort(copy.begin(), copy.end());
    int ret = std::abs(copy[1] - copy[0]);
    for (unsigned long i = 0; i < copy.size() - 1; i++)
    {
        if (std::abs(copy[i + 1] - copy[i]) < ret)
            ret = std::abs(copy[i + 1] - copy[i]);
    }
    return ret;
}

unsigned int Span::longestSpan()
{
    if (_span.size() < 2)
        throw ShortSpanSizeException();
    std::vector<int> copy = _span;
    int ret = std::abs(_span[_span.size() - 1] - _span[0]);
    return (ret);
}

const char* Span::ShortSpanSizeException::what() const throw()
{
    return (RED "Couldn't calculate shortest difference: Span size is too short");
}

Span::~Span()
{
    std::cout << YELLOW "Span destructor called" << std::endl;
}