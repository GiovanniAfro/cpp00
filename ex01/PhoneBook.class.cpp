/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:02:07 by gcavanna          #+#    #+#             */
/*   Updated: 2023/11/05 18:56:36 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
    contactCount = 0;
}

PhoneBook::~PhoneBook(void) {};

void PhoneBook::addContact(void)
{
    if (contactCount < 8)
    {
        Contact newContact;
        newContact.setContactInfo();
        contacts[contactCount] = newContact;
        contactCount++;
    }
    else
    {
        contacts[0] = contacts[1];
        contacts[1] = contacts[2];
        contacts[2] = contacts[3];
        contacts[3] = contacts[4];
        contacts[4] = contacts[5];
        contacts[5] = contacts[6];
        contacts[6] = contacts[7];
        Contact newContact;
        newContact.setContactInfo();
        contacts[7] = newContact;
    }
}

void PhoneBook::getContact(void) const
{
    std::cout << "|   Index  | First Name|  Last Name|   Nickname|" << std::endl;
    for (int i = 0; i < contactCount; i++)
        contacts[i].getSummary(i);
    
    int index;
    std::cout << std::endl;
    std::cout << "Enter the index of the contact to display: ";
    std::cin >> index;

    if (index >= 0 && index < contactCount)
        contacts[index].getDetails();
    else
        std::cout << "Invalid index. Please enter a valid index." << std::endl;
}
