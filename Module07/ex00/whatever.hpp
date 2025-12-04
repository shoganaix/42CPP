/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 16:54:01 by msoriano          #+#    #+#             */
/*   Updated: 2025/12/04 12:27:17 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T> void swap(T &a, T &b)
{
    T temp = b;
    b = a;
    a = temp;
}
template <typename T> T min(T a, T b)
{
    return (a < b) ? a : b;
}
template <typename T> T max(T a, T b)
{
    return (a > b) ? a : b;
}

#endif