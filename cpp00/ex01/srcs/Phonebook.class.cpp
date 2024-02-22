/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:08:01 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/22 18:07:49 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.class.hpp"
#include "../includes/Phonebook.class.hpp"


Phonebook::Phonebook(void)
{
    return;
}

Phonebook::~Phonebook(void)
{
    return;
}

bool Phonebook::is_digit(std::string str) {
    for (char c : str) {
        if (!std::isdigit(c)) {
            return false;
        }
    }
    return true;
}

void Phonebook::add_contact(int i)
{
    int j = i;
    int flag = i - 8;
    if (i > 7)
        j = 0 + flag;
    std::string line;
        std::cout << "firstname : ";
    while (std::getline(std::cin, line) && line.empty())
    {
        std::cout << "Empty information" << std::endl;
        std::cout << "firstname : ";
    }
    contact[j].setfirstName(line);
    if (!(std::cin.eof()))
        std::cout << "lastname : ";
    while (std::getline(std::cin, line) && line.empty())
    {
        std::cout << "Empty information" << std::endl;
        std::cout << "lastname : ";
    }
    contact[j].setlastName(line);
    if (!(std::cin.eof()))
        std::cout << "nickname : ";
    while (std::getline(std::cin, line) && line.empty())
    {
        std::cout << "Empty information" << std::endl;
        std::cout << "nickname : ";
    }
    contact[j].setnickName(line);
    if (!(std::cin.eof()))
        std::cout << "phonenumber : ";
    while (std::getline(std::cin, line) && (line.empty() || !is_digit(line)))
    {
        if (line.empty())
            std::cout << "Empty information" << std::endl;
        else
            std::cout << "Invalid phone number. Please enter a valid phone number." << std::endl;
        std::cout << "phonenumber : ";
    }
    contact[j].setphoneNumber(line);
    if (!(std::cin.eof()))
        std::cout << "darkestsecret : ";
    while (std::getline(std::cin, line) && line.empty())
    {
        if (line.empty())
            std::cout << "Empty information" << std::endl;
        std::cout << "darkestsecret : ";
    }
    contact[j].setdarkestSecret(line);
}

std::string Phonebook::truncate_str(std::string str)
{
    if (str.length() > 10)
         str = str.substr(0, 9) + ".";
    return (str);
}

void::Phonebook::search(int i, int j)
{
    if (i > 7)
        j = 8;
    else
        j = i; 
    int count = 0;
    std::cout << " ___________________________________________" << std::endl;
    std::cout << "|Index:    |Firstname:|Lastname: |Nickname: |" << std::endl;
    if (i > 0)
    {
        while (count <= j - 1)
        {
            std::cout << "|"  << count + 1 << std::setw(10) << "|"
            << truncate_str(contact[count].getfirstName()) << std::setw(11 - contact[count].getfirstName().length()) << "|"
            << truncate_str(contact[count].getlastName()) << std::setw(11 - contact[count].getlastName().length()) << "|"
            << truncate_str(contact[count].getnickName()) << std::setw(11 - contact[count].getnickName().length()) << "|"
            << std::endl;
            count++;
        }
    }
    std::cout << "|__________|__________|__________|__________|" << std::endl;
    if (j <= 0)
        return;
    else
        index_prompt(count, i);
}

void::Phonebook::index_prompt(int count, int i)
{
    std::string cmd;
    int index = -1;
    std::cout << "Enter specific index to display contact informations" << std::endl;
    std::getline(std::cin, cmd);
    index = atoi(cmd.c_str()) - 1;
    if (!(std::cin.eof()))
    {
        if (!(index >= 0 && index < 9))
            std::cout << "index should be between 1 & 8" << std::endl;
        else if (index >= count || index < 0)
            std::cout << "no existing index at this range" << std::endl;
        else
            display_contact(index);
    }
}

void::Phonebook::display_contact(int index)
{
        std::cout << "Index: " << index + 1 << std::endl;
        std::cout << "Firstname: " << contact[index].getfirstName() << std::endl;
        std::cout << "Lastname: " << contact[index].getlastName() << std::endl;
        std::cout << "Nickname: " << contact[index].getnickName() << std::endl;
        std::cout << "Phonenumber: " << contact[index].getphoneNumber() << std::endl;
        std::cout << "Darkestsecret: " << contact[index].getdarkestSecret() << std::endl;
}