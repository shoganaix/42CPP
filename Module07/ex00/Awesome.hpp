/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Awesome.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 18:34:33 by msoriano          #+#    #+#             */
/*   Updated: 2025/11/30 18:38:45 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWESOME_HPP
#define AWESOME_HPP

#include <iostream>

class Awesome 
{
        int _n;
    public:
        Awesome() : _n(0) {}
        Awesome(int n) : _n(n) {}
        Awesome & operator=(Awesome & a) { _n = a._n; return *this; }
        bool operator==(Awesome const & rhs) const { return _n == rhs._n; }
        bool operator!=(Awesome const & rhs) const { return _n != rhs._n; }
        bool operator<(Awesome const & rhs) const { return _n < rhs._n; }
        bool operator>(Awesome const & rhs) const { return _n > rhs._n; }
        bool operator<=(const Awesome & rhs) const { return _n <= rhs._n; } // added
        bool operator>=(const Awesome & rhs) const { return _n >= rhs._n; } // added

    int get_n() const { return _n; }
};
std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

#endif
