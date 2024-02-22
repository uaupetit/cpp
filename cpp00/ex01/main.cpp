/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:04:32 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/22 18:10:06 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Contact.class.hpp"
#include "./includes/Phonebook.class.hpp"

int main()
{
    Phonebook instance;
    std::string cmd;
    std::cout << "phonebook : enter ADD, SEARCH or EXIT" << std::endl;
    int i = 0;
    int j = 0;
    while (std::getline(std::cin, cmd))
    {
        if (cmd == "EXIT")
            break;
        else if (cmd == "ADD")
        {
            instance.add_contact(i);
            i++;
        }
        else if (cmd == "SEARCH")
            instance.search(i, j);
        else
            std::cout << "Invalid command" << std::endl;
        if (!(std::cin.eof()))
            std::cout << "Phonebook : enter ADD, SEARCH or EXIT" << std::endl;
    }
    return 0;
}