/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 17:28:01 by usuario           #+#    #+#             */
/*   Updated: 2025/12/03 18:54:45 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>     // std::cout
#include <exception>    // std::exception
#include <stack>

#include <sstream>      // std::istringstream
#include <cctype>       // std::isdigit
#include <climits>      // INT_MAX, INT_MIN

/*
 *  We use STACK because this exercise relies on a LIFO (Last In, First Out) 
 *   behavior, where:
 *      - Each number is pushed onto the stack in the order it is read
 *               (uses a Sequence Container underneath)
 *      - Prevents access to elements in the middle & doesn't allow pushing/popping from both ends
 *      - More restrictive means less chance of errors = safer code
 */


class RPN 
{
    private:
        std::string input;
        std::stack<int> st;

        int applyOperation(int a, int b, char op) const;
    
    public:
        RPN();
        RPN(char *input);
        RPN(const RPN &other);
        RPN &operator=(const RPN &other);
        ~RPN();
};

class notEnoughNumbers : public std::exception 
{
    public:
        const char *what() const throw()
        {
            return ("\033[31m[EXCEPTION]\033[0m Not enough numbers for operation");
        }
};

class noDivisionByZero : public std::exception 
{
    public:
        const char *what() const throw()
        {
            return ("\033[31m[EXCEPTION]\033[0m Division by zero");
        }
};

class invalidToken : public std::exception 
{
    public:
        const char *what() const throw()
        {
            return ("\033[31m[EXCEPTION]\033[0m Invalid number or token: \n - use +, -, * or / \n - use numbers between 0 and 9");
        }
};

class notEnoughOperators : public std::exception 
{
    public:
        const char *what() const throw()
        {
            return ("\033[31m[EXCEPTION]\033[0m Invalid expression: too few operators");
        }
};

class resultOverflows : public std::exception 
{
    public:
        const char *what() const throw()
        {
            return ("\033[31m[EXCEPTION]\033[0m Result exceeds int range");
        }
};

#endif