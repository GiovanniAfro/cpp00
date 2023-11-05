/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:28:28 by gcavanna          #+#    #+#             */
/*   Updated: 2023/11/05 18:44:33 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void)
{
    fisrtName = "";
    lastName = "";
    nickname = "";
    phoneNumber = "";
    darkestSecret = "";
}

Contact::~Contact(void) {};

void Contact::setContactInfo(void)
{
    std::cout << "Enter first name: ";
    std::cin >> fisrtName;
    std::cout << "Enter last name: ";
    std::cin >> lastName;
    std::cout << "Enter nickname: ";
    std::cin >> nickname;
    std::cout << "Enter phone number: ";
    std::cin >> phoneNumber;
    std::cout << "Enter darkest secret :D : ";
    std::cin >> darkestSecret;
}

bool Contact::getEmpty(void) const
{
    return fisrtName.empty() || lastName.empty() || nickname.empty() || phoneNumber.empty() || darkestSecret.empty();//La funzione .empty() è un membro della classe std::string in C++ che viene utilizzato per verificare se una stringa è vuota o contiene caratteri. Restituisce true se la stringa è vuota (ossia non contiene caratteri) e false se contiene almeno un carattere.
}

void Contact::getSummary(int index) const
{
    std::cout << "|" << std::setw(10) << index << "|"; //La funzione std::setw è una funzione della libreria <iomanip> in C++ che imposta la larghezza del campo di output per gli oggetti di output come std::cout. Questa funzione viene comunemente utilizzata per formattare l'output in modo che i dati siano allineati in colonne.
    std::cout << std::setw(10) << (fisrtName.length() > 10 ? fisrtName.substr(0, 9) + "." : fisrtName) << "|";
    std::cout << std::setw(10) << (lastName.length() > 10 ? lastName.substr(0, 9) + "." : lastName) << "|";
    std::cout << std::setw(10) << (nickname.length() > 10 ? nickname.substr(0, 9) + "." : nickname) << "|";
}

void Contact::getDetails(void) const
{
    std::cout << "Fisrt Name: " << fisrtName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}