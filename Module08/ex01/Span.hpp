/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 02:32:57 by usuario           #+#    #+#             */
/*   Updated: 2025/12/04 12:27:08 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <exception>
#include <iostream>


class Span
{
    private:
        unsigned int N;
        std::vector<int> data; 
        // We use vector because its a dynamic STL container that store elements contiguous memory
        //      - It grows automatically (doesn't know beforehand N value, array container IMPOSSIBLE)
        //      - No need to allocate with new[]
        //      - Built-in algorithms (sort, min, max...)

    public:
        Span();
        Span(unsigned int N1);
        Span(const Span &other);
        ~Span();

        Span &operator=(const Span &other);

        void addNumber(int nb);
        
        class fullSpan : public std::exception
        {
            public:
                const char *what() const throw() 
                {
                    return ("[EXCEPTION] Container is full: N elements already stored");
                }
        };
        
        class emptySpan : public std::exception
        {
            public:
                const char *what() const throw() 
                {
                    return ("[EXCEPTION] Span couldn't be found: Not enough numbers");
                }
        };
        
        // void addMultipleNumbers(int amount); SUBJECT SPECIFICALLY ASKS TO FILL SPAN USING A RANGE OF ITERATORS
                
        // We create a template because it has to accept any type of ::iterators (list, array, vector...)
                                /*                                                  *
                                * Span sp(5);                                       *
                                * std::deque<int> d = {100, 200, 300};              *
                                * sp.addMultipleNumbers(d.begin(), d.end());        *
                                *                                                   *
                                * sp.data = [100, 200, 300];                        *
                                *                                                   */

        template <typename It> void addMultipleNumbers(It begin, It end) 
        // NEEDS to be defined in header, otherwise linker command fails
                // This is because compiler needs to generate code for each and every type at compiler time
        {                                                                          
            for (; begin != end; ++begin) //needs the fisr  otherwise loop breaks
            {
                if (data.size() >= N)
                    throw fullSpan();
                data.push_back(*begin);
            }
        }

        int shortestSpan() const;
        // Returns the smallest difference between ANY two stored numbers (requires two numbers on data) -> throws exception

        int longestSpan() const;
        // Returns the largest difference between ANY two stored numbers (requires two numbers on data) -> throws exception

};


#endif
