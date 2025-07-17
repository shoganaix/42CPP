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