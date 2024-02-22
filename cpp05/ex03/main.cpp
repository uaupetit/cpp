/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 09:23:29 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/09 14:50:39 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Bureaucrat.hpp"
#include "./includes/AForm.hpp"
#include "./includes/ShrubberyCreationForm.hpp"
#include "./includes/RobotomyRequestForm.hpp"
#include "./includes/PresidentialPardonForm.hpp"
#include "./includes/Intern.hpp"

int main()
{
		Bureaucrat	jim("Jim", 2);
		Intern		julien;
		AForm		*form = NULL;
		std::string	nameForm[4] = {
			"ShruberryCreationForm",
			"RobotomyRequestForm",
			"PresidentialPardonForm",
			"404"
		};

		std::cout << "===========================" << std::endl;
		for (int i = 0; i < 4; i++)
		{
			try
			{
				form = julien.makeForm(nameForm[i], "Random Target");
				jim.signForm(*form);
				jim.executeForm(*form);
				delete form;
				std::cout << "===========================" << std::endl;
			}
			catch (std::exception &e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
    	return (0);
}