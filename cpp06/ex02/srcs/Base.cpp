/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:22:51 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/15 11:40:15 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"

Base::~Base()
{
    std::cout << WHITE "Base destructor called" << std::endl;
    return;
}

Base* generate(void)
{
    int choice = rand() % 3;
    switch(choice)
    {
        case 0:
            std::cout << "Class A is instancied." << std::endl;
            return new A;
        case 1:
            std::cout << "Class B is instancied." << std::endl;
            return new B;
        case 2:
            std::cout << "Class C is instancied." << std::endl;
            return new C;
    }
    return NULL;
}

void identify(Base* p) 
{
	if (dynamic_cast<A*>(p))
		std::cout << WHITE "Actual type of p is A." << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << WHITE "Actual type of p is B." << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << WHITE "Actual type of p is C." << std::endl;
	else
		std::cout << WHITE "Type of the object is unknown." << std::endl;		
}

void identify(Base& p)
{
	Base tmp;
	try
	{
		tmp = dynamic_cast<A&>(p);
		std::cout << WHITE "Actual type of p is A." << std::endl;
		return;
	}
	catch (std::exception& e)
	{
		(void)e;
	}
	try
	{
		tmp = dynamic_cast<B&>(p);
		std::cout << WHITE "Actual type of p is B." << std::endl;
		return;
	}
	catch (std::exception& e)
	{
		(void)e;
	}
	try
	{
		tmp = dynamic_cast<C&>(p);
		std::cout << WHITE "Actual type of p is C." << std::endl;
		return;
	}
	catch (std::exception& e)
	{
		(void)e;
	}
}