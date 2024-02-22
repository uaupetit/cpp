/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:37:36 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/02 11:06:53 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include ".././includes/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << YELLOW << "MateriaSource Constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        materias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (materias[i])
            delete materias[i];
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    *this = src;
}

MateriaSource& MateriaSource::operator=(MateriaSource const & rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < 4; i++)
            materias[i] = rhs.materias[i];
    }
    return *this;
}

AMateria* MateriaSource::getMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
        if (materias[i] && materias[i]->getType() == type)
            return materias[i];
    return NULL;
}

void    MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
        if (materias[i] == NULL)
        {
            materias[i] = m;
            return;
        }
}

AMateria*   MateriaSource::createMateria( std::string const& type )
{
    for ( int i = 0; i < 4; i++ )
        if (materias[i] && materias[i]->getType() == type)
            return materias[i]->clone();
    return NULL;
}