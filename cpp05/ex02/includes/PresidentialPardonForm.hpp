/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:56:25 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/09 11:30:52 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
    private:
        std::string _target;
    public:
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm& rhs);

        PresidentialPardonForm& operator=(const PresidentialPardonForm& rhs);
        
        std::string getTarget() const;
        void	execute(Bureaucrat const &executor) const;
        ~PresidentialPardonForm();
};

std::ostream &operator<<(std::ostream& out, PresidentialPardonForm  rhs);

#endif