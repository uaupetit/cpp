/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace_file.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:25:33 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/22 18:35:18 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Replace_file.hpp"

ReplaceFile::ReplaceFile(std::string fd, std::string s1, std::string s2)
    : _fd(fd), _s1(s1), _s2(s2)
{
    std::cout << "constructor called" << std::endl;
    _File_replace(_fd, _s1, _s2);
}

ReplaceFile::~ReplaceFile(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

void ReplaceFile::_File_replace(std::string& _fd, std::string& _s1, std::string& _s2)
{
    std::string line;
    std::ifstream file;
    size_t index = 0;
    file.open(_fd);
    if (!file.is_open())
    {
        std::cerr << "can't open input file" << std::endl;
        return;
    }
    _Replaced_file.open("Replaced_file.txt");
    if (!_Replaced_file.is_open())
    {
         std::cerr << "Unable to open _Replaced_file" << std::endl;
         return;
    }
    else
    {
        std::getline(file, line, '\0');
        {
            index = line.find(_s1);
            while ((index = line.find(_s1)) != std::string::npos)
            {
                line.erase(index, _s1.length());
                line.insert(index, _s2);
            }
            _Replaced_file << line << '\n';
        }
    }
    _Replaced_file.close();
    file.close();
    return;
}

std::ofstream& ReplaceFile::getReplacedFile()
{
    return _Replaced_file;
}