/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:33:40 by uaupetit          #+#    #+#             */
/*   Updated: 2023/11/29 15:34:36 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    public:
        Zombie(void);
        ~Zombie(void);
        
        void setzombieName(const std::string &name);
        std::string getzombieName(void) const;

        void announce(void);
        
    private:
        std::string name;
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif