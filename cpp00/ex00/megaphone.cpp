/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:13:53 by uaupetit          #+#    #+#             */
/*   Updated: 2023/11/29 11:48:02 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (i = 1; i < ac; i++)
		{
			if (i != 1)
			 	std::cout << ' ';
			for (j = 0; av[i][j]; j++)
				std::cout << (char) toupper(av[i][j]);
		}
	}
	std::cout << std::endl;
	return (0);
}
