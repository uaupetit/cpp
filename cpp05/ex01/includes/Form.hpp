/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 13:43:38 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/09 16:33:53 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        std::string const _name;
        bool _signed;
        int const _gradeSign;
        int const _gradeExec;
    public:
        Form(std::string name, int gradeSign, int gradeExec);
        Form(const Form& rhs);

        Form& operator=(const Form& rhs);
        
        int getGradeSign();
        int getGradeExec();
        std::string getName();
        bool getSigned();

        void    beSigned(Bureaucrat Bureaucrat);
        
        class GradeTooHighException: public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException: public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class SignedException: public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        
        ~Form();
};

std::ostream &operator<<(std::ostream& out, Form& rhs);

#endif