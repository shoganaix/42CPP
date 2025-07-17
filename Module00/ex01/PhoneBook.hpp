#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <sstream>

#include "Contact.hpp"

class PhoneBook
{
    Contact contact[8];
    int     contactIndex;

    public:
    PhoneBook(void);
    ~PhoneBook(void);
    
    void addContact();
    void displayContact();

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