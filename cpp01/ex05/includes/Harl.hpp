/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:07:48 by uaupetit          #+#    #+#             */
/*   Updated: 2023/11/30 15:45:40 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

// class Harl
// {
//     public:
    
//         Harl(void);
//         ~Harl(void);
        
//         void    debug();
//         void    info();
//         void    warning();
//         void    error();

//         void    complain(std::string level);

//     private:
        
//         void (Harl::*debugFunction)();
//         void (Harl::*infoFunction)();
//         void (Harl::*warningFunction)();
//         void (Harl::*errorFunction)();

//         void _debug(void);
//         void _info(void);
//         void _warning(void);
//         void _error(void);
// };

class Harl
{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        Harl();
        ~Harl();
        void complain(std::string level);
};

#endif