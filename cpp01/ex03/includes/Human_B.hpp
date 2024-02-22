/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human_B.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:29:28 by uaupetit          #+#    #+#             */
/*   Updated: 2023/11/30 14:30:35 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{
private:
    Weapon*     _weapon;
    std::string _name;
public:
    HumanB(std::string name);
    ~HumanB();

    void    attack(void) const;
    void    setWeapon(Weapon& weapon);
};

#endif