/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:17:08 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/15 11:48:17 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

#include <iostream>
#include <stdint.h>
#include <string>

struct Data
{
	std::string _str;
	uintptr_t _value;

};

class Serializer
{
    public:
        static uintptr_t serializer(Data *ptr);
        static Data* deserializer(uintptr_t raw);
    private:
        Serializer();
        Serializer(const Serializer& rhs);
        Serializer& operator=(const Serializer& rhs);
        
        ~Serializer();
        
};

#endif