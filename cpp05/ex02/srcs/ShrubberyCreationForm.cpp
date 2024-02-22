/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:29:51 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/09 12:07:41 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137), _target(target) 
{
    std::cout << BLUE << "ShrubberyCreationForm constructor is called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& rhs): AForm(rhs.getName(), rhs.getGradeSign(), rhs.getGradeExec()), _target(rhs.getName())
{
	std::cout << BLUE << "Copy ShrubberyCreationForm constructor is called." << std::endl;
}


ShrubberyCreationForm& ShrubberyCreationForm::operator=( ShrubberyCreationForm const &rhs )
{
	std::cout << BLUE << "ShrubberyCreationForm assignment operator is called" << std::endl;
	if (this != &rhs)
    {
        this->_target = rhs.getTarget();
	}
	return (*this);
}

std::string ShrubberyCreationForm::getTarget() const
{
    return (_target);
}

void    ShrubberyCreationForm::execute(Bureaucrat const& Bureaucrat) const
{
    if (this->getSigned() && Bureaucrat.getGrade() <= this->getGradeExec())
    {
        std::string filename = this->getTarget() + "_Shruberry.txt";
        std::ofstream outputFile(filename.c_str());
        if (outputFile.is_open())
        {
            outputFile << "    oxoxoo    ooxoo    \n"
                       << "   ooxoxo oo  oxoxooo   \n"
                       << "  oooo xxoxoo ooo ooox  \n"
                       << " oxo o oxoxo  xoxxoxo    \n"
                       << "  oxo xooxoooo o ooo      \n"
                       << "       ooo\\oo\\  /o/o      \n "
                       <<  "       \\  \\/ /       \n"
                       << "         |   /            \n"
                       << "         |  |              \n"
                       << "         | D|              \n"
                       << "         |  |           \n"
                       <<  "         |  |             \n "
                       <<  " ______/____\\____      \n";
            std::cout << YELLOW << this->getTarget() << "_Shruberry.txt created with success" << std::endl;
            outputFile.close();
        }
        else 
        {
            std::cerr << RED << "Can't open file" << std::endl;
        }
    }
    else
        throw AForm::GradeTooLowException();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}