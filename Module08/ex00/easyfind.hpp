/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 00:57:40 by usuario           #+#    #+#             */
/*   Updated: 2025/12/04 12:27:10 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <exception>
#include <iostream>


class NotFound : public std::exception
{
    public:
        const char *what() const throw() 
        {
            return ("[EXCEPTION] Number couldn't be found on container");
        }
};

//template <typename T> typename T::iterator easyfind (T &container, int number) -> returns iterator pointing to the element
template <typename T> int easyfind(T container, int number)
{
    typename T::iterator it = std::find(container.begin(), container.end(), number);
    // Searches for 'number' on container type T
    //          -If found, 'it' points to it
    //          -Otherwise, 'it' == end()
    if (it == container.end())
        throw NotFound();
    return (*it); //Returns value of iterator 'it' as int
};

#endif

/*
====================================================================================
                                    CONTAINERS
====================================================================================
Conatiners are commonly used data structures; they are (holder) objects that store
collections of other objects 
(They are implemented as class templates)

There are mainly 4 types of containers in C++ STL:

// 4 main types of STL containers:

Sequence Containers                -> (Array, Vector, List, Deque ...) 
                                    Store elements in a strict order

Associative Containers             -> (Set, Map ...)
                                    Store elements in a sorted key-based structure
                                    (We use 'keys' to access every element)
                                    (012322334444445677788899bcccccddeeeffgux)

Unordered Associative Containers   -> (Unordered Set, Unordered Map ...) 
                                    Store elements in hash tables
                                    (9c8245e6e0b74cfccg97e8714u3234228fb4xcd2)

Container Adapters                 -> (Stack, Queue ...)
                                    Provide a restricted interface built on other containers
                                    (they have a default underlying container and don't allow 
                                    you to do everything that the underlying container allows)

====================================================================================
                                     ITERATOR
====================================================================================

Easyfind will allow us to search an int inside ANY STL container 
(vector, list, deque...) that stores integers


        -T is the type of the container
Example:
    If T = std::vector<int> → T::iterator = std::vector<int>::iterator

------------------------------------------------------------------------------------
 What is an iterator?
------------------------------------------------------------------------------------
An iterator is an object that points to an element in a container
    - Moves to the next (++it)
    - Reads the value   (*it)

*It behaves like a smart pointer that can walk through the container*
(meaning something like a universal index working for containers)

*/
