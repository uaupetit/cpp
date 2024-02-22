/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:07:56 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/04 10:22:58 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{
    private:
        Brain* _CatBrain;
    public:
        Cat();
        Cat(const Cat& other);
        Cat &operator=(const Cat& rhs);
        
        Brain* getBrain();

        virtual void makeSound() const;
        
        virtual ~Cat();
};

#endif