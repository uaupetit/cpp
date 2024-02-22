/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:53:42 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/22 14:04:28 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(): std::stack<T>()
{
    std::cout << YELLOW "MutantStack Constructor called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& rhs): std::stack<T>(rhs)
{
    std::cout << YELLOW "MutantStack Copy constructor called" << std::endl;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& rhs)
{
    std::cout << YELLOW "MutantStack assignement operator called" << std::endl;
    if (this != &rhs)
    {
        std::stack<T>::operator=(rhs);
    }
    return *this;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
    std::cout << YELLOW "MutantStack destructor called" << std::endl;
}

template < typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return (this->c.begin());
};

template < typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return (this->c.end());
};