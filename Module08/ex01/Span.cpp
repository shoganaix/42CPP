/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 02:33:00 by usuario           #+#    #+#             */
/*   Updated: 2025/12/04 12:27:07 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): N(0), data() {
}

Span::Span(unsigned int N1) : N(N1), data() { //empty vector 
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
        throw fullSpan();
    data.push_back(nb);
}

int Span::shortestSpan() const
{
    if (data.size() < 2)
        throw emptySpan();

    std::vector<int> sorted = data;                     // Create copy container 
    std::sort(sorted.begin(), sorted.end());            // Sort numerically this container // USES STD::SORT

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
        throw emptySpan();

    int minVal = *std::min_element(data.begin(), data.end()); // USES STD::MIN_ELEMENT
    int maxVal = *std::max_element(data.begin(), data.end()); // USES STD:MAX_ELEMENT

    return (maxVal - minVal);
}

