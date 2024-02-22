/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:58:50 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/03 13:52:13 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.hpp"
#include "includes/Dog.hpp"
#include "includes/Cat.hpp"
#include "includes/WrongAnimal.hpp"
#include "includes/WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    std::cout << std::endl;
    std::cout << WHITE << "type = " << dog->getType() << std::endl;
    std::cout << WHITE << "type = " << cat->getType() << std::endl;
    std::cout << std::endl;
    cat->makeSound();
    dog->makeSound();
    meta->makeSound();
    std::cout << std::endl;
    delete(meta);
    delete(dog);
    delete(cat);
    std::cout << std::endl;
    const WrongAnimal* wrong_animal = new WrongAnimal();
    const WrongAnimal* wrong_cat = new WrongCat();
    std::cout << std::endl;
    std::cout << WHITE << "type = "<< wrong_cat->getType() << " " << std::endl;
    std::cout << std::endl;
    wrong_animal->makeSound();
    wrong_cat->makeSound();
    std::cout << std::endl;
    delete(wrong_animal);
    delete(wrong_cat);
    return 0;
}