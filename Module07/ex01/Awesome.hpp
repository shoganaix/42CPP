/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Awesome.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 18:39:43 by msoriano          #+#    #+#             */
/*   Updated: 2025/11/30 18:48:36 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWESOME_HPP
#define AWESOME_HPP

#include <iostream>

class Awesome
{
    public:
        Awesome( void ) : _n( 42 ) { return; }
        int get( void ) const { return this->_n; }
    private:
        int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T > void print( T const & x ) { std::cout << x << std::endl; return; }
    
#endif