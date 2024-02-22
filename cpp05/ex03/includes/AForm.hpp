/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 13:43:38 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/08 12:15:24 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        std::string _name;
        bool _signed;
        int const _gradeSign;
        int const _gradeExec;
    public:
        AForm(std::string name, int gradeSign, int gradeExec);
        AForm(const AForm& rhs);

        AForm& operator=(const AForm& rhs);
        
        int getGradeSign() const;
        int getGradeExec() const;
        std::string getName() const;
        bool getSigned() const;

        void    beSigned(Bureaucrat Bureaucrat);
        
        virtual void execute(Bureaucrat const& executor) const = 0;

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
        
        virtual ~AForm();
};

std::ostream &operator<<(std::ostream& out, AForm& rhs);

#endif