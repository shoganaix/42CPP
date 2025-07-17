#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <cstring>
#include <iomanip>
#include <limits>  // para std::numeric_limits
#include <stdlib.h>

PhoneBook::PhoneBook(){
    contactIndex = 0;
    currentSize = 0;

}

PhoneBook::~PhoneBook() {
}

 void PhoneBook::addContact() // por que?!!
 {
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Limpia buffer

    std::cout << "Type a name : ";
	std::getline(std::cin, firstName);
	std::cout << "Type a surname : ";
	std::getline(std::cin, lastName);
	std::cout << "Type a nick : ";
	std::getline(std::cin, nickName);
	std::cout << "Type a phone number : ";
	std::getline(std::cin, phoneNumber);
	std::cout << "Type their darkest secret : ";
	std::getline(std::cin, darkestSecret);

	contact[contactIndex].setContact(firstName, lastName, nickName, phoneNumber, darkestSecret);
	
    contactIndex = (contactIndex + 1) % 8;
    if (currentSize < 8)
        currentSize++;
 }

void PhoneBook::displayContact()
{  
    if (currentSize  == 0) 
        std::cout << "\n\033[1;33m⚠️  No contacts found.\033[0m Please add some contacts first.\n" << std::endl;
    else
    {
        DisplayTable();
        //wait for prompt then DisplayInfo...
    }
}

void PhoneBook::DisplayTable()
{
    std::string firstName;
    std::string lastName;
    std::string nickName;
    int i = 0;

    const std::string reset = "\033[0m";
    const std::string cyan = "\033[36m";
    const std::string yellow = "\033[33m";
    const std::string magenta = "\033[35m";

    std::cout << cyan << std::string(45, '-') << std::endl;

    std::cout << "|" 
        << std::setw(10) << "INDEX" << "|"
        << std::setw(10) << "FIRST NAME" << "|"
        << std::setw(10) << "LAST NAME" << "|"
        << std::setw(10) << "NICK" << "|" << std::endl;

    std::cout << std::string(45, '-') << reset  << std::endl;

	while (i < currentSize)
    {
		firstName = this->contact[i].getFirstName();
		lastName = this->contact[i].getLastName();
		nickName = this->contact[i].getNickName();
		if (firstName.length() > 9)
			firstName = firstName.substr(0, 9) + ".";
		if (lastName.length() > 9)
			lastName = lastName.substr(0, 9) + ".";
		if (nickName.length() > 9)
			nickName = nickName.substr(0, 9) + ".";
 
         std::cout << "|" 
            << std::setw(10) << i << "|"
            << std::setw(10) << firstName << "|"
            << std::setw(10) << lastName << "|"
            << std::setw(10) << nickName << "|" << std::endl;
		i++;
    }
}