/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:56:31 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/09 17:19:58 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    private:
        std::string _target;
    public:
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& rhs);

        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& rhs);
        
        std::string getTarget() const;
        void	execute(Bureaucrat const &executor) const;

        ~ShrubberyCreationForm();
};

std::ostream &operator<<(std::ostream& out, ShrubberyCreationForm& rhs);

#endif