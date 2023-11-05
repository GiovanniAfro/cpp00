/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:58:06 by gcavanna          #+#    #+#             */
/*   Updated: 2023/11/05 18:45:51 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{

    public:
        Contact(void);
        ~Contact(void);
        void    setContactInfo(void);
        bool    getEmpty(void) const;
        void    getSummary(int  index) const;
        void    getDetails(void) const;

    private:
        std::string fisrtName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
};

#endif