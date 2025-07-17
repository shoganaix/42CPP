#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <cstring>
#include <stdlib.h>

Contact::Contact() {
}

Contact::~Contact() {
}

//void setContact(void)

void Contact::setContact(std::string p_firstName, std::string p_lastName, std::string p_nickName,
                std::string p_phoneNumber, std::string p_darkestSecret)
{
    this->firstName = p_firstName;
    this->lastName = p_lastName;
    this->nickName = p_nickName;
    this->phoneNumber = p_phoneNumber;
    this->darkestSecret = p_darkestSecret;

}

std::string Contact::getFirstName() const {
    return this->firstName;
}

std::string Contact::getLastName() const {
    return this->lastName;
}

std::string Contact::getNickName() const {
    return this->nickName;
}


std::string Contact::getPhoneNumber() const {
    return this->phoneNumber;
}

std::string Contact::getDarkestSecret() const {
    return this->darkestSecret;
}