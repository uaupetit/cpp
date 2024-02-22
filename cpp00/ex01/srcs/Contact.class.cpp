/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:04:58 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/22 18:05:24 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.class.hpp"
#include "../includes/Phonebook.class.hpp"

Contact::Contact(void)
{
    return;
}

Contact::~Contact(void)
{
    return;
}

std::string Contact::getfirstName() const
{
    return _firstName;
}

void Contact::setfirstName(const std::string &firstName)
{
    _firstName = firstName;
}

void Contact::setlastName(const std::string &lastName)
{
    _lastName = lastName;
}

std::string Contact::getlastName() const
{
    return _lastName;
}

std::string Contact::getnickName() const
{
    return _nickName;
}

void Contact::setnickName(const std::string &nickName)
{
    _nickName = nickName;
}

std::string Contact::getphoneNumber() const
{
    return _phoneNumber;
}

void Contact::setphoneNumber(const std::string &phoneNumber)
{
    _phoneNumber = phoneNumber;
}

std::string Contact::getdarkestSecret() const
{
    return _darkestSecret;
}

void Contact::setdarkestSecret(const std::string &darkestSecret)
{
    _darkestSecret = darkestSecret;
}