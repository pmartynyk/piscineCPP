/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 11:34:08 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/05 11:34:09 by pmartyny         ###   ########.fr       */
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
