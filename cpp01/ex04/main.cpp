/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:42:13 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/22 18:35:00 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Replace_file.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "program does not take 3 arguments" << std::endl;
        return (1);
    }
    ReplaceFile fd(av[1], av[2], av[3]);
    return (0);
}