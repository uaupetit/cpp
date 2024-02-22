/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:27:26 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/22 18:36:36 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Harl.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "bad arguments number" << std::endl;
        return (0);
    }
    Harl instance;
    instance.complain(av[1]);
}

