/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 18:05:54 by msoriano          #+#    #+#             */
/*   Updated: 2025/11/28 18:53:39 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : array(NULL), array_size(0) {
}

template <typename T>
Array<T>::Array(unsigned int n) : array(NULL), array_size(n)
{
    if (n > 0)
        this->array = new T[n];
}

template <typename T>
Array<T>::Array(const Array& other): array(NULL), array_size(other.array_size)
{
    if (this->array_size > 0)
    {
        this->array = new T[this->array_size];
        for (unsigned int i = 0; i < this->array_size; i++)
            this->array[i] = other.array[i];
    }
}

template <typename T>
Array<T> &Array<T>::operator=(const Array& other) 
{
    if (this != &other) 
    {
        delete[] this->array;
        this->array_size = other.array_size;
        this->array = NULL;
        if(this->array_size > 0)
            this->array = new T[other.array_size];
        for (unsigned int i = 0; i < this->array_size; i++)
        {
            this->array[i] = other.array[i];
        }
    }
    return (*this);
}

template <typename T>
Array<T>::~Array() 
{
    delete[] this->array;
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
    if (index >= this->array_size)
        throw IndexOutOfRange();
    return (this->array[index]);
}

//CONST
template <typename T>
const T &Array<T>::operator[](unsigned int index) const
{
    if (index >= this->array_size)
        throw IndexOutOfRange();
    return (this->array[index]);
}


template <typename T>
unsigned int Array<T>::size() const 
{
    return (this->array_size);
}

template <typename T> 
const char *Array<T>::IndexOutOfRange::what() const throw() 
{
  return ("[EXCEPTION] Array index out of bounds");
}
