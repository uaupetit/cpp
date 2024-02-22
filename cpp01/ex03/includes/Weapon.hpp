/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:19:30 by uaupetit          #+#    #+#             */
/*   Updated: 2023/11/28 12:19:43 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include<iostream>
#include<string.h>

class Weapon
{
private:
    std::string type;
public:
    Weapon(std::string s);
    ~Weapon();

    const std::string&  getType();
    void                setType(std::string s);
};

#endif