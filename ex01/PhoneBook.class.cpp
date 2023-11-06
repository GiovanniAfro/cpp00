/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:02:07 by gcavanna          #+#    #+#             */
/*   Updated: 2023/11/06 15:09:54 by gcavanna         ###   ########.fr       */
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
    for (int i = 0; i < contactCount; i++)
    {
        if (!contacts[i].getEmpty())
            contacts[i].getSummary(i);
    }

    int index;
    std::cout << std::endl;
    std::cout << "Enter the index of the contact to display: ";
    std::cin >> index;

    if (index >= 0 && index < contactCount)
    {
        if (!contacts[index].getEmpty())
            contacts[index].getDetails();
        else
            std::cout << "Invalid index. Please enter a valid index." << std::endl;
    }
    else
        std::cout << "Invalid index. Please enter a valid index." << std::endl;
}
