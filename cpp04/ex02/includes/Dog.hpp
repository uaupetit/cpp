/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:10:50 by uaupetit          #+#    #+#             */
/*   Updated: 2023/12/15 16:44:02 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    private:
        Brain* _DogBrain;
    public:
        Dog();
        Dog(const Dog& other);
        Dog &operator=(const Dog& rhs);

        virtual void makeSound() const;
        // Brain getBrain();
        virtual ~Dog();
};

#endif