/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 18:50:07 by usuario           #+#    #+#             */
/*   Updated: 2025/12/04 00:51:32 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>     // std::cout
#include <exception>    // std::exception
#include <algorithm>    // std::swap, lower_bound()
#include <cstdlib>      // strtoul()
#include <ctime>        // clock()


#include <vector>
#include <deque>

/*
*   "You must use at least two different containers in your code to
*                     validate this exercise"
*
*  We use VECTOR and DEQUE specifically because:
*
*      • std::vector  – contiguous storage
*                       [ A ][ B ][ C ][ D ][ E ]
*
*                     - random-access iterators
*
*      • std::deque   – non-contiguous BLOCK storage
*                       [ A ][ B ]    [ C ][ D ]    [ E ]
*                         block 1      block 2     block 3
*
*                     - random-access iterators
*
*/

class PmergeMe 
{
    
    private:
        static std::vector<size_t> jacobsthal_order(size_t n);

    public:
        PmergeMe();
        PmergeMe(std::vector<int> list);
        PmergeMe(const PmergeMe &other);
        PmergeMe &operator=(const PmergeMe &other);
        ~PmergeMe();

        static void sort(std::vector<unsigned int>& v);
        static void sort(std::deque<unsigned int>& v);
};

class invalidInput : public std::exception
{
public:
    virtual const char* what() const throw()
    {
        return "\033[31m[EXCEPTION]\033[0m Invalid input: not a positive integer";
    }
};

class outOfRange : public std::exception
{
public:
    virtual const char* what() const throw()
    {
        return "\033[31m[EXCEPTION]\033[0m Invalid input: number out of range";
    }
};

#endif
