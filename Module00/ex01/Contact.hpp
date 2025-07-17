#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

class Contact
{
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;
    //tienen que estar privados los atributos??
    
    public:
    Contact(void);
    ~Contact(void);

	std::string		getFirstName() const;
	std::string		getLastName() const;
	std::string		getNickName() const;
	std::string		getPhoneNumber() const;
	std::string		getDarkestSecret() const;
    //por que const

    void setContact(std::string firstName, std::string lastName, std::string nickName,
                std::string phoneNumber, std::string darkestSecret);
};

#endif