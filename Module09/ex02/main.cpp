/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 18:50:12 by usuario           #+#    #+#             */
/*   Updated: 2025/12/04 00:51:37 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool is_positive_int(const std::string &s)
{
    if (s.empty())
        return false;
    for (size_t i = 0; i < s.size(); ++i)
    {
        if (!isdigit(s[i]))
            return false;
    }
    return true;
}

void print_container(const std::vector<unsigned int> &v)
{
    for (size_t i = 0; i < v.size(); ++i)
    {
        std::cout << v[i];
        if (i + 1 < v.size())
            std::cout << " ";
    }
    std::cout << std::endl;
}


int main(int argc, char** argv) 
{
    if (argc < 2) 
    {
        std::cerr << "\033[31m[Error]:\033[0m Program must be called with more than one arg: > ./PmergeMe <3> <5> ..." << std::endl;
        return (1);
    }

    std::vector<unsigned int> v;
    std::deque<unsigned int> d;

    try
    {
        for (int i = 1; i < argc; ++i) 
        {
            std::string s = argv[i];
            // "Your program must be able to use a positive integer sequence as an argument"
            if (!is_positive_int(s))
                throw invalidInput();
            // Converts the string to unsigned long (base 10) and checks range
            unsigned long n = strtoul(s.c_str(), NULL, 10);
            if (n > 4294967295UL)
                throw outOfRange();
            v.push_back((unsigned int)n);
            d.push_back((unsigned int)n);
        }
    } 
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return (1);
    }


    // ------ PRINT BEFORE -------
    std::cout << "Before: ";
    print_container(v);


    // ------ SORT VECTOR AND TIME -------
    clock_t start_v = clock(); // START TIME
    PmergeMe::sort(v);
    clock_t end_v = clock();   // END TIME
    double time_v = double(end_v - start_v) / CLOCKS_PER_SEC * 1e6; // Diff time in microseconds

    // ------ SORT DEQUE AND TIME -------
    clock_t start_d = clock(); // START TIME
    PmergeMe::sort(d);
    clock_t end_d = clock();   // END TIME
    double time_d = double(end_d - start_d) / CLOCKS_PER_SEC * 1e6; // Diff time in microseconds

    // ------ PRINT AFTER -------
    std::cout << "After: ";
    print_container(v);

    // ------ PRINT TIME -------
    std::cout << "Time to process a range of " << v.size() << " elements with std::vector : " << time_v << " us" << std::endl;
    std::cout << "Time to process a range of " << d.size() << " elements with std::deque : " << time_d << " us" << std::endl;

    return (0);
}