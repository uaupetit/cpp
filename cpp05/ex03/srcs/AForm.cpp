/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 13:52:15 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/08 12:16:41 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"

AForm::AForm(std::string name, int gradeSign, int gradeExec): _name(name), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
    if (_gradeSign < 1 || _gradeExec < 1)
        throw GradeTooHighException();
    else if (_gradeSign > 150 || _gradeExec > 150)
        throw GradeTooLowException();
    else
        std::cout << BLUE << "AForm constructor called with name " << _name << ", gradeSign " << _gradeSign << " and gradeExec " << _gradeExec << std::endl;
    return;
}

AForm::AForm(const AForm& rhs): _name(rhs._name), _signed(rhs._signed), _gradeSign(rhs._gradeSign), _gradeExec(rhs._gradeExec) 
{
    std::cout << BLUE << "Copy constructor called" << std::endl;
    return;
}

AForm& AForm::operator=(const AForm& rhs)
{
    if(this != &rhs)
    {
        _signed = rhs._signed;
    }
    return *this;
}

bool AForm::getSigned() const
{
    return (_signed);
}

int AForm::getGradeSign() const
{
    return(_gradeSign);
}

int AForm::getGradeExec() const 
{
    return(_gradeExec);
}

std::string AForm::getName() const 
{
    return (_name);
}

void AForm::beSigned(Bureaucrat Bureaucrat)
{
    if (_signed == true)
        throw SignedException();
    else if (Bureaucrat.getGrade() <= _gradeSign)
        _signed = true;
    else
        throw GradeTooHighException();
    
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return (RED "AForm grade is too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return (RED "AForm grade is too low");
}

const char * AForm::SignedException::what() const throw()
{
    return (GREEN "AForm is already signed");
}

AForm::~AForm()
{
    std::cout << BLUE << "AForm destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream& out, AForm& rhs)
{
    out << "AForm " << rhs.getName()
	<< " is signed: " << (rhs.getSigned() ? "Yes" : "No") << std::endl
		<< "Grade required to sign: " << rhs.getGradeSign() << std::endl
		<< "Grade required to execute: " << rhs.getGradeExec() << std::endl;
	return out;
}