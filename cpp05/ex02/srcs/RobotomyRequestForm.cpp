/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:33:29 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/09 12:08:24 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45), _target(target) 
{
    std::cout << BLUE << "RobotomyRequestForm constructor is called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rhs): AForm(rhs.getName(), rhs.getGradeSign(), rhs.getGradeExec()), _target(rhs.getName())
{
	std::cout << BLUE << "Copy RobotomyRequestForm constructor is called." << std::endl;
}


RobotomyRequestForm& RobotomyRequestForm::operator=( RobotomyRequestForm const &rhs )
{
	std::cout << BLUE << "RobotomyRequestForm assignment operator is called" << std::endl;
	if (this != &rhs)
    {
        this->_target = rhs.getTarget();
	}
	return (*this);
}

std::string RobotomyRequestForm::getTarget() const
{
    return (_target);
}

void    RobotomyRequestForm::execute(Bureaucrat const& Bureaucrat) const
{
    if (this->getSigned() && Bureaucrat.getGrade() <= this->getGradeExec())
    {
        std::cout << YELLOW << this->getName() << "Makes some drilling noise!" << std::endl;
        std::srand(std::time(0));
        int nb = std::rand();
        if (nb % 2)
			std::cout << YELLOW << this->getTarget() << " has been robotomized successfully." << std::endl;
		else
			std::cout << YELLOW << this->getTarget() << " could not be robotomized." << std::endl;
    }
    else
        throw AForm::GradeTooLowException();
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}