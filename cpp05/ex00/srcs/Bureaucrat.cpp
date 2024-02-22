/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:00:46 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/09 15:04:41 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name), _grade(grade)
{
    try
    {
        if (grade < 1)
            throw GradeTooHighException();
        else if (grade > 150)
            throw GradeTooLowException();
        else
        {
            _grade = grade;
            std::cout << BLUE << "Bureaucrat constructor called with name " << _name << " and grade " << _grade << std::endl;
        }
    }
    catch (const GradeTooHighException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (const GradeTooLowException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return;
}

Bureaucrat::Bureaucrat(const Bureaucrat& rhs): _name(rhs._name), _grade(rhs._grade)
{
    std::cout << BLUE << "Copy constructor called" << std::endl;
    return;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &rhs) 
{
    if(this != &rhs)
    {
        _grade = rhs._grade;
    }
    return *this;
}

int Bureaucrat::getGrade()
{
    return(_grade);
}

std::string Bureaucrat::getName()
{
    return (_name);
}

void Bureaucrat::incrementGrade()
{
    if (_grade < 2)
        throw GradeTooHighException();
    else
    {
        _grade--;
        std::cout << YELLOW << "after incrementation, " << _name << "'s grade = " << _grade << std::endl;
    }
}

void Bureaucrat::decrementGrade()
{
    if (_grade > 149)
        throw GradeTooLowException();
    else
    {
        _grade++;
        std::cout << YELLOW << "after decrementation, " << _name << "'s grade = " << _grade << std::endl;
    }    
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return (RED "Bureaucrat grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return (RED "Bureaucrat grade is too low");
}

Bureaucrat::~Bureaucrat()
{
    std::cout << BLUE << "Bureaucrat destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream& out, Bureaucrat& rhs)
{
    out << WHITE << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
    return (out);
}