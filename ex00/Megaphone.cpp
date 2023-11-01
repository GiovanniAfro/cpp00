/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:41:24 by gcavanna          #+#    #+#             */
/*   Updated: 2023/11/01 13:12:27 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    char c;
    int i;
    int t;

    i = 1;
    
    while (i < ac)
    {
        t = 0;
        while(av[i][t] != '\0')
        {
            c = av[i][t];
            std::cout << static_cast<char>(std::toupper(c));
            t++;
        }
        i++;
    }
    std::cout << std::endl;
    return 0;
}