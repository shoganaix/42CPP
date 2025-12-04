/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:49:47 by usuario           #+#    #+#             */
/*   Updated: 2025/12/04 12:31:34 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
        int                 nbValue;
        static const int    nbBits = 8;

    public:
        Fixed(void);
        Fixed(const Fixed &fixed);
        Fixed&	operator=(const Fixed &fixed);
        ~Fixed(void);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif