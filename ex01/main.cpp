/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:21:30 by gcavanna          #+#    #+#             */
/*   Updated: 2023/11/05 18:50:30 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

int main(void)
{
    PhoneBook phonebook;
    std::string command;

    while (true)
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::cin >> command;

        if (command == "ADD")
            phonebook.addContact();
        else if (command == "SEARCH")
            phonebook.getContact();
        else if (command == "EXIT")
            break;
        else
            std::cout << "Invalid command. Please ADD, SEARCH, or EXIT. or i will kill you :D" << std::endl;
    }
    return 0;
}