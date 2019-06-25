/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 18:19:53 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/25 18:19:55 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int     main(void)
{
    std::string a = "HI THIS IS BRAIN";
    std::string *b = &a;
    std::string &c = a;

    std::cout << a << std::endl;
    std::cout << "Pointer: " << *b << std::endl;
    std::cout << "Reference: " << c << std::endl;

    return (0);
}
