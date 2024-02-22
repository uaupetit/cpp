/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:32:11 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/09 13:57:30 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5), _target(target) 
{
    std::cout << BLUE << "PresidentialPardonForm constructor is called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& rhs): AForm(rhs.getName(), rhs.getGradeSign(), rhs.getGradeExec()), _target(rhs.getName())
{
	std::cout << BLUE << "Copy PresidentialPardonForm constructor is called." << std::endl;
}


PresidentialPardonForm& PresidentialPardonForm::operator=( PresidentialPardonForm const &rhs )
{
	std::cout << BLUE << "PresidentialPardonForm assignment operator is called" << std::endl;
	if (this != &rhs)
    {
        this->_target = rhs.getTarget();
	}
	return (*this);
}

std::string PresidentialPardonForm::getTarget() const
{
    return (_target);
}

void    PresidentialPardonForm::execute(Bureaucrat const& Bureaucrat) const
{
    if (this->getSigned() && Bureaucrat.getGrade() <= this->getGradeExec())
    {
        std::cout << YELLOW << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
    else
        throw AForm::GradeTooLowException();
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}