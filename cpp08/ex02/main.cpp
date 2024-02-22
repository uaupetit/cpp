/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:17:08 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/15 11:30:07 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/MutantStack.hpp"

int main()
{
	std::cout << BLUE << "*****STACK*****" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << MAGENTA "mstack.top() = " << mstack.top() << std::endl;
	std::cout << "before mstack.pop: mstack.size() = " << mstack.size() << std::endl;
	mstack.pop();
	std::cout << "after mstack.pop: mstack.size() = " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << std::endl;
	std::cout << BLUE << "*****LIST*****" << std::endl;
	std::list<int> liste;
	
	liste.push_back(5);
	liste.push_back(17);
	liste.push_back(3);
	liste.push_back(5);
	liste.push_back(737);
	liste.push_back(0);
	for (std::list<int>::iterator it = liste.begin(); it != liste.end(); ++it)
		std::cout << MAGENTA << *it << std::endl;
	return 0;
}