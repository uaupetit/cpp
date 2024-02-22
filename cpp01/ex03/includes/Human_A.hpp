/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human_A.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:28:15 by uaupetit          #+#    #+#             */
/*   Updated: 2023/11/30 14:30:46 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA
{
private:
    Weapon*     _weapon;
    std::string _name;
public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();

    void    attack(void) const;
};

#endif