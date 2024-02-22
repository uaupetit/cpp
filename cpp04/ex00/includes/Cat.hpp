/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:07:56 by uaupetit          #+#    #+#             */
/*   Updated: 2023/12/15 12:26:58 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat& other);
        Cat &operator=(const Cat& rhs);
        
        virtual void makeSound() const;
        
        virtual ~Cat();
};

#endif