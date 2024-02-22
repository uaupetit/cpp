/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 16:39:29 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/09 17:17:36 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
    private:
        std::string const _name;
        int _grade;
    public:
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat& rhs);

        Bureaucrat& operator=(const Bureaucrat& rhs);
        
        int getGrade() const;
        std::string getName();

        void    incrementGrade();
        void    decrementGrade();
        void    executeForm(AForm const& form);
        void    signForm(AForm& form);
        
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
        
        ~Bureaucrat();
};

std::ostream &operator<<(std::ostream& out, Bureaucrat& rhs);

#endif
