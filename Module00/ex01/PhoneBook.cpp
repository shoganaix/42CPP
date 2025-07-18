/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:16:27 by usuario           #+#    #+#             */
/*   Updated: 2025/07/18 13:16:28 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <limits>  // para std::numeric_limits, puedo??

PhoneBook::PhoneBook(){
    contactIndex = 0;
    currentSize = 0;
}

PhoneBook::~PhoneBook() {
}

 void PhoneBook::addContact()
 {
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Limpia buffer

    std::cout << "Type a name: ";
    while (std::getline(std::cin, firstName) && firstName.empty())
        std::cout << "Field \033[1;31mCANNOT\033[0m be empty.\nType a name: ";

    std::cout << "Type a surname: ";
    while (std::getline(std::cin, lastName) && lastName.empty())
        std::cout << "Field \033[1;31mCANNOT\033[0m be empty.\nType a surname: ";

    std::cout << "Type a nick: ";
    while (std::getline(std::cin, nickName) && nickName.empty())
        std::cout << "Field \033[1;31mCANNOT\033[0m be empty.\nType a nick: ";

    std::cout << "Type a phone number: ";
    while (std::getline(std::cin, phoneNumber) && phoneNumber.empty())
      std::cout << "Field \033[1;31mCANNOT\033[0m be empty.\nType a phone number: ";

    std::cout << "Type their darkest secret: ";
    while (std::getline(std::cin, darkestSecret) && darkestSecret.empty())
    {
        std::cout << "Field \033[1;31mCANNOT\033[0m be empty.\nType their darkest secret: ";
    }

	contact[contactIndex].setContact(firstName, lastName, nickName, phoneNumber, darkestSecret);

    contactIndex = (contactIndex + 1) % 8;
    if (currentSize < 8)
        currentSize++;
 }

void PhoneBook::displayTable()
{
    std::string cyan = "\033[36m";
    std::string reset = "\033[0m";

    std::string line = "+" + std::string(10, '-') + "+"
                            + std::string(10, '-') + "+"
                            + std::string(10, '-') + "+"
                            + std::string(10, '-') + "+";

    std::cout << line << std::endl;

    std::cout << "|" << cyan << std::setw(10) << "INDEX"
              << "|" << std::setw(10) << "FIRST NAME"
              << "|" << std::setw(10) << "LAST NAME"
              << "|" << std::setw(10) << "NICKNAME" << reset 
              << "|"<< std::endl;

    std::cout << line << std::endl;
}

void PhoneBook::displayInfo(int index, std::string prompt)
{
    if ((index == 0  && prompt[0] != '0')|| (index > 7 || index < 0) || (index >= this->currentSize))
		std::cout << "❌\033[1;31m Abort...\033[0m  Please enter a valid digit!\n" << std::endl;
    else
    {
        std::cout << "Name : " << this->contact[index].getFirstName() << std::endl;
	    std::cout << "Lastname : " << this->contact[index].getLastName() << std::endl;
	    std::cout << "Nickname : " << this->contact[index].getNickName() << std::endl;
	    std::cout << "Phone number : " << this->contact[index].getPhoneNumber() << std::endl;
	    std::cout << "Darkest secret : " << this->contact[index].getDarkestSecret() << std::endl;
    }

}

void PhoneBook::displayContact()
{   
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string prompt;

    if (currentSize  == 0) 
        std::cout << "\033[1;33m⚠️  No contacts found.\033[0m Please add some contacts first.\n" << std::endl;
    else
    {
        displayTable();
        for (int i = 0; i < currentSize; i++)    
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
                  << std::setw(10) << nickName << "|"
                  << std::endl;
        }
        std::cout << "+" + std::string(10, '-') + "+"
            + std::string(10, '-') + "+"
            + std::string(10, '-') + "+"
            + std::string(10, '-') + "+" << std::endl;

        std::cout << std::endl << "\n🔍 Type an\033[1;34m index\033[0m to obtain more information: ";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //limpia buffer nose pk se ensusia
        std::getline(std::cin, prompt);
        int index = atoi(prompt.c_str());
        displayInfo(index, prompt);
    }
}