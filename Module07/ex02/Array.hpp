/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 17:59:11 by msoriano          #+#    #+#             */
/*   Updated: 2025/12/04 12:27:33 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T> class Array
{
    
    private:
        T* array;
        unsigned int array_size;
        
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &other);
        ~Array();
        
        Array &operator=(const Array &other);        

        T &operator[](unsigned int index);              // Non-const
        const T &operator[](unsigned int index) const;  // Const
        
        unsigned int size() const;
        
        class indexOutOfRange : public std::exception
        {
            public:
                const char *what() const throw();
        };
};

#include "Array.tpp" // We first have to declare the class
#endif