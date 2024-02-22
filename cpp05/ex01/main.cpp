/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 09:23:29 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/09 14:45:46 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Bureaucrat.hpp"
#include "./includes/Form.hpp"

int main()
{
    std::cout << GREEN << "******Valid Form******" << std::endl << std::endl;
    Bureaucrat Daniel("Daniel", 100);
    try
    {
        Form Valid("Valid", 100, 10);
        std::cout << YELLOW << Valid;
        std::cout << WHITE << "Valid.getsigned = " << Valid.getSigned() << std::endl;
        Daniel.signForm(Valid);
        std::cout << WHITE << "Valid.getsigned = " << Valid.getSigned() << std::endl;
        Daniel.signForm(Valid);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    
    std::cout << GREEN << "******Invalid Form grade******" << std::endl << std::endl;
    try
    {
        Form Invalid("Invalid", -10, 10);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    
    std::cout << GREEN << "******Invalid Bureaucrat grade******" << std::endl << std::endl;
    Bureaucrat Joe("Joe", 11);
    Form Invalid("Invalid", 10, 10);
    std::cout << std::endl;
    try
    {
        std::cout << YELLOW << Invalid;
        std::cout << WHITE << "Valid.getsigned = " << Invalid.getSigned() << std::endl;
        Joe.signForm(Invalid);
        std::cout << WHITE << "Valid.getsigned = " << Invalid.getSigned() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;    
    return (0);
}