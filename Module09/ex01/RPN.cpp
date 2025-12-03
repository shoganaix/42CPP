/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 17:27:54 by usuario           #+#    #+#             */
/*   Updated: 2025/12/04 00:51:39 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {
    
}

RPN::RPN(const RPN &other)
{ 
        this->input = other.input;
        this->st =other.st;
}

RPN &RPN::operator=(const RPN &other) {
  if (this != &other)
  {
    this->input = other.input;
    this->st = other.st;
  }
  return (*this);
}

RPN::~RPN() {

}

int RPN::applyOperation(int a, int b, char op) const
{
    if (op == '+')
    {
        if ((b > 0 && a > INT_MAX - b) || (b < 0 && a < INT_MIN - b))
            throw resultOverflows();
        return (a + b);
    }
    if (op == '-')
    {
        if ((b < 0 && a > INT_MAX + b) || (b > 0 && a < INT_MIN + b))
            throw resultOverflows();
        return (a - b);
    }
    if (op == '*')
    {
        if (a > 0 && b > 0 && a > INT_MAX / b)
            throw resultOverflows(); 
        if (a < 0 && b < 0 && a < INT_MAX / b)
            throw resultOverflows(); 
        if (a > 0 && b < 0 && b < INT_MIN / a)
            throw resultOverflows(); 
        if (a < 0 && b > 0 && a < INT_MIN / b)
            throw resultOverflows();    
        return (a * b);
    }
    if (op == '/') 
    {
        if (b == 0)
            throw noDivisionByZero();
        if (a == INT_MIN && b == -1)
            throw resultOverflows();
        return (a / b);
    }
    throw invalidToken();
}

RPN::RPN(char *input) : input(input)
{
    std::istringstream iss(input);
    std::string token;

    while (iss >> token) 
    {
        //Only one char and a number).
        if (token.size() == 1 && std::isdigit(token[0]))
            st.push(token[0] - '0');

        //Only one char and valid token (+, -, *, /).
        else if (token.size() == 1 && (token[0] == '+' || token[0] == '-' || token[0] == '*' || token[0] == '/'))
        {
            //At least 2 numbers
            if (st.size() < 2) 
                throw notEnoughNumbers();
            int b = st.top(); st.pop();                 // st.top() returns last number in stack
            int a = st.top(); st.pop();                 // st.pop() deletes from stack
            st.push(applyOperation(a, b, token[0]));    // push result to stack
        } 
        else 
        {
            throw invalidToken();
        }
    }

    if (st.size() != 1)
        throw notEnoughOperators();
    
    std::cout << st.top() << std::endl;
}
