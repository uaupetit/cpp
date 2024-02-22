/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:38:56 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/09 14:31:44 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

Intern::Intern()
{
    std::cout << BLUE << "Intern constructor called" << std::endl;
    return;
}

Intern::Intern(const Intern& rhs)
{
    std::cout << "Intern Copy construcor called" << std::endl;
    *this = rhs;
    return;
}

Intern& Intern::operator=(const Intern& rhs)
{
    (void)rhs;
    return (*this);
}

const char* Intern::UnexistingFormException::what() const throw()
{
    return (RED "Form does not exist");
}

AForm* Intern::makeForm(std::string name, std::string target)
{
    AForm *form[3] = {
		new ShrubberyCreationForm(target),
        new RobotomyRequestForm(target),
        new PresidentialPardonForm(target),
    };
    std::string tabname[3] = {"ShruberryCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    AForm *obj = NULL;
    for (int i = 0; i < 3; i++)
    {
        if (name == tabname[i])
            obj = form[i];
        else
            delete form[i];
    }
    if (obj != NULL)
    {
        std::cout << "Intern creates " << obj->getName() << std::endl;
        return (obj);
    }
    else
        throw Intern::UnexistingFormException();
}

Intern::~Intern()
{
    std::cout << "Intern destructor called" << std::endl;
    return;
}