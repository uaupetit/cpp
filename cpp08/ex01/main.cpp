/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:17:08 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/15 11:30:07 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Span.hpp"

int main(void)
{
	Span myRange(10000);
    std::cout << GREEN "*****valid addnumber, shortest and logest*****" << std::endl;
	try
    {
		for (int i = 0; i < 10000; i++)
		{
			myRange.addNumber(i);
		}
		std::cout << MAGENTA "---- First range (add numbers) ----" << std::endl;
		std::cout << "shortest span is: " << myRange.shortestSpan() << std::endl;
		int longest = myRange.longestSpan();
		std::cout << "longest span is: " << longest << std::endl;
	}
	catch (std::exception& e)
    { 
		std::cout << e.what() << std::endl; 
	}
    
    std::cout << GREEN "*****invalid addnumber*****" << std::endl;
    std::vector<int> vector;
    for (int i = 1; i < 5; i++)
    {
        vector.push_back(i);
    }
	try
    {
		myRange.addNumber(vector);
	}
	catch (std::exception& e)
    { 
		std::cout << e.what() << std::endl; 
	}
	
    std::cout << GREEN "*****valid vectoraddnumber*****" << std::endl;
    Span secondRange(1000);
    try
    {
		for (int i = 0; i < 500; i++)
        {
			secondRange.addNumber(i);
		}
		std::cout << MAGENTA "---- First range (add numbers) ----" << std::endl;
		std::cout << "shortest span is: " << secondRange.shortestSpan() << std::endl;
		int longest = secondRange.longestSpan();
		std::cout << "longest span is: " << longest << std::endl;
        std::cout << "Size of _span: " << secondRange.getSpanSize() << std::endl;
    }
	catch (std::exception& e)
    { 
		std::cout << e.what() << std::endl; 
	}
    try
    {
		secondRange.addNumber(vector);
        std::cout << "Size of _span: " << secondRange.getSpanSize() << std::endl;
    }
	catch (std::exception& e)
    { 
		std::cout << e.what() << std::endl; 
	}
    return 0;
}