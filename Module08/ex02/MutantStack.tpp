/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 02:32:42 by usuario           #+#    #+#             */
/*   Updated: 2025/12/04 12:27:04 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

#include "MutantStack.hpp"

template <typename T, typename C>
MutantStack<T, C>::MutantStack() : std::stack<T, C>() {

}

template <typename T, typename C>
MutantStack<T, C>::MutantStack(const MutantStack& other) : std::stack<T, C>(other) {
}

template <typename T, typename C>
MutantStack<T, C>& MutantStack<T, C>::operator=(const MutantStack& other)
{
    if (this != &other)
        std::stack<T, C>::operator=(other);
    return (*this);
}

template <typename T, typename C>
MutantStack<T, C>::~MutantStack() {

}

// Iterators
template <typename T, typename C>
typename MutantStack<T, C>::iterator MutantStack<T, C>::begin() 
{ 
    return (this->c.begin()); 
}

template <typename T, typename C>
typename MutantStack<T, C>::iterator MutantStack<T, C>::end() 
{ 
    return (this->c.end()); 
}

template <typename T, typename C>
typename MutantStack<T, C>::const_iterator MutantStack<T, C>::begin() const 
{ 
    return (this->c.begin()); 
}

template <typename T, typename C>
typename MutantStack<T, C>::const_iterator MutantStack<T, C>::end() const 
{ 
    return (this->c.end()); 
}

#endif
