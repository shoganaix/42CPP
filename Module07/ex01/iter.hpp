/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 17:35:05 by msoriano          #+#    #+#             */
/*   Updated: 2025/12/04 12:27:42 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename F> void iter(T *array, int len, F function)
{
  for (int i = 0; i < len; i++)
  {
      function(array[i]);
  }
};

#endif