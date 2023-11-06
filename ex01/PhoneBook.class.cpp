/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:02:07 by gcavanna          #+#    #+#             */
/*   Updated: 2023/11/06 15:38:23 by gcavanna         ###   ########.fr       */
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
    Contact newContact;
    newContact.setContactInfo();

    if (newContact.getEmpty())
    {
        std::cout << "YOU FOOL, COMPLETE ALL THE INFO." << std::endl;
        return;
    }

    if (contactCount < 8)
    {
        contacts[contactCount] = newContact;
        contactCount++;
    }
    else
    {
        for (int i = 0; i < 7; i++)
        {
            contacts[i] = contacts[i + 1];
        }
        contacts[7] = newContact;
    }
}

void PhoneBook::getContact(void) const
{
    std::cout << "|   Index  |First Name| Last Name|  Nickname|" << std::endl;

    int validContacts = 0;
    for (int i = 0; i < contactCount; i++)
    {
        if (!contacts[i].getEmpty())
        {
            contacts[i].getSummary(validContacts);
            validContacts++;
        }
    }

    if (validContacts == 0)
    {
        std::cout << "No valid contacts to dysplay" << std::endl;
        return;
    }

    int index;
    std::cout << std::endl;
    std::cout << "Enter the index of the contact to display: ";
    std::cin >> index;

    if (index >= 0 && index < validContacts)
    {
        int validIndex = 0;
        for (int i = 0; i < contactCount; i++)
        {
            if (!contacts[i].getEmpty())
            {
                if (validIndex == index)
                {
                    contacts[i].getDetails();
                    break;
                }
                validIndex++;
            }
    
        }
    }
    else
        std::cout << "Invalid index. Please enter a valid index." << std::endl;
}
