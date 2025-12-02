/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 02:32:42 by usuario           #+#    #+#             */
/*   Updated: 2025/12/02 18:39:59 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>
#include <deque>
#include <list>

//typename C as Container
template <typename T, typename C = std::deque<T> > // This is because std::stack by default uses std::deque as its underlying container

class MutantStack : public std::stack<T, C>        // MutantStack inherits from std::stack (can use push(), pop(), top(), size()...)
{
    public:
        // Const
        MutantStack();
        MutantStack(const MutantStack &other);
        MutantStack& operator=(const MutantStack &other);
        ~MutantStack();

        // Iterators
        typedef typename C::iterator iterator;
        typedef typename C::const_iterator const_iterator;

        //NON-CONST
        iterator begin();       // returns an iterator to the first element
        iterator end();         // returns an iterator to the "past-the-end" element
        //CONST
        const_iterator begin() const;
        const_iterator end() const;   
};

#include "MutantStack.tpp"

#endif

