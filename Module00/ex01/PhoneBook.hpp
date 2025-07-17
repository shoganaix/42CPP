#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <cstring>
#include <stdlib.h>

class PhoneBook
{
    Contact contact[8];
    int     contactIndex;
    int     currentSize;

    public:
    PhoneBook(void);
    ~PhoneBook(void);
    
    void addContact();
    //necesito que tenga un prompt pero el constructor tiene que estar avcio ??
    void displayContact();
    void DisplayGraphic(); 

};
/**
 * FOLLOW THE ORTHODOX CLASS FORM:
 * 
        class A final
        {
        public:
            A ();
            A (const A &a);
            ~A ();
            A & operator = (const A &a);
        };
 * 
 */

 #endif