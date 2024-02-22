/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 13:52:15 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/09 16:35:10 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

// Form::Form(std::string name, int gradeSign, int gradeExec): _name(name), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
// {
//     if (_gradeSign < 1 || _gradeExec < 1)
//         throw GradeTooHighException();
//     else if (_gradeSign > 150 || _gradeExec > 150)
//         throw GradeTooLowException();
//     else
//         std::cout << BLUE << "Form constructor called with name " << _name << ", gradeSign " << _gradeSign << " and gradeExec " << _gradeExec << std::endl;
//     return;
// }

Form::Form(std::string name, int gradeSign, int gradeExec): _name(name), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
    try
    {
        if (_gradeSign < 1 || _gradeExec < 1)
            throw GradeTooHighException();
        else if (_gradeSign > 150 || _gradeExec > 150)
            throw GradeTooLowException();
        else
            std::cout << BLUE << "Form constructor called with name " << _name << ", gradeSign " << _gradeSign << " and gradeExec " << _gradeExec << std::endl;
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

Form::Form(const Form& rhs): _name(rhs._name), _signed(rhs._signed), _gradeSign(rhs._gradeSign), _gradeExec(rhs._gradeExec) 
{
    std::cout << BLUE << "Copy constructor called" << std::endl;
    return;
}

Form& Form::operator=(const Form& rhs)
{
    if(this != &rhs)
    {
        _signed = rhs._signed;
    }
    return *this;
}

bool Form::getSigned()
{
    return (_signed);
}

int Form::getGradeSign()
{
    return(_gradeSign);
}

int Form::getGradeExec()
{
    return(_gradeExec);
}

std::string Form::getName()
{
    return (_name);
}

void Form::beSigned(Bureaucrat Bureaucrat)
{
    if (_signed == true)
        throw SignedException();
    else if (Bureaucrat.getGrade() <= _gradeSign)
        _signed = true;
    else
        throw GradeTooHighException();
    
}

const char* Form::GradeTooHighException::what() const throw()
{
    return (RED "Form grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return (RED "Form grade is too low");
}

const char * Form::SignedException::what() const throw()
{
    return (RED "Form is already signed");
}

Form::~Form()
{
    std::cout << BLUE << "Form destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream& out, Form& rhs)
{
    out << "Form " << rhs.getName()
	<< " is signed: " << (rhs.getSigned() ? "Yes" : "No") << std::endl
		<< "Grade required to sign: " << rhs.getGradeSign() << std::endl
		<< "Grade required to execute: " << rhs.getGradeExec() << std::endl;
	return out;
}