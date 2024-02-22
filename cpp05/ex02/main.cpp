/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 09:23:29 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/09 12:19:34 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Bureaucrat.hpp"
#include "./includes/AForm.hpp"
#include "./includes/ShrubberyCreationForm.hpp"
#include "./includes/RobotomyRequestForm.hpp"
#include "./includes/PresidentialPardonForm.hpp"

int main()
{
    std::cout << GREEN << "******Shruberry: KO******" << std::endl;
    Bureaucrat bob("bob", 148);
	ShrubberyCreationForm InvalidShruberry("InvalidShruberry");
	std::cout << std::endl;
    
    try 
	{
		bob.signForm(InvalidShruberry);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		bob.executeForm(InvalidShruberry);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    std::cout << std::endl;
    

    
    std::cout << GREEN << "******Shruberry: OK******" << std::endl;
    Bureaucrat Eddy("Eddy", 2);
	ShrubberyCreationForm ValidShruberry("ValidShruberry");
	std::cout << std::endl;
    
    try 
	{
		Eddy.signForm(ValidShruberry);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Eddy.executeForm(ValidShruberry);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    std::cout << std::endl;
    

    
    std::cout << GREEN << "******Robotomy: KO******" << std::endl;
    Bureaucrat Jane("Jane", 71);
	RobotomyRequestForm InvalidRobotomy("InvalidRobotomy");
	std::cout << std::endl;
    try 
	{
		Jane.signForm(InvalidRobotomy);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Jane.executeForm(InvalidRobotomy);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    std::cout << std::endl;
    

    
    std::cout << GREEN << "******Robotomy: OK******" << std::endl;
    Bureaucrat Tom("Tom", 2);
	RobotomyRequestForm ValidRobotomy("ValidRobotomy");
	std::cout << std::endl;
    try 
	{
		Tom.signForm(ValidRobotomy);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Tom.executeForm(ValidRobotomy);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    std::cout << std::endl;

    
    std::cout << GREEN << "******Presidential: KO******" << std::endl;
    Bureaucrat John("John", 26);
	PresidentialPardonForm InvalidPresidential("InvalidPresidential");
	std::cout << std::endl;
    try 
	{
		John.signForm(InvalidPresidential);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		John.executeForm(InvalidPresidential);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    std::cout << std::endl;
    

    
    std::cout << GREEN << "******Presidential: OK******" << std::endl;
    Bureaucrat Dave("Dave", 2);
	PresidentialPardonForm ValidPresidential("ValidPresidential");
	std::cout << std::endl;
    try 
	{
		Dave.signForm(ValidPresidential);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Dave.executeForm(ValidPresidential);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    std::cout << std::endl;
    return (0);
}