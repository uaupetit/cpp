/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:04:56 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/22 18:10:41 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
#include <string>
#include <iostream>
#include <iomanip>  

class Contact
{
    public:
        
        Contact(void);
        ~Contact(void);
        
        int index;
        std::string getfirstName(void) const ;
        std::string getlastName(void) const ;
        std::string getnickName(void) const ;
        std::string getphoneNumber(void) const ;
        std::string getdarkestSecret(void) const ;
    
        void setfirstName(const std::string &firstName);
        void setlastName(const std::string &lastName);
        void setnickName(const std::string &nickName);
        void setphoneNumber(const std::string &phoneNumber);
        void setdarkestSecret(const std::string &darkestSecret);
    private:
        
        std::string _firstName;
        std::string _lastName;
        std::string _nickName;
        std::string _phoneNumber;
        std::string _darkestSecret;
};

#endif