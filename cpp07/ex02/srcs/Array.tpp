/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaupetit <uaupetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:02:09 by uaupetit          #+#    #+#             */
/*   Updated: 2024/01/17 17:02:51 by uaupetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

template <typename T>
Array<T>::Array(): _array(new T[0]), _size(0)
{
    std::cout << GREEN "Array constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int i): _size(i)
{
    try
    {
        if (_size < 0)
            throw OutOfRangeException();
        _array = new T[_size];
        std::cout << GREEN "Array constructor called" << std::endl;
    }
    catch (const OutOfRangeException& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

template <typename T>
Array<T>::Array(const Array& rhs)
{
    std::cout << BLUE << "Copy constructor called" << std::endl;
    _size = rhs._size;
    _array = new T[_size];
    for (unsigned int i = 0; i < _size; ++i)
    {
        _array[i] = rhs._array[i];
    }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& rhs)
{
    std::cout << "Array assignation operator called" << std::endl;
    if (this != &rhs)
        {
            delete[] _array;
            _size = rhs._size;
            _array = new T[_size];
            for (unsigned int i = 0; i < _size; ++i)
                _array[i] = rhs._array[i];
        }
        return *this;
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
    if (index >= _size)
    {
        throw OutOfRangeException();
    }
    return _array[index];
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
    if (index >= _size)
    {
        throw OutOfRangeException();
    }
    return _array[index];
}

template <typename T>
const char* Array<T>::OutOfRangeException::what() const throw()
{
    return (RED "Index out of bounds");
}

template <typename T>
unsigned int Array<T>::size()
{
    return _size;
}

template <typename T>
Array<T>::~Array()
{
    delete[] _array;
    std::cout << YELLOW "Array Destructor called" << std::endl;
}