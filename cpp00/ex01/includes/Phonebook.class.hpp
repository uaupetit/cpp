/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:09:20 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/22 18:10:52 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
#include "../includes/Contact.class.hpp"
#include <string>
#include <cctype>
#include <locale>
#include <iostream>
#include <iomanip>  
#include <cstring>

class Phonebook
{
    public:
        Phonebook(void);
        ~Phonebook(void);
        void add_contact(int i);
        void search(int i, int j);
        std::string truncate_str(std::string str);
        void index_prompt(int count, int i);
        void display_contact(int index);
        bool is_digit(std::string str);
    private:
        Contact contact[8];
};

#endif