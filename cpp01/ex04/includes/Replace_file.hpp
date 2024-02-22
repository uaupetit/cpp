/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace_file.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:25:38 by uaupetit          #+#    #+#             */
/*   Updated: 2023/11/30 14:47:01 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_FILE_HPP
# define REPLACE_FILE_HPP

#include <iostream>
#include <fstream>
#include <string>

class ReplaceFile
{
    public:
    
        ReplaceFile(std::string fd, std::string s1, std::string s2);
        ~ReplaceFile(void);

        std::ofstream& getReplacedFile();

    private:
        void _File_replace(std::string& _fd, std::string& _s1, std::string& _s2);
        std::string _fd;
        std::string _s1;
        std::string _s2;
        std::ofstream _Replaced_file;
};      

#endif