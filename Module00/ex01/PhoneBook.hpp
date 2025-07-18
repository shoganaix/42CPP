/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:16:30 by usuario           #+#    #+#             */
/*   Updated: 2025/07/18 13:16:31 by usuario          ###   ########.fr       */
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
    //constructor debe estar vacio?
    void displayInfo(int index, std::string prompt);
    //puede recibir cosas no?
    void displayContact();
    void displayTable();
};

 #endif