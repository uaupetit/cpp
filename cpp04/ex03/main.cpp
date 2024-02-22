/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 13:47:09 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/22 18:57:54 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Character.hpp"
#include "./includes/ICharacter.hpp"
#include "./includes/AMateria.hpp"
#include "./includes/IMateriaSource.hpp"
#include "./includes/MateriaSource.hpp"
#include "./includes/Ice.hpp"
#include "./includes/Cure.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    std::cout << std::endl;
    
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    std::cout << std::endl;
    
    ICharacter* me = new Character("me");
    
    AMateria* tmp;
    std::cout << std::endl;
    tmp = src->createMateria("ice");
    
    me->equip(tmp);
    
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    std::cout << std::endl;
    
    ICharacter* bob = new Character("bob");
    std::cout << std::endl;
    std::cout << GREEN << "       ************" << std::endl;
    me->use(1, *bob);
    me->use(0, *bob);
    std::cout << GREEN << "       ************" << std::endl;
    std::cout << std::endl;
    
    delete tmp; 
    delete bob;
    delete me;
    delete src;

    return 0;
}