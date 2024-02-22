/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 09:23:29 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/09 16:06:27 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Bureaucrat.hpp"

int main()
{
    std::cout << GREEN << "******normal bureaucrat grade******" << std::endl << std::endl;
    try
    {
        Bureaucrat Jerry("Jerry", 10);
        Bureaucrat Jane("Jane", 140);
        std::cout << std::endl;
    
        Jerry.decrementGrade();
        Jane.incrementGrade();
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    
    std::cout << GREEN << "******wrong bureaucrat grade construction******" << std::endl << std::endl;
    try
    {
        std::cout << BLUE << "try to construct John with grade -10" << std::endl;
        Bureaucrat John("John", -10);
        std::cout << BLUE << "try to construct Teddy with grade 251" << std::endl;
        Bureaucrat Teddy("Teddy", 251);
    }
    catch(const std::exception& e)
	{
			std::cout << e.what() << std::endl;
	}
    std::cout << std::endl;    
    std::cout << GREEN << "******wrong bureaucrat incrementation and decrementation******" << std::endl << std::endl;
    try
    {
        Bureaucrat Vince("Vince", 10);
        for(int i = 0; i <= 15; i++)
            Vince.incrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat Helen("Helen", 140);
        std::cout << Helen;
        for(int i = 0; i <= 15; i++)
            Helen.decrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    
    return (0);
}