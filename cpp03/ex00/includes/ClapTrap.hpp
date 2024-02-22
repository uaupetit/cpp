/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:00:11 by uaupetit          #+#    #+#             */
/*   Updated: 2023/12/12 16:57:06 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#define BLUE "\033[34m"
#define YELLOW "\033[33m"
#define WHITE "\033[0m"
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"

#include <iostream>

class ClapTrap
{
    private:

        std::string _Name;
        int _HitPoints;
        int _EnergyPoint;
        int _AttackDamage;
    
    public:

        ClapTrap();
        ClapTrap(std::string str);
        ClapTrap(const ClapTrap& other);
        ClapTrap &operator=(const ClapTrap& rhs);
        ~ClapTrap();

        std::string GetName(void) const;

        void attack(const std::string& target);
        void TakeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif
