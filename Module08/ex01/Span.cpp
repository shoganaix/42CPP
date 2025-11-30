/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 02:33:00 by usuario           #+#    #+#             */
/*   Updated: 2025/11/30 20:58:14 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    this->N = 0;
    this-> data = null;
}

Span::Span(unsigned int N1)
{
    this->N = N1;
    this-> data = null;
}

Span::Span(const Span &other)
{
    this->N = other.N;
    this->data = other.data;
}

Span::~Span()
{

}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        this->N = other.N;
        this->data = other.data;
    }
    return (*this);
}

void Span::addNumber(int nb)
{
    if (data.size() >= N)
        throw FullSpan();
    data.push_back(nb);
}

template <typename It> void Span::addMultipleNumbers(It begin, It end)
{

}


int Span::shortestSpan() const
{
    if (data.size() < 2)
        throw EmptySpan();

    std::vector<int> sorted = data;                     // Create copy container 
    std::sort(sorted.begin(), sorted.end());            // Sort numerically this container

    int minSpan = sorted[1] - sorted[0];                // We set minSpan to the diff between the first two nb
    for (size_t i = 1; i < sorted.size() - 1; ++i)      // We update minSpan if smaller
    {
        int diff = sorted[i + 1] - sorted[i];
        if (diff < minSpan)
            minSpan = diff;
    }
    return (minSpan);
}

int Span::longestSpan() const
{
    if (data.size() < 2)
        throw EmptySpan();

    int minVal = *std::min_element(data.begin(), data.end());
    int maxVal = *std::max_element(data.begin(), data.end());

    return (maxVal - minVal);
}

