/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:58:50 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/22 18:57:08 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Animal.hpp"
#include "./includes/Dog.hpp"
#include "./includes/Cat.hpp"
#include "./includes/WrongAnimal.hpp"
#include "./includes/WrongCat.hpp"
#include "./includes/Brain.hpp"

int main()
{
    //Animal = new Animal();
    Animal* animals[6];
    std::cout << std::endl;
    for (int i = 0; i < 6; ++i)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    std::cout << std::endl;
    for (int i = 0; i < 6; ++i)
        animals[i]->makeSound();
    std::cout << std::endl;
    for (int i = 0; i < 6; ++i)
        delete animals[i];
    return 0;
    std::cout << std::endl;
}