#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <limits>  // para std::numeric_limits

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
		std::cout << "There are no saved contacts" << std::endl;
    else
    {
        DisplayGraphic();
        //...
    }
}

void PhoneBook::DisplayGraphic()
{
    std::string firstName;
    std::string lastName;
    std::string nickName;
    int i = 0;

    std::cout << "Index" << "|";
	std::cout << "Firstname" << "|";
	std::cout << "Lastname" << "|";
	std::cout << "Nickname" << std::endl;
	while (i < currentSize) {
		std::cout << i << "|";
		firstName = this->contact[i].getFirstName();
		lastName = this->contact[i].getLastName();
		nickName = this->contact[i].getNickName();
		if (firstName.length() > 9)
			firstName = firstName.substr(0, 9) + ".";
		if (lastName.length() > 9)
			lastName = lastName.substr(0, 9) + ".";
		if (nickName.length() > 9)
			nickName = nickName.substr(0, 9) + ".";
		std::cout << firstName << "|";
		std::cout << lastName << "|";
		std::cout << nickName << std::endl;
		i++;
	}
}