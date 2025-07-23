/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:16:30 by usuario           #+#    #+#             */
/*   Updated: 2025/07/23 14:46:17 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "PhoneBook.hpp"
#include "Contact.hpp"

class PhoneBook
{
        Contact contact[8];
        int     contactIndex;
        int     currentSize;

    public:
        PhoneBook(void);
        ~PhoneBook(void);

        void addContact();
        void displayInfo(int index, std::string prompt);
        void displayContact();
        void displayTable();
};

 #endif