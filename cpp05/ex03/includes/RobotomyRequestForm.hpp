/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:56:28 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/09 11:06:00 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm: public AForm
{
    private:
        std::string _target;
    public:
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm& rhs);

        RobotomyRequestForm& operator=(const RobotomyRequestForm& rhs);
        
        std::string getTarget() const;
        void	execute(Bureaucrat const &executor) const;
        ~RobotomyRequestForm();
};

std::ostream &operator<<(std::ostream& out, RobotomyRequestForm  rhs);

#endif