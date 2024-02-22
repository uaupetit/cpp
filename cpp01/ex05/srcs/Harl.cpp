/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:21:34 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/22 18:36:47 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Harl.hpp"

void Harl::debug()
{
    std::cout << "debug msg" << std::endl;
}

void Harl::info()
{
    std::cout << "info msg" << std::endl;
}

void Harl::warning()
{
    std::cout << "warning msg" << std::endl;
}

void Harl::error()
{
    std::cout << "error msg" << std::endl;
}

Harl::Harl(void)
{
    std::cout << "constructor called" << std::endl;
    return; 
}

Harl::~Harl(void)
{
    std::cout << "destructor called" << std::endl;
    return; 
}

void Harl::complain( std::string level )
{
        std::string complainType[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
        void(Harl::*harlFunctionPtr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
        
        for (int i = 0; i < 4; i++) {
            if (level == complainType[i]) {
                (this->*harlFunctionPtr[i])();
                return;
            }
        }
        std::cout << "not a valid compain" << std::endl;
        return ;
}
