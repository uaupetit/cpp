/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:12:33 by uaupetit          #+#    #+#             */
/*   Updated: 2024/02/08 14:19:18 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

RPN::RPN()
{
    std::cout << GREEN "RPN constructor called" << std::endl;
    return;
}

RPN::RPN(const RPN& rhs)
{
    std::cout << GREEN "RPN constructor called" << std::endl;
    _stack = rhs._stack;
}

RPN& RPN::operator=(const RPN& rhs)
{
    std::cout << GREEN "RPN copy assignement called" << std::endl;
    if (this != &rhs)
    {
        _stack = rhs._stack;
    }
    return *this;
}

bool RPN::isOperator(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/';
}

// void RPN::Calculator(char** ave)
// {
//     int j = 1;
//     int i = 0;
//     int op = 0;
//     int nb = 0;
//     int result = 0;
//     std::string av = removeSpaces(ave[j]);
//     // std::string av = ave;
//     while (av[i])
//     {
//         if (!isdigit(av[i]) && av[i] != ' ' && !isOperator(av[i]))
//         {
//             throw WrongInputException();
//         }
//         if (isdigit(av[i]) && !isdigit(av[i + 1]))
//         {
//             nb++;
//             int digitValue = av[i] - '0';
//             _stack.push(digitValue);
//            // if (av[i + 1] == ' ')
//                 i++;
//         }
//         else if (isOperator(av[i]) && _stack.size() >= 2)
//         {
//             op++;
//             int operand2 = _stack.top();
//             _stack.pop();
//             int operand1 = _stack.top();
//             _stack.pop();
//             switch (av[i])
//             {
//                 case '+':
//                     result = operand1 + operand2;
//                     break;
//                 case '-':
//                     result = operand1 - operand2;
//                     break;
//                 case '*':
//                     result = operand1 * operand2;
//                     break;
//                 case '/':
//                     if (operand2 != 0)
//                     {
//                         result = operand1 / operand2;
//                     }
//                     else
//                     {
//                         std::cout << RED "Error: Division by zero." << std::endl;
//                         return;
//                     }
//                     break;
//                 default:
//                     std::cout << RED "Error: Unknown operator." << std::endl;
//                     return;
//             }
//             _stack.push(result);
//         }
//         // else
//         // {
//         //     throw WrongInputException();
//         // }
//         i++;
//     }
//     if (op == 0)
//     {
//         std::cout << RED "error" << std::endl;
//         return;
//     }
//         std::cout << MAGENTA << "Result: " << result << std::endl;
// }

// void RPN::Calculator(char** ave)
// {
//     int j = 1;
//     int i = 0;
//     int op = 0;
//     int result = 0;
//     std::string av = removeSpaces(ave[j]);
//     while (av[i])
//     {
//         if (!isdigit(av[i]) && av[i] != ' ' && !isOperator(av[i]))
//         {
//             throw WrongInputException();
//         }
//         if (isdigit(av[i]) && (!isdigit(av[i + 1]) && av[i + 1] != ' '))
//         {
//             int number = 0;
//             while (isdigit(av[i]))
//             {
//                 number = number * 10 + (av[i] - '0');
//                 i++;
//             }
//             _stack.push(number);
//             continue;
//         }
//         if (isdigit(av[i]))
//         {
//             int number = 0;
//             while (isdigit(av[i]))
//             {
//                 number = number * 10 + (av[i] - '0');
//                 i++;
//             }
//             _stack.push(number);
//             continue;
//         }
//         if (isOperator(av[i]) && _stack.size() >= 2)
//         {
//             op++;
//             int operand2 = _stack.top();
//             _stack.pop();
//             int operand1 = _stack.top();
//             _stack.pop();
//             switch (av[i])
//             {
//                 case '+':
//                     result = operand1 + operand2;
//                     break;
//                 case '-':
//                     result = operand1 - operand2;
//                     break;
//                 case '*':
//                     result = operand1 * operand2;
//                     break;
//                 case '/':
//                     if (operand2 != 0)
//                     {
//                         result = operand1 / operand2;
//                     }
//                     else
//                     {
//                         std::cout << RED "Error: Division by zero." << std::endl;
//                         return;
//                     }
//                     break;
//                 default:
//                     std::cout << RED "Error: Unknown operator." << std::endl;
//                     return;
//             }
//             _stack.push(result);
//         }
//         else if (av[i] == ' ') {
//             // Ignore space characters
//             i++;
//             continue;
//         }
//         else
//         {
//             throw WrongInputException();
//         }
//         i++;
//     }
//     if (op == 0)
//     {
//         std::cout << RED "error" << std::endl;
//         return;
//     }
//     std::cout << MAGENTA << "Result: " << result << std::endl;
// }

void RPN::Calculator(char** ave)
{
    int j = 1;
    int i = 0;
    int op = 0;
    int result = 0;
    //int flag = 0;
    // try
    // {
    //     std::string av = removeSpaces(ave[j]);
    //     /* code */
    //   //  flag == 1;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    std::string av = removeSpaces(ave[j]);
    while (av[i])
    {
        if (!isdigit(av[i]) && av[i] != ' ' && !isOperator(av[i])) //si c est pas un chiffre ou un espace tu quit
        {
            throw WrongInputException();
        }
        // else if (isdigit(av[i] && isdigit(av[i + 1])))
        // {
        //     throw WrongInputException();
        // }
        if (isdigit(av[i]))
        {
            int number = 0;
            while (isdigit(av[i]))
            {
                number = number * 10 + (av[i] - '0');
                i++;
            }
            _stack.push(number);
            continue;
        }
        if (isOperator(av[i]) && _stack.size() >= 2)
        {
            op++;
            int operand2 = _stack.top();
            _stack.pop();
            int operand1 = _stack.top();
            _stack.pop();
            switch (av[i])
            {
                case '+':
                    result = operand1 + operand2;
                    break;
                case '-':
                    result = operand1 - operand2;
                    break;
                case '*':
                    result = operand1 * operand2;
                    break;
                case '/':
                    if (operand2 != 0)
                    {
                        result = operand1 / operand2;
                    }
                    else
                    {
                        std::cout << RED "Error: Division by zero." << std::endl;
                        return;
                    }
                    break;
                default:
                    std::cout << RED "Error: Unknown operator." << std::endl;
                    return;
            }
            _stack.push(result);
        }
        else if (av[i] == ' ') {
            // Ignore space characters
            i++;
            continue;
        }
        else
        {
            throw WrongInputException();
        }
        i++;
    }
    if (op == 0 || _stack.size() != 1) // Vérifie si aucun opérateur n'a été trouvé ou s'il reste plus d'un élément dans la pile
    {
        std::cout << RED "error" << std::endl;
        return;
    }
    std::cout << MAGENTA << "Result: " << result << std::endl;
}


std::string RPN::removeSpaces(const std::string& input)
{
    std::string result;
    for (size_t i = 0; input[i] != '\0'; ++i)
    {
        // if (input[i] != ' ')
        // {
            result += input[i];
        // }
        if (input[i] == ' ' && input[i + 1] == ' ')
            throw WrongInputException();
        else if (isdigit(input[i]) && isdigit(input[i + 1]))
            throw WrongInputException();
    }
    return result;
}

const char *RPN::WrongInputException::what() const throw()
{
	return (RED "Error: wrong input.");
}


RPN::~RPN()
{
    std::cout << GREEN "RPN destructor called" << std::endl;
}