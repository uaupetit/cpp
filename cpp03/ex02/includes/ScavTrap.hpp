/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:41:42 by uaupetit          #+#    #+#             */
/*   Updated: 2023/12/13 14:00:53 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string str);
        ScavTrap(const ScavTrap& other);
        ScavTrap &operator=(const ScavTrap& rhs);
        ~ScavTrap();
        void attack(const std::string& target);
        void guardGate();
    private:
        
};

#endif