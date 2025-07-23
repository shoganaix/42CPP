/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:16:12 by usuario           #+#    #+#             */
/*   Updated: 2025/07/23 14:45:57 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    
    public:
        Contact(void);
        ~Contact(void);

        std::string		getFirstName() const;
        std::string		getLastName() const;
        std::string		getNickName() const;
        std::string		getPhoneNumber() const;
        std::string		getDarkestSecret() const;

    void setContact(std::string firstName, std::string lastName, std::string nickName,
                std::string phoneNumber, std::string darkestSecret);
};

#endif