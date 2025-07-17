#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
    std::string firstName;
    std::string lastName;
    std::string phoneNumber;
    std::string darkestSecret;
    
    public:
    Contact(void);
    ~Contact(void);

    void setContact(void);
};

#endif